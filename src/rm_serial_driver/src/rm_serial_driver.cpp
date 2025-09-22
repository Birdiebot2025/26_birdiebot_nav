
// Copyright (c) 2022 ChenJun
// Licensed under the Apache-2.0 License.

#include <tf2/LinearMath/Quaternion.h>

#include <rclcpp/logging.hpp>
#include <rclcpp/qos.hpp>
#include <rclcpp/utilities.hpp>
#include <serial_driver/serial_driver.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

// C++ system
#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <string>
#include <vector>

#include "rm_serial_driver/crc.hpp"
#include "rm_serial_driver/packet.hpp"
#include "rm_serial_driver/rm_serial_driver.hpp"

namespace rm_serial_driver
{
RMSerialDriver::RMSerialDriver(const rclcpp::NodeOptions & options)
: Node("rm_serial_driver", options),
  owned_ctx_{new IoContext(2)},
  serial_driver_{new drivers::serial_driver::SerialDriver(*owned_ctx_)}
{
  RCLCPP_INFO(get_logger(), "Start RMSerialDriver!");

  getParams();

  // TF broadcaster
  timestamp_offset_ = this->declare_parameter("timestamp_offset", 0.0);
  tf_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);

  // Create Publisher
  latency_pub_ = this->create_publisher<std_msgs::msg::Float64>("/latency", 10);
  marker_pub_ = this->create_publisher<visualization_msgs::msg::Marker>("/aiming_point", 10);

  // Detect parameter client
  detector_param_client_ = std::make_shared<rclcpp::AsyncParametersClient>(this, "armor_detector");

  // Tracker reset service client
  reset_tracker_client_ = this->create_client<std_srvs::srv::Trigger>("/tracker/reset");

  latency_time_ = this->declare_parameter("latency_time", 0.0);

  auto recv_thread = [this](std::vector<uint8_t> & data, const size_t & len) {
    buffer_mutex_.lock();
    buffer.insert(buffer.end(), data.begin(), data.begin() + len);
    buffer_mutex_.unlock();
  };
  try {
    serial_driver_->init_port(device_name_, *device_config_);
    if (!serial_driver_->port()->is_open()) {
      serial_driver_->port()->open();
      serial_driver_->port()->async_receive(recv_thread);
      receive_thread_ = std::thread(&RMSerialDriver::receiveData, this);
    }
  } catch (const std::exception & ex) {
    RCLCPP_ERROR(
      get_logger(), "Error creating serial port: %s - %s", device_name_.c_str(), ex.what());
    throw ex;
  }

  aiming_point_.header.frame_id = "odom";
  aiming_point_.ns = "aiming_point";
  aiming_point_.type = visualization_msgs::msg::Marker::SPHERE;
  aiming_point_.action = visualization_msgs::msg::Marker::ADD;
  aiming_point_.scale.x = aiming_point_.scale.y = aiming_point_.scale.z = 0.12;
  aiming_point_.color.r = 1.0;
  aiming_point_.color.g = 1.0;
  aiming_point_.color.b = 1.0;
  aiming_point_.color.a = 1.0;
  aiming_point_.lifetime = rclcpp::Duration::from_seconds(0.1);

  // Create Subscription
  target_sub_ = this->create_subscription<auto_aim_interfaces::msg::Target>(
    "/tracker/target", rclcpp::SensorDataQoS(),
    std::bind(&RMSerialDriver::sendAutoAimData, this, std::placeholders::_1));

  nav_control_sub_ = this->create_subscription<geometry_msgs::msg::Twist>(
    "/cmd_vel_chassis", rclcpp::SensorDataQoS(),
    std::bind(&RMSerialDriver::sendNavData, this, std::placeholders::_1));

  //Create Publisher
  // decision_pub_ = this->create_publisher<rm_decision_interfaces::msg::CvDecision>("/cv_decision", 10);
  // robot_status_pub_ =
  //   this->create_publisher<rm_decision_interfaces::msg::CvDecision>("/robot_status", 10);
  // game_status_pub_ =
  //   this->create_publisher<rm_decision_interfaces::msg::CvDecision>("/game_status", 10);
  // robot_hp_pub_ = this->create_publisher<rm_decision_interfaces::msg::CvDecision>("/robot_hp", 10);
  decision_status_pub_ = this->create_publisher<rm_decision_interfaces::msg::CvDecision>("/decision_status", 10);
}

RMSerialDriver::~RMSerialDriver()
{
  if (receive_thread_.joinable()) {
    receive_thread_.join();
  }

  if (serial_driver_->port()->is_open()) {
    serial_driver_->port()->close();
  }

  if (owned_ctx_) {
    owned_ctx_->waitForExit();
  }
}

void RMSerialDriver::receiveData()
{
  std::vector<uint8_t> data(1);

  enum class State {
    WAIT,
    DATA_LEN,
    READ_DATA,
    CRC16,
  };

  State state = State::WAIT;

  Frame_t rx_;

  while (rclcpp::ok()) {
    try {
      buffer_mutex_.lock();
      if (buffer.size() > 0) {
        // 等待SOF
        if (state == State::WAIT) {
          if (buffer[0] == FRAME_SOF) {
            rx_.sof = buffer[0];
            state = State::DATA_LEN;
          } else {
            buffer.erase(buffer.begin());
          }
        }

        // 获取data_len
        if (state == State::DATA_LEN) {
          if (buffer.size() > 0) {
            rx_.data_len = buffer[0 + sizeof(rx_.sof)];
            state = State::READ_DATA;
          }
        }

        // 获取data
        if (state == State::READ_DATA) {
          if (buffer.size() >= rx_.data_len) {
            std::copy(
              buffer.begin() + sizeof(rx_.data_len) + sizeof(rx_.sof),
              buffer.begin() + sizeof(rx_.data_len) + sizeof(rx_.sof) + rx_.data_len,
              reinterpret_cast<uint8_t *>(&rx_.data));
            state = State::CRC16;
          }
        }

        // CRC校验阶段
        if (state == State::CRC16) {
          bool crc_ok = crc16::Verify_CRC16_Check_Sum(
            reinterpret_cast<const uint8_t *>(&rx_.data), rx_.data_len);
          if (crc_ok) {
            switch (rx_.data[0]) {
              case AUTOAIM_MCU2AI: {
                Protocol_MCUPacket_t temp;
                memcpy(&temp, rx_.data, sizeof(temp));
                AutoAimCallBack(temp);
                break;
              }
              case DECISION_MCU2AI: {
                Protocol_UpDataReferee_t temp;
                memcpy(&temp, rx_.data, sizeof(temp));
                DecisionCallBack(temp);
                break;
              }
              default:
                break;
            }
            memset(&rx_, 0, sizeof(rx_));
            buffer.erase(
              buffer.begin(),
              buffer.begin() + sizeof(rx_.data_len) + sizeof(rx_.sof) + rx_.data_len);
            state = State::WAIT;
          } else {
            state = State::WAIT;
            RCLCPP_ERROR(get_logger(), "CRC error!");
            memset(&rx_, 0, sizeof(rx_));
            buffer.erase(buffer.begin());
          }
        }
      }
      buffer_mutex_.unlock();
    } catch (const std::exception & ex) {
      RCLCPP_ERROR_THROTTLE(
        get_logger(), *get_clock(), 20, "Error while receiving data: %s", ex.what());
      reopenPort();
      state = State::WAIT;
    }
  }
}

void RMSerialDriver::AutoAimCallBack(Protocol_MCUPacket_t & packet)
{
  if (!initial_set_param_ || packet.detect_color != previous_receive_color_) {
    setParam(rclcpp::Parameter("detect_color", packet.detect_color));
  }

  if (packet.reset_tracker) {
    resetTracker();
  }

  geometry_msgs::msg::TransformStamped t;
  timestamp_offset_ = this->get_parameter("timestamp_offset").as_double();
  t.header.stamp = this->now() + rclcpp::Duration::from_seconds(timestamp_offset_);
  t.header.frame_id = "odom";
  t.child_frame_id = "gimbal_link";
  tf2::Quaternion q;
  q.setRPY(packet.roll, packet.pitch, packet.yaw);
  t.transform.rotation = tf2::toMsg(q);
  tf_broadcaster_->sendTransform(t);

  if (abs(packet.aim_x) > 0.01) {
    aiming_point_.header.stamp = this->now();
    aiming_point_.pose.position.x = packet.aim_x;
    aiming_point_.pose.position.y = packet.aim_y;
    aiming_point_.pose.position.z = packet.aim_z;
    marker_pub_->publish(aiming_point_);
  }
}

void RMSerialDriver::DecisionCallBack(Protocol_UpDataReferee_t & data)
{
  rm_decision_interfaces::msg::CvDecision decision;
  decision.game_progress = data.game_progress;
  decision.stage_remain_time = data.stage_remain_time;
  decision.red_1_robot_hp = data.red_1_robot_hp;
  decision.red_2_robot_hp = data.red_2_robot_hp;
  decision.red_3_robot_hp = data.red_3_robot_hp;
  decision.red_4_robot_hp = data.red_4_robot_hp;
  decision.red_7_robot_hp = data.red_7_robot_hp;
  decision.red_outpost_hp = data.red_outpost_hp;
  decision.red_base_hp = data.red_base_hp;
  decision.blue_1_robot_hp = data.blue_1_robot_hp;
  decision.blue_2_robot_hp = data.blue_2_robot_hp;
  decision.blue_3_robot_hp = data.blue_3_robot_hp;
  decision.blue_4_robot_hp = data.blue_4_robot_hp;
  decision.blue_7_robot_hp = data.blue_7_robot_hp;
  decision.blue_outpost_hp = data.blue_outpost_hp;
  decision.blue_base_hp = data.blue_base_hp;
  decision.robot_id = data.robot_id;
  decision.current_hp = data.current_hp;
  decision.maximum_hp = data.maximum_hp;
  decision.shooter_17_mm_1_barrel_heat = data.shooter_17_mm_1_barrel_heat;
  decision.shooter_17_mm_2_barrel_heat = data.shooter_17_mm_2_barrel_heat;
  decision.projectile_allowance_17mm = data.projectile_allowance_17mm;
  decision.remaining_gold_coin = data.remaining_gold_coin;
  decision.center_gain_point = data.center_gain_point;
  decision.team_color = data.team_color;
  decision.decision_num = data.decision_num;

  // robot_status_pub_->publish(decision);
  // game_status_pub_->publish(decision);
  // robot_hp_pub_->publish(decision);
  decision_status_pub_->publish(decision);
}

void RMSerialDriver::sendAutoAimData(const auto_aim_interfaces::msg::Target::SharedPtr msg)
{
  const static std::map<std::string, uint8_t> id_unit8_map{
    {"", 0},  {"outpost", 0}, {"1", 1}, {"1", 1},     {"2", 2},
    {"3", 3}, {"4", 4},       {"5", 5}, {"guard", 6}, {"base", 7}};
  Frame_t tx_;

  try {
    // SOF
    tx_.sof = FRAME_SOF;
    memcpy(tx_.data, &tx_.sof, sizeof(tx_.sof));

    // data len
    tx_.data_len = sizeof(Protocol_MasterPacket_t);
    memcpy(tx_.data + sizeof(tx_.sof), &tx_.data_len, sizeof(tx_.data_len));

    //打包数据
    Protocol_MasterPacket_t packet;
    packet.tracking = msg->tracking;
    packet.id = id_unit8_map.at(msg->id);
    packet.armors_num = msg->armors_num;
    packet.x = msg->position.x;
    packet.y = msg->position.y;
    packet.z = msg->position.z;
    packet.yaw = msg->yaw;
    packet.vx = msg->velocity.x;
    packet.vy = msg->velocity.y;
    packet.vz = msg->velocity.z;
    packet.v_yaw = msg->v_yaw;
    packet.r1 = msg->radius_1;
    packet.r2 = msg->radius_2;
    packet.dz = msg->dz;
    latency_time_ = this->get_parameter("latency_time").as_double();
    packet.letency_time = latency_time_;
    crc16::Append_CRC16_Check_Sum(reinterpret_cast<uint8_t *>(&packet), sizeof(packet));

    memcpy(tx_.data + sizeof(tx_.sof) + sizeof(tx_.data_len), &packet, sizeof(packet));

    std::vector<uint8_t> tx_vecor(
      sizeof(tx_.sof) + sizeof(tx_.data_len) + sizeof(Protocol_MasterPacket_t));
    std::copy(
      reinterpret_cast<const uint8_t *>(&tx_.data),
      reinterpret_cast<const uint8_t *>(&tx_.data) + tx_vecor.size(), tx_vecor.begin());
    serial_driver_->port()->send(tx_vecor);
    memset(tx_.data, 0, sizeof(tx_.data));

    std_msgs::msg::Float64 latency;
    latency.data = (this->now() - msg->header.stamp).seconds() * 1000.0;
    RCLCPP_DEBUG_STREAM(get_logger(), "Total latency: " + std::to_string(latency.data) + "ms");
    latency_pub_->publish(latency);
  } catch (const std::exception & ex) {
    RCLCPP_ERROR(get_logger(), "Error while sending data: %s", ex.what());
    reopenPort();
  }
}

void RMSerialDriver::sendNavData(geometry_msgs::msg::Twist msg)
{
  Frame_t tx_;

  try {
    // SOF
    tx_.sof = FRAME_SOF;
    memcpy(tx_.data, &tx_.sof, sizeof(tx_.sof));

    // data len
    tx_.data_len = sizeof(Protocol_NavCommand_t);
    memcpy(tx_.data + sizeof(tx_.sof), &tx_.data_len, sizeof(tx_.data_len));

    //打包数据
    Protocol_NavCommand_t packet;
    packet.header = NAVIGATION_AI2MCU;
    packet.gimbal.rol = msg.angular.x;
    packet.gimbal.pit = msg.angular.y;
    packet.gimbal.yaw = msg.angular.z;
    packet.chassis_move_vec.vx = msg.linear.x;
    packet.chassis_move_vec.vy = msg.linear.y;
    packet.chassis_move_vec.wz = msg.linear.z;
    crc16::Append_CRC16_Check_Sum(reinterpret_cast<uint8_t *>(&packet), sizeof(packet));

    memcpy(tx_.data + sizeof(tx_.sof) + sizeof(tx_.data_len), &packet, sizeof(packet));

    std::vector<uint8_t> tx_vecor(
      sizeof(tx_.sof) + sizeof(tx_.data_len) + sizeof(Protocol_NavCommand_t));
    std::copy(
      reinterpret_cast<const uint8_t *>(&tx_.data),
      reinterpret_cast<const uint8_t *>(&tx_.data) + tx_vecor.size(), tx_vecor.begin());
    serial_driver_->port()->send(tx_vecor);
    memset(tx_.data, 0, sizeof(tx_.data));
  } catch (const std::exception & ex) {
    RCLCPP_ERROR(get_logger(), "Error while sending data: %s", ex.what());
    reopenPort();
  }
}
void RMSerialDriver::getParams()
{
  using FlowControl = drivers::serial_driver::FlowControl;
  using Parity = drivers::serial_driver::Parity;
  using StopBits = drivers::serial_driver::StopBits;

  uint32_t baud_rate{};
  auto fc = FlowControl::NONE;
  auto pt = Parity::NONE;
  auto sb = StopBits::ONE;

  try {
    device_name_ = declare_parameter<std::string>("device_name", "");
  } catch (rclcpp::ParameterTypeException & ex) {
    RCLCPP_ERROR(get_logger(), "The device name provided was invalid");
    throw ex;
  }

  try {
    baud_rate = declare_parameter<int>("baud_rate", 0);
  } catch (rclcpp::ParameterTypeException & ex) {
    RCLCPP_ERROR(get_logger(), "The baud_rate provided was invalid");
    throw ex;
  }

  try {
    const auto fc_string = declare_parameter<std::string>("flow_control", "");

    if (fc_string == "none") {
      fc = FlowControl::NONE;
    } else if (fc_string == "hardware") {
      fc = FlowControl::HARDWARE;
    } else if (fc_string == "software") {
      fc = FlowControl::SOFTWARE;
    } else {
      throw std::invalid_argument{
        "The flow_control parameter must be one of: none, software, or hardware."};
    }
  } catch (rclcpp::ParameterTypeException & ex) {
    RCLCPP_ERROR(get_logger(), "The flow_control provided was invalid");
    throw ex;
  }

  try {
    const auto pt_string = declare_parameter<std::string>("parity", "");

    if (pt_string == "none") {
      pt = Parity::NONE;
    } else if (pt_string == "odd") {
      pt = Parity::ODD;
    } else if (pt_string == "even") {
      pt = Parity::EVEN;
    } else {
      throw std::invalid_argument{"The parity parameter must be one of: none, odd, or even."};
    }
  } catch (rclcpp::ParameterTypeException & ex) {
    RCLCPP_ERROR(get_logger(), "The parity provided was invalid");
    throw ex;
  }

  try {
    const auto sb_string = declare_parameter<std::string>("stop_bits", "");

    if (sb_string == "1" || sb_string == "1.0") {
      sb = StopBits::ONE;
    } else if (sb_string == "1.5") {
      sb = StopBits::ONE_POINT_FIVE;
    } else if (sb_string == "2" || sb_string == "2.0") {
      sb = StopBits::TWO;
    } else {
      throw std::invalid_argument{"The stop_bits parameter must be one of: 1, 1.5, or 2."};
    }
  } catch (rclcpp::ParameterTypeException & ex) {
    RCLCPP_ERROR(get_logger(), "The stop_bits provided was invalid");
    throw ex;
  }

  device_config_ =
    std::make_unique<drivers::serial_driver::SerialPortConfig>(baud_rate, fc, pt, sb);
}

void RMSerialDriver::reopenPort()
{
  RCLCPP_WARN(get_logger(), "Attempting to reopen port");
  try {
    if (serial_driver_->port()->is_open()) {
      serial_driver_->port()->close();
    }
    serial_driver_->port()->open();
    RCLCPP_INFO(get_logger(), "Successfully reopened port");
  } catch (const std::exception & ex) {
    RCLCPP_ERROR(get_logger(), "Error while reopening port: %s", ex.what());
    if (rclcpp::ok()) {
      rclcpp::sleep_for(std::chrono::seconds(1));
      reopenPort();
    }
  }
}

void RMSerialDriver::setParam(const rclcpp::Parameter & param)
{
  if (!detector_param_client_->service_is_ready()) {
    RCLCPP_WARN(get_logger(), "Service not ready, skipping parameter set");
    return;
  }

  if (
    !set_param_future_.valid() ||
    set_param_future_.wait_for(std::chrono::seconds(0)) == std::future_status::ready) {
    RCLCPP_INFO(get_logger(), "Setting detect_color to %ld...", param.as_int());
    set_param_future_ = detector_param_client_->set_parameters(
      {param}, [this, param](const ResultFuturePtr & results) {
        for (const auto & result : results.get()) {
          if (!result.successful) {
            RCLCPP_ERROR(get_logger(), "Failed to set parameter: %s", result.reason.c_str());
            return;
          }
        }
        RCLCPP_INFO(get_logger(), "Successfully set detect_color to %ld!", param.as_int());
        initial_set_param_ = true;
        previous_receive_color_ = param.as_int();
      });
  }
}

void RMSerialDriver::resetTracker()
{
  if (!reset_tracker_client_->service_is_ready()) {
    RCLCPP_WARN(get_logger(), "Service not ready, skipping tracker reset");
    return;
  }

  auto request = std::make_shared<std_srvs::srv::Trigger::Request>();
  reset_tracker_client_->async_send_request(request);
  RCLCPP_INFO(get_logger(), "Reset tracker!");
}

}  // namespace rm_serial_driver

#include "rclcpp_components/register_node_macro.hpp"

// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
RCLCPP_COMPONENTS_REGISTER_NODE(rm_serial_driver::RMSerialDriver)

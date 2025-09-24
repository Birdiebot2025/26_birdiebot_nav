// Copyright (c) 2022 ChenJun
// Licensed under the Apache-2.0 License.

#ifndef RM_SERIAL_DRIVER__RM_SERIAL_DRIVER_HPP_
#define RM_SERIAL_DRIVER__RM_SERIAL_DRIVER_HPP_

#include <tf2_ros/transform_broadcaster.h>

#include <geometry_msgs/msg/transform_stamped.hpp>
#include <rclcpp/publisher.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp/subscription.hpp>
#include <rm_decision_interfaces/msg/detail/cv_decision__struct.hpp>
#include <serial_driver/serial_driver.hpp>
#include <std_msgs/msg/float64.hpp>
#include <std_srvs/srv/trigger.hpp>
#include <visualization_msgs/msg/marker.hpp>

// C++ system
#include <future>
#include <geometry_msgs/msg/twist.hpp>
#include <memory>
#include <string>
#include <thread>
#include <mutex>
#include <vector>

#include "auto_aim_interfaces/msg/target.hpp"
#include "host-protocol/protocol.h"
#include "rm_decision_interfaces/msg/cv_decision.hpp"

namespace rm_serial_driver
{
class RMSerialDriver : public rclcpp::Node
{
public:
  explicit RMSerialDriver(const rclcpp::NodeOptions & options);

  ~RMSerialDriver() override;

private:
  void getParams();

  void setParam(const rclcpp::Parameter & param);

  void reopenPort();  // 重新打开串口

  void resetTracker();  // 重置追踪器

  // Serial port
  std::unique_ptr<IoContext> owned_ctx_;
  std::string device_name_;
  std::unique_ptr<drivers::serial_driver::SerialPortConfig> device_config_;
  std::unique_ptr<drivers::serial_driver::SerialDriver> serial_driver_;

  // Param client to set detect_colr
  using ResultFuturePtr = std::shared_future<std::vector<rcl_interfaces::msg::SetParametersResult>>;
  bool initial_set_param_ = false;
  uint8_t previous_receive_color_ = 0;
  rclcpp::AsyncParametersClient::SharedPtr detector_param_client_;
  ResultFuturePtr set_param_future_;

  // Service client to reset tracker
  rclcpp::Client<std_srvs::srv::Trigger>::SharedPtr reset_tracker_client_;

  // Aimimg point receiving from serial port for visualization
  visualization_msgs::msg::Marker aiming_point_;

  // Broadcast tf from odom to gimbal_link
  double timestamp_offset_ = 0;
  std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;

  float latency_time_ = 0;
  // For debug usage
  rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr latency_pub_;
  rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub_;

  void receiveData();  // 串口接收线程
  std::thread receive_thread_;
  std::mutex buffer_mutex_;
  std::vector<uint8_t> buffer;


  /*
  自瞄相关
  */
  rclcpp::Subscription<auto_aim_interfaces::msg::Target>::SharedPtr target_sub_;
  void sendAutoAimData(
    auto_aim_interfaces::msg::Target::SharedPtr msg);   //（自瞄）视觉->电控回调函数
  void AutoAimCallBack(Protocol_MCUPacket_t & packet);  //（自瞄）电控->视觉回调函数


  /*
  导航与决策相关
  */
  rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr nav_control_sub_;
  void sendNavData(
    geometry_msgs::msg::Twist msg);   //（导航）视觉->电控回调函数
  void DecisionCallBack(Protocol_UpDataReferee_t & data);  //（决策）电控->视觉回调函数
  // 电控->视觉发布者
  rclcpp::Publisher<rm_decision_interfaces::msg::CvDecision>::SharedPtr decision_status_pub_;
};
}  // namespace rm_serial_driver

#endif  // RM_SERIAL_DRIVER__RM_SERIAL_DRIVER_HPP_
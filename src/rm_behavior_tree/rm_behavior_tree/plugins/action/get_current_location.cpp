#include "rm_behavior_tree/plugins/action/get_current_location.hpp"

#include <rclcpp/logging.hpp>

namespace rm_behavior_tree
{

GetCurrentLocationAction::GetCurrentLocationAction(
  const std::string & name, const BT::NodeConfig & config)
: BT::SyncActionNode(name, config)
{
  auto node = std::make_shared<rclcpp::Node>("get_current_location");
  if (!node) {
    throw std::runtime_error("Failed to create node 'get_current_location'");
  }

  auto clock = node->get_clock();
  tf2::Duration buffer_duration(tf2::durationFromSec(10.0));  // 10 seconds buffer
  tf_buffer_ = std::make_shared<tf2_ros::Buffer>(clock, buffer_duration, node);
  if (!tf_buffer_) {
    throw std::runtime_error("Failed to create tf2_ros::Buffer");
  }

  tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);
  if (!tf_listener_) {
    throw std::runtime_error("Failed to create tf2_ros::TransformListener");
  }
}

BT::NodeStatus GetCurrentLocationAction::tick()
{
  geometry_msgs::msg::TransformStamped t;

  try {
    t = tf_buffer_->lookupTransform("map", "base_link", tf2::TimePointZero);
    setOutput("current_location", t);

    RCLCPP_DEBUG(
      logger_,
      "Current Location:"
      "\nTranslation:"
      "\nx: %f"
      "\ny: %f"
      "\nz: %f"
      "\nRotation:"
      "\nx: %f"
      "\ny: %f"
      "\nz: %f"
      "\nw: %f",
      t.transform.translation.x, t.transform.translation.y, t.transform.translation.z,
      t.transform.rotation.x, t.transform.rotation.y, t.transform.rotation.z,
      t.transform.rotation.w);

    return BT::NodeStatus::SUCCESS;
  } catch (const tf2::TransformException & ex) {
    RCLCPP_ERROR(logger_, "Failed to transform base_link to map: %s", ex.what());
    return BT::NodeStatus::FAILURE;
  }
}

}  // namespace rm_behavior_tree

#include "behaviortree_cpp/bt_factory.h"
BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<rm_behavior_tree::GetCurrentLocationAction>("GetCurrentLocation");
}
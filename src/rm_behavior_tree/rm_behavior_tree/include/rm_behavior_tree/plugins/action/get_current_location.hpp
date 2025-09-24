#ifndef RM_BEHAVIOR_TREE__PLUGINS__ACTION__GET_CURRENT_LOCATION_HPP_
#define RM_BEHAVIOR_TREE__PLUGINS__ACTION__GET_CURRENT_LOCATION_HPP_

#include "behaviortree_cpp/action_node.h"
#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_listener.h"

namespace rm_behavior_tree
{

class GetCurrentLocationAction : public BT::SyncActionNode
{
public:
  GetCurrentLocationAction(const std::string & name, const BT::NodeConfig & config);

  BT::NodeStatus tick() override;

  static BT::PortsList providedPorts()
  {
    return {BT::OutputPort<geometry_msgs::msg::TransformStamped>("current_location")};
  }

private:
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_{nullptr};
  std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
  rclcpp::Logger logger_{rclcpp::get_logger("rm_behavor_tree")};
};
}  // namespace rm_behavior_tree

#endif  // RM_BEHAVIOR_TREE__PLUGINS__ACTION__GET_CURRENT_LOCATION_HPP_
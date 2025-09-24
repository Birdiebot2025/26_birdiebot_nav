#include "rm_behavior_tree/plugins/action/sub_all_robot_hp.hpp"

namespace rm_behavior_tree
{

SubAllRobotHPAction::SubAllRobotHPAction(
  const std::string & name, const BT::NodeConfig & conf, const BT::RosNodeParams & params)
: BT::RosTopicSubNode<rm_decision_interfaces::msg::CvDecision>(name, conf, params)
{
}

BT::NodeStatus SubAllRobotHPAction::onTick(
  const std::shared_ptr<rm_decision_interfaces::msg::CvDecision> & last_msg)
{
  if (last_msg)  // empty if no new message received, since the last tick
  {
    RCLCPP_DEBUG(
      logger(), "[%s] new message, red_outpost_hp: %s", name().c_str(),
      std::to_string(last_msg->red_outpost_hp).c_str());
    setOutput("robot_hp", *last_msg);
  }
  return BT::NodeStatus::SUCCESS;
}

}  // namespace rm_behavior_tree

#include "behaviortree_ros2/plugins.hpp"
CreateRosNodePlugin(rm_behavior_tree::SubAllRobotHPAction, "SubAllRobotHP");
#include "rm_behavior_tree/plugins/action/sub_cv_decision.hpp"

namespace rm_behavior_tree
{

SubCvDecisionAction::SubCvDecisionAction(
  const std::string & name, const BT::NodeConfig & conf, const BT::RosNodeParams & params)
: BT::RosTopicSubNode<rm_decision_interfaces::msg::CvDecision>(name, conf, params)
{
}

BT::NodeStatus SubCvDecisionAction::onTick(
  const std::shared_ptr<rm_decision_interfaces::msg::CvDecision> & last_msg)
{
  if (last_msg)  // empty if no new message received, since the last tick
  {
    RCLCPP_DEBUG(
      logger(), "[%s] new message from /cv_decision: %s", name().c_str(),
      std::to_string(last_msg->current_hp).c_str());
    setOutput("robot_status", *last_msg);
  }
  return BT::NodeStatus::SUCCESS;
}

}  // namespace rm_behavior_tree

#include "behaviortree_ros2/plugins.hpp"
CreateRosNodePlugin(rm_behavior_tree::SubCvDecisionAction, "SubCvDecision");
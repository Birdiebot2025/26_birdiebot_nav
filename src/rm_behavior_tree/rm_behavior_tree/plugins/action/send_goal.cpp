#include "rm_behavior_tree/plugins/action/send_goal.hpp"

namespace rm_behavior_tree
{

SendGoalAction::SendGoalAction(
  const std::string & name, const BT::NodeConfig & conf, const BT::RosNodeParams & params)
: RosActionNode<nav2_msgs::action::NavigateToPose>(name, conf, params)
{
}

bool SendGoalAction::setGoal(nav2_msgs::action::NavigateToPose::Goal & goal)
{
  auto res = getInput<geometry_msgs::msg::PoseStamped>("goal_pose");
  if(!res)
  {
    throw BT::RuntimeError("error reading port [goal_pose]:", res.error());
  }

  goal.pose = res.value();
  goal.pose.header.frame_id = "map";
  goal.pose.header.stamp = rclcpp::Clock().now();

  //  clang-format off
  std::cout << "Goal_pose:["
     << std::fixed << std::setprecision(1)
     << goal.pose.pose.position.x << ","
     << goal.pose.pose.position.y << ","
     << goal.pose.pose.position.z << ","
     << goal.pose.pose.orientation.x << ","
     << goal.pose.pose.orientation.y << ","
     << goal.pose.pose.orientation.z << ","
     << goal.pose.pose.orientation.w << "]\n";
  //  clang-format on

  return true;
}

void SendGoalAction::onHalt()
{
  RCLCPP_INFO(node_->get_logger(), "SendGoalAction has been halted.");
}

BT::NodeStatus SendGoalAction::onResultReceived(const WrappedResult & wr)
{
  switch (wr.code)
  {
    case rclcpp_action::ResultCode::SUCCEEDED:
      RCLCPP_INFO(node_->get_logger(), "Success!!!");
      return BT::NodeStatus::SUCCESS;
      break;
    case rclcpp_action::ResultCode::ABORTED:
      RCLCPP_INFO(node_->get_logger(), "Goal was aborted");
      return BT::NodeStatus::FAILURE;
      break;
    case rclcpp_action::ResultCode::CANCELED:
      RCLCPP_INFO(node_->get_logger(), "Goal was canceled");
      std::cout << "Goal was canceled" << '\n';
      return BT::NodeStatus::FAILURE;
      break;
    default:
      RCLCPP_INFO(node_->get_logger(), "Unknown result code");
      return BT::NodeStatus::FAILURE;
      break;
  }
}

BT::NodeStatus SendGoalAction::onFeedback(
  const std::shared_ptr<const nav2_msgs::action::NavigateToPose::Feedback> feedback)
{
  std::cout << "Distance remaining:" << feedback->distance_remaining << '\n';
  return BT::NodeStatus::RUNNING;
}

BT::NodeStatus SendGoalAction::onFailure(BT::ActionNodeErrorCode error)
{
  RCLCPP_ERROR(node_->get_logger(), "SendGoalAction failed with error code: %d", error);
  return BT::NodeStatus::FAILURE;
}

}  // namespace rm_behavior_tree

#include "behaviortree_ros2/plugins.hpp"
CreateRosNodePlugin(rm_behavior_tree::SendGoalAction, "SendGoal");
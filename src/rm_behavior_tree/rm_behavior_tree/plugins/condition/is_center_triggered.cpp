#include "rm_behavior_tree/plugins/condition/is_center_triggered.hpp"

namespace rm_behavior_tree
{
  IsCenterTriggeredAction::IsCenterTriggeredAction(const std::string & name, const BT::NodeConfig & config)
: BT::SimpleConditionNode(name, std::bind(&IsCenterTriggeredAction::checkCenterTriggered, this), config)
{
}

BT::NodeStatus IsCenterTriggeredAction::checkCenterTriggered()
{
  auto msg = getInput<rm_decision_interfaces::msg::CvDecision>("message");

  if (!msg) {
    std::cout << "missing required input [decision_status]" << '\n';
    return BT::NodeStatus::FAILURE;
  }

  if (msg->center_gain_point == 0) {
    std::cout << "双方未占领中央增益点" << '\n';
    return BT::NodeStatus::SUCCESS;
  } else if (msg->center_gain_point == 1) {
    std::cout << "己方已占领中央增益点" << '\n';
    return BT::NodeStatus::FAILURE;
  } else if (msg->center_gain_point == 2) {
    std::cout << "敌方已占领中央增益点" << '\n';
    return BT::NodeStatus::SUCCESS;
  } else if (msg->center_gain_point == 3) {
    std::cout << "双方共同占领中央增益点" << '\n';
    return BT::NodeStatus::SUCCESS;
  } else {
    std::cout << "未知状态" << '\n';
    return BT::NodeStatus::FAILURE;
  }

}

}  // namespace rm_behavior_tree

#include "behaviortree_cpp/bt_factory.h"
BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<rm_behavior_tree::IsCenterTriggeredAction>("IsCenterTriggered");
}

#include "rm_behavior_tree/plugins/condition/is_bullet_ok.hpp"

namespace rm_behavior_tree
{

IsBulletOKAction::IsBulletOKAction(const std::string & name, const BT::NodeConfig & config)
: BT::SimpleConditionNode(name, std::bind(&IsBulletOKAction::checkRobotStatus, this), config)
{
}

BT::NodeStatus IsBulletOKAction::checkRobotStatus()
{
  int bullet_threshold;
  auto msg = getInput<rm_decision_interfaces::msg::CvDecision>("message");
  getInput("bullet_threshold", bullet_threshold);

  if (!msg) {
    // throw BT::RuntimeError("missing required input [game_status]: ", msg.error());
    std::cout << "missing required input [game_status]" << '\n';
    return BT::NodeStatus::FAILURE;
  }

  if (msg->projectile_allowance_17mm == bullet_threshold) {
    std::cout << "剩余发弹量达到预警值" << '\n';
    return BT::NodeStatus::FAILURE;
  } else {
    std::cout << "剩余发弹量正常" << '\n';
    return BT::NodeStatus::SUCCESS;
  }

}

}  // namespace rm_behavior_tree

#include "behaviortree_cpp/bt_factory.h"
BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<rm_behavior_tree::IsBulletOKAction>("IsBulletOK");
}
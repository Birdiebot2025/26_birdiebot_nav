#include "rm_behavior_tree/plugins/condition/is_enemy_outpost_ok.hpp"

#include <iostream>

namespace rm_behavior_tree
{

IsEnemyOutpostOKAction::IsEnemyOutpostOKAction(const std::string & name, const BT::NodeConfig & config)
: BT::SimpleConditionNode(name, std::bind(&IsEnemyOutpostOKAction::checkRobotStatus, this), config)
{
}

BT::NodeStatus IsEnemyOutpostOKAction::checkRobotStatus()
{
  int hp_threshold = 0;
  int outpost_hp = 0;
  auto outpost_hp_msg = getInput<rm_decision_interfaces::msg::CvDecision>("robot_hp");
  auto robot_status_msg = getInput<rm_decision_interfaces::msg::CvDecision>("robot_status");
  getInput("hp_threshold", hp_threshold);

  if (!outpost_hp_msg || !robot_status_msg) {
    return BT::NodeStatus::FAILURE;
  }

  outpost_hp = (robot_status_msg->team_color == TeamColor::RED) ? outpost_hp_msg->blue_outpost_hp
                                                                : outpost_hp_msg->red_outpost_hp;
  std::cout << "enemy_outpost_hp:" << outpost_hp << '\n';

  return (outpost_hp < hp_threshold) ? BT::NodeStatus::FAILURE : BT::NodeStatus::SUCCESS;
}

}  // namespace rm_behavior_tree

#include "behaviortree_cpp/bt_factory.h"
BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<rm_behavior_tree::IsEnemyOutpostOKAction>("IsEnemyOutpostOK");
}
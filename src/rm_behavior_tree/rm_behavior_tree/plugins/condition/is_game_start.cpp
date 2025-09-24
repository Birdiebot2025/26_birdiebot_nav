#include "rm_behavior_tree/plugins/condition/is_games_start.hpp"

namespace rm_behavior_tree
{

IsGameStartCondition::IsGameStartCondition(const std::string & name, const BT::NodeConfig & config)
: BT::SimpleConditionNode(name, std::bind(&IsGameStartCondition::checkGameStart, this), config)
{
}

BT::NodeStatus IsGameStartCondition::checkGameStart()
{
  auto msg = getInput<rm_decision_interfaces::msg::CvDecision>("message");
  if (!msg) {
    std::cout << "missing required input [decision_status]" << '\n';
    return BT::NodeStatus::FAILURE;
  }

  std::unordered_map<int, std::string> game_status_map = {
    {0, "未开始比赛"}, {1, "准备阶段"},    {2, "十五秒裁判系统自检阶段"},
    {3, "五秒倒计时"}, {4, "比赛开始!!!"}, {5, "比赛结算中"},
  };

  if (game_status_map.find(msg->game_progress) != game_status_map.end()) {
    std::cout << game_status_map[msg->game_progress] << '\n';
    return (msg->game_progress == 4) ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
  } else {
    std::cout << "未知状态" << '\n';
    return BT::NodeStatus::FAILURE;
  }
}

}  // namespace rm_behavior_tree

#include "behaviortree_cpp/bt_factory.h"
BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<rm_behavior_tree::IsGameStartCondition>("IsGameStart");
}

#include "rm_behavior_tree/plugins/condition/is_time_triggered.hpp"

namespace rm_behavior_tree
{

  IsTimeTriggeredCondition::IsTimeTriggeredCondition(const std::string & name, const BT::NodeConfig & config)
: BT::SimpleConditionNode(name, std::bind(&IsTimeTriggeredCondition::checkTimeTriggered, this), config)
{
}

BT::NodeStatus IsTimeTriggeredCondition::checkTimeTriggered()
{
  // 获取输入端口数据
  auto msg = getInput<rm_decision_interfaces::msg::CvDecision>("message");
  int flag_time;
  getInput("flag_time", flag_time);

  if (!msg) {
    std::cout << "missing required input [message]" << '\n';
    return BT::NodeStatus::FAILURE;
  }

  // 根据条件判断决策是否满足
  if (msg->stage_remain_time == flag_time)
  {
    return BT::NodeStatus::SUCCESS;
  }
  else
  {
    return BT::NodeStatus::FAILURE;
  }
}

}  // namespace rm_behavior_tree

#include "behaviortree_cpp/bt_factory.h"
BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<rm_behavior_tree::IsTimeTriggeredCondition>("IsTimeTriggered");
}
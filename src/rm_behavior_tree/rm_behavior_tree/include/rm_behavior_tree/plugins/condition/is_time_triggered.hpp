#ifndef RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_TIME_TRIGGERED_HPP_
#define RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_TIME_TRIGGERED_HPP_

#include "behaviortree_cpp/condition_node.h"
#include "rm_decision_interfaces/msg/cv_decision.hpp"

namespace rm_behavior_tree
{
/**
 * @brief Condition节点，用于检查决策条件
 * 
 * 该节点从输入端口获取决策消息和时间标志，并根据条件判断决策是否满足。
 * 如果决策满足条件，返回成功；否则返回失败。
 * @param[in] message 决策消息
 * @param[in] flag_time 时间标志
 */
class IsTimeTriggeredCondition : public BT::SimpleConditionNode
{
public:
  IsTimeTriggeredCondition(const std::string & name, const BT::NodeConfig & config);

  BT::NodeStatus checkTimeTriggered();

  static BT::PortsList providedPorts()
  {
    return {
      BT::InputPort<rm_decision_interfaces::msg::CvDecision>("message"),
      BT::InputPort<int>("flag_time"),
    };
  }
};

}  // namespace rm_behavior_tree

#endif  // RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_TIME_TRIGGERED_HPP_

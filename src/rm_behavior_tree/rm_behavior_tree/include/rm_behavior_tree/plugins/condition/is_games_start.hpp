#ifndef RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_GAME_START_HPP_
#define RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_GAME_START_HPP_

#include "behaviortree_cpp/condition_node.h"
#include "rm_decision_interfaces/msg/cv_decision.hpp"

namespace rm_behavior_tree
{

/**
 * @brief condition节点，用于判断比赛是否开始
 * @param[in] message 比赛状态话题id
 */
class IsGameStartCondition : public BT::SimpleConditionNode
{
public:
  IsGameStartCondition(const std::string & name, const BT::NodeConfig & config);

  BT::NodeStatus checkGameStart();

  static BT::PortsList providedPorts()
  {
    return {BT::InputPort<rm_decision_interfaces::msg::CvDecision>("message")};
  }
};
}  // namespace rm_behavior_tree

#endif  // RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_GAME_START_HPP_
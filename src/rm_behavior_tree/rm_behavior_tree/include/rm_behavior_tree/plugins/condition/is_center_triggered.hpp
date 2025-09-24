#ifndef RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_CENTER_TRIGGERED_HPP_
#define RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_CENTER_TRIGGERED_HPP_

#include "behaviortree_cpp/condition_node.h"
#include "rm_decision_interfaces/msg/cv_decision.hpp"

namespace rm_behavior_tree
{

class IsCenterTriggeredAction : public BT::SimpleConditionNode
{
public:
IsCenterTriggeredAction(const std::string & name, const BT::NodeConfig & config);

  BT::NodeStatus checkCenterTriggered();

  static BT::PortsList providedPorts()
  {
    return {BT::InputPort<rm_decision_interfaces::msg::CvDecision>("message")};
  }
};
}  // namespace rm_behavior_tree

#endif  // RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_CENTER_TRIGGERED_HPP_
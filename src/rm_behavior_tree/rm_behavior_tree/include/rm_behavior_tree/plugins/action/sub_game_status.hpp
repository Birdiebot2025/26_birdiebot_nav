#ifndef RM_BEHAVIOR_TREE__PLUGINS__ACTION__SUB_GAME_STATUS_HPP_
#define RM_BEHAVIOR_TREE__PLUGINS__ACTION__SUB_GAME_STATUS_HPP_

#include "behaviortree_ros2/bt_topic_sub_node.hpp"
#include "rm_decision_interfaces/msg/cv_decision.hpp"

namespace rm_behavior_tree
{
class SubGameStatusAction : public BT::RosTopicSubNode<rm_decision_interfaces::msg::CvDecision>
{
public:
  SubGameStatusAction(
    const std::string & name, const BT::NodeConfig & conf, const BT::RosNodeParams & params);

  static BT::PortsList providedPorts()
  {
    return {
      BT::InputPort<std::string>("topic_name"),
      BT::OutputPort<rm_decision_interfaces::msg::CvDecision>("game_status")};
  }

  BT::NodeStatus onTick(
    const std::shared_ptr<rm_decision_interfaces::msg::CvDecision> & last_msg) override;
};
}  // namespace rm_behavior_tree

#endif  // RM_BEHAVIOR_TREE__PLUGINS__ACTION__SUB_GAME_STATUS_HPP_
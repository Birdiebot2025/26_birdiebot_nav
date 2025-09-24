#ifndef RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_STATUS_OK_HPP_
#define RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_STATUS_OK_HPP_

#include "behaviortree_cpp/condition_node.h"
#include "rm_decision_interfaces/msg/cv_decision.hpp"

namespace rm_behavior_tree
{
/**
 * @brief Action节点，用于判断机器人状态是否正常
 * 
 * 该节点从输入端口获取机器人状态消息、血量阈值和热量阈值，并根据条件判断机器人状态是否正常。
 * 如果机器人状态不正常（血量低于阈值或热量高于阈值），返回失败；否则返回成功。
 * @param[in] message 机器人状态话题id
 * @param[in] hp_threshold 最低血量阈值
 * @param[in] heat_threshold 最大热量阈值
 */
class IsStatusOKAction : public BT::SimpleConditionNode
{
public:
  IsStatusOKAction(const std::string & name, const BT::NodeConfig & config);

  // BT::NodeStatus checkGameStart(BT::TreeNode & self_node)
  BT::NodeStatus checkRobotStatus();

  static BT::PortsList providedPorts()
  {
    return {
      BT::InputPort<rm_decision_interfaces::msg::CvDecision>("message"),
      BT::InputPort<int>("hp_threshold"), 
      };
  }
};
}  // namespace rm_behavior_tree

#endif  // RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_STATUS_OK_HPP_
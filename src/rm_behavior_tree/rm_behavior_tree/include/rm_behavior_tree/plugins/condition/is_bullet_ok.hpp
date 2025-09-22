#ifndef RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_BULLET_OK_HPP_
#define RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_BULLET_OK_HPP_

#include "behaviortree_cpp/condition_node.h"
#include "rm_decision_interfaces/msg/cv_decision.hpp"

namespace rm_behavior_tree
{
/**
 * @brief Action节点，用于判断机器人状态是否正常
 * 
 * 该节点从输入端口获取机器人状态消息、剩余发弹量阈值，并根据条件判断机器人状态是否正常。
 * 如果机器人状态不正常（剩余发弹量低于阈值），返回失败；否则返回成功。
 * @param[in] message 机器人状态话题id
 * @param[in] bullet_threshold 最低剩余发弹量阈值
 */
class IsBulletOKAction : public BT::SimpleConditionNode
{
public:
  IsBulletOKAction(const std::string & name, const BT::NodeConfig & config);

  // BT::NodeStatus checkGameStart(BT::TreeNode & self_node)
  BT::NodeStatus checkRobotStatus();

  static BT::PortsList providedPorts()
  {
    return {
      BT::InputPort<rm_decision_interfaces::msg::CvDecision>("message"),
      BT::InputPort<int>("bullet_threshold"),
      };
  }
};
}  // namespace rm_behavior_tree

#endif  // RM_BEHAVIOR_TREE__PLUGINS__ACTION__IS_BULLET_OK_HPP_
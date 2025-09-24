#ifndef RM_BEHAVIOR_TREE__PLUGINS__ACTION__SEND_GOAL_HPP_
#define RM_BEHAVIOR_TREE__PLUGINS__ACTION__SEND_GOAL_HPP_

#include "behaviortree_ros2/bt_action_node.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "nav2_msgs/action/navigate_to_pose.hpp"
#include "rm_behavior_tree/bt_conversions.hpp"

namespace rm_behavior_tree
{
class SendGoalAction : public BT::RosActionNode<nav2_msgs::action::NavigateToPose>
{
public:
  SendGoalAction(const std::string & name, const BT::NodeConfig & conf, const BT::RosNodeParams & params);

  static BT::PortsList providedPorts()
  {
    return
    {
      //输入端口  用于接收导航目标点位
      BT::InputPort<geometry_msgs::msg::PoseStamped>("goal_pose"),
      //输入端口  用于接收执行的行为名称
      BT::InputPort<std::string>("action_name")
    };
  }

  //设置导航目标的具体位置和方向  接收一个“Goal”类型的参数“goal”  返回一个bool  表示是否成功设置了目标
  bool setGoal(Goal & goal) override;
  //节点被暂停时调用  以确保节点在暂停时能够正确地停止正在进行的操作
  void onHalt() override;
  //接收到执行结果时被调用  接收一个“WrappedResult”类型的参数“wr”  返回一个BT::NodeStatus枚举值  表示节点的执行状态
  BT::NodeStatus onResultReceived(const WrappedResult & wr) override;
  //接收到反馈信息时被调用  接受一个“std::shared_ptr<const Feedback>”类型的参数“feedback”  返回一个“BT::NodeStatus”枚举值  表示节点的执行状态
  BT::NodeStatus onFeedback(const std::shared_ptr<const Feedback> feedback) override;
  //在执行失败时被调用  接受一个“BT::ActionNodeErrorCode”类型的参数“error”  返回一个BT::NodeStatus枚举值  表示节点的执行状态
  BT::NodeStatus onFailure(BT::ActionNodeErrorCode error) override;
};
}  //  namespace rm_behavior_tree

#endif // RM_BEHAVIOR_TREE__PLUGINS__ACTION__SEND_GOAL_HPP_
#include "rm_behavior_tree/plugins/action/sleep_action.hpp"

namespace rm_behavior_tree
{
SleepAction::SleepAction(const std::string &name, const BT::NodeConfiguration &config)
    : BT::SyncActionNode(name, config)
{
}

BT::NodeStatus SleepAction::tick()
{
    // 获取输入端口的值
    int sleep_duration;
    if (!getInput<int>("sleep_duration", sleep_duration))
    {
        throw BT::RuntimeError("missing required input [sleep_duration]");
    }

    // 输出信息
    RCLCPP_INFO(rclcpp::get_logger("SleepAction"), "Sleeping for %d milliseconds", sleep_duration);

    // 睡眠指定的时间
    std::this_thread::sleep_for(std::chrono::milliseconds(sleep_duration));

    // 返回成功状态
    return BT::NodeStatus::SUCCESS;
}

}  // namespace rm_behavior_tree

#include "behaviortree_cpp/bt_factory.h"
BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<rm_behavior_tree::SleepAction>("SleepAction");
}
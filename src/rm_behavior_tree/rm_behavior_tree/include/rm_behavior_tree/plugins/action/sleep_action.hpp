#ifndef RM_BEHAVIOR_TREE__PLUGINS__ACTION__SLEEP_ACTION_HPP_
#define RM_BEHAVIOR_TREE__PLUGINS__ACTION__SLEEP_ACTION_HPP_

#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"
#include <thread>

namespace rm_behavior_tree
{
class SleepAction : public BT::SyncActionNode
{
public:
    SleepAction(const std::string &name, const BT::NodeConfiguration &config);

    static BT::PortsList providedPorts()
    {
        return {BT::InputPort<int>("sleep_duration")};
    }

    BT::NodeStatus tick() override;
};
}  // namespace rm_behavior_tree

#endif // RM_BEHAVIOR_TREE__PLUGINS__ACTION__SLEEP_ACTION_HPP_
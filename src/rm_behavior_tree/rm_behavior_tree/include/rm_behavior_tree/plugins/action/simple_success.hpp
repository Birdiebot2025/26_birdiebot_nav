#ifndef RM_BEHAVIOR_TREE__PLUGINS__ACTION__SIMPLE_SUCCESS_HPP_
#define RM_BEHAVIOR_TREE__PLUGINS__ACTION__SIMPLE_SUCCESS_HPP_

#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"

namespace rm_behavior_tree
{
class SimpleSuccessAction : public BT::SyncActionNode
{
public:
    SimpleSuccessAction(const std::string &name, const BT::NodeConfiguration &config);

    static BT::PortsList providedPorts()
    {
        return {};
    }

    BT::NodeStatus tick() override;
};
}  // namespace rm_behavior_tree

#endif // RM_BEHAVIOR_TREE__PLUGINS__ACTION__SIMPLE_SUCCESS_HPP_
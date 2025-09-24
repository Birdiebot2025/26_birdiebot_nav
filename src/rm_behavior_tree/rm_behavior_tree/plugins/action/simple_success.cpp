#include "rm_behavior_tree/plugins/action/simple_success.hpp"

namespace rm_behavior_tree
{

SimpleSuccessAction::SimpleSuccessAction(const std::string &name, const BT::NodeConfiguration &config)
    : BT::SyncActionNode(name, config)
{
}

BT::NodeStatus SimpleSuccessAction::tick()
{
    RCLCPP_INFO(rclcpp::get_logger("SimpleSuccessAction"), "SimpleSuccessAction ticked");
    return BT::NodeStatus::SUCCESS;
}

}  // namespace rm_behavior_tree

#include "behaviortree_cpp/bt_factory.h"
BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<rm_behavior_tree::SimpleSuccessAction>("SimpleSuccess");
}
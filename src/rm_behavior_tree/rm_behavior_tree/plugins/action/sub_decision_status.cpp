#include "rm_behavior_tree/plugins/action/sub_decision_status.hpp"

namespace rm_behavior_tree
{
SubDecisionStatusAction::SubDecisionStatusAction(
    const std::string & name, 
    const BT::NodeConfig & conf, 
    const BT::RosNodeParams & params)
    : BT::RosTopicSubNode<rm_decision_interfaces::msg::CvDecision>(name, conf, params)
{
}

BT::NodeStatus SubDecisionStatusAction::onTick(
    const std::shared_ptr<rm_decision_interfaces::msg::CvDecision> & last_msg
)
{
    if (last_msg)  // empty if no new message received, since the last tick
    {
        std::cout << "-------------------------------------------------------" << std::endl;
        RCLCPP_INFO(logger(), "[%s] received new message, game_progress: %s", name().c_str(),
        std::to_string(last_msg->game_progress).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, stage_remain_time: %s", name().c_str(),
        std::to_string(last_msg->stage_remain_time).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, red_outpost_hp: %s", name().c_str(),
        std::to_string(last_msg->red_outpost_hp).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, red_base_hp: %s", name().c_str(),
        std::to_string(last_msg->red_base_hp).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, blue_outpost_hp: %s", name().c_str(),
        std::to_string(last_msg->blue_outpost_hp).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, blue_base_hp: %s", name().c_str(),
        std::to_string(last_msg->blue_base_hp).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, robot_id: %s", name().c_str(),
        std::to_string(last_msg->robot_id).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, current_hp: %s", name().c_str(),
        std::to_string(last_msg->current_hp).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, maximum_hp: %s", name().c_str(),
        std::to_string(last_msg->maximum_hp).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, shooter_17_mm_1_barrel_heat: %s", name().c_str(),
        std::to_string(last_msg->shooter_17_mm_1_barrel_heat).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, shooter_17_mm_2_barrel_heat: %s", name().c_str(),
        std::to_string(last_msg->shooter_17_mm_2_barrel_heat).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, projectile_allowance_17mm: %s", name().c_str(),
        std::to_string(last_msg->projectile_allowance_17mm).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, remaining_gold_coin: %s", name().c_str(),
        std::to_string(last_msg->remaining_gold_coin).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, center_gain_point: %s", name().c_str(),
        std::to_string(last_msg->center_gain_point).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, team_color: %s", name().c_str(),
        std::to_string(last_msg->team_color).c_str());

        RCLCPP_INFO(logger(), "[%s] received new message, decision_num: %s", name().c_str(),
        std::to_string(last_msg->decision_num).c_str());
        std::cout << "-------------------------------------------------------" << std::endl;

        setOutput("decision_status", *last_msg);
    }
    return BT::NodeStatus::SUCCESS;
}

} // namespace rm_behavior_tree

#include "behaviortree_ros2/plugins.hpp"
CreateRosNodePlugin(rm_behavior_tree::SubDecisionStatusAction, "SubDecisionStatus")
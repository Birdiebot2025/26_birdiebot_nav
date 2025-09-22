#include "rm_behavior_tree/rm_behavior_tree.h"

#include <iostream>
#include <memory>
#include <string>

#include "behaviortree_cpp/bt_factory.h"
#include "behaviortree_cpp/json_export.h"
#include "behaviortree_cpp/loggers/groot2_publisher.h"
#include "behaviortree_cpp/utils/shared_library.h"
#include "behaviortree_ros2/plugins.hpp"
#include "rm_behavior_tree/plugins/action/send_goal.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  BT::BehaviorTreeFactory factory;

  BT::RosNodeParams params_update_msg;
  params_update_msg.nh = std::make_shared<rclcpp::Node>("update_msg");
  
  BT::RosNodeParams params_robot_control;
  params_robot_control.nh = std::make_shared<rclcpp::Node>("robot_control");
  params_robot_control.default_port_value = "robot_control";

  BT::RosNodeParams params_send_goal;
  params_send_goal.nh = std::make_shared<rclcpp::Node>("send_goal");
  params_send_goal.default_port_value = "goal_pose";

  BT::RosNodeParams params_send_custom_goal;
  params_send_custom_goal.nh = std::make_shared<rclcpp::Node>("send_custom_goal");
  params_send_custom_goal.default_port_value = "message";  // 如果希望设置默认端口的话


  // clang-format off
  const std::vector<std::string> msg_update_plugin_libs = {
    "sub_all_robot_hp",
    "sub_robot_status",
    "sub_game_status",
    "sub_decision_num",
    "sub_decision_status",
  };

  const std::vector<std::string> bt_plugin_libs = {
    "is_game_start",
    "is_status_ok",
    "is_outpost_ok",
    "is_enemy_outpost_ok",
    "is_bullet_ok",
    "is_time_triggered",
    "is_center_triggered",
    "get_current_location",
    "move_around",
    "decision_switch",
    "print_message",
    "sleep_action",
    "simple_success",
  };
  // clang-format on

  for (const auto & p : msg_update_plugin_libs) {
    RegisterRosNode(factory, BT::SharedLibrary::getOSName(p), params_update_msg);
  }

  for (const auto & p : bt_plugin_libs) {
    factory.registerFromPlugin(BT::SharedLibrary::getOSName(p));
  }

  RegisterRosNode(factory, BT::SharedLibrary::getOSName("send_goal"), params_send_goal);

  const std::string tree_path = "/home/sentry/Desktop/bubble_slam/src/rm_behavior_tree/rm_behavior_tree/RMUC.xml";
  auto tree = factory.createTreeFromFile(tree_path);

  // Connect the Groot2Publisher. This will allow Groot2 to get the tree and poll status updates.
  const unsigned port = 1667;
  BT::Groot2Publisher publisher(tree, port);

  while (rclcpp::ok()) {
    tree.tickWhileRunning(std::chrono::milliseconds(10));
  }

  rclcpp::shutdown();
  return 0;
}


cmake_minimum_required(VERSION 3.10)
project(rm_behavior_tree)

## Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

## Export compile commands for clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#######################
## Find dependencies ##
#######################

find_package(ament_cmake_auto REQUIRED)
ament_auto_find_build_dependencies()

###########
## Build ##
###########

set(PACKAGE_INCLUDE_DEPENDS
    rm_decision_interfaces
    rclcpp
    std_msgs
    behaviortree_cpp
    behaviortree_ros2
)

# 定义宏函数 add_target_dependencies
function(add_target_dependencies target)
    target_include_directories(${target} PRIVATE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>)
    ament_target_dependencies(${target} ${PACKAGE_INCLUDE_DEPENDS})
    target_compile_definitions(${target} PRIVATE BT_PLUGIN_EXPORT)
endfunction()

ament_auto_add_executable(rm_behavior_tree 
    src/rm_behavior_tree.cpp
)

# Decorators
ament_auto_add_library(rate_controller SHARED
    plugins/decorator/rate_controller.cpp
)
add_target_dependencies(rate_controller)

# Controls
ament_auto_add_library(decision_switch SHARED
    plugins/control/decision_switch.cpp
)
add_target_dependencies(decision_switch)

# Conditions
ament_auto_add_library(is_game_start SHARED 
    plugins/condition/is_game_start.cpp
)
add_target_dependencies(is_game_start)

ament_auto_add_library(is_status_ok SHARED 
    plugins/condition/is_status_ok.cpp
)
add_target_dependencies(is_status_ok)

ament_auto_add_library(is_bullet_ok SHARED
    plugins/condition/is_bullet_ok.cpp
)
add_target_dependencies(is_bullet_ok)

ament_auto_add_library(is_outpost_ok SHARED
    plugins/condition/is_outpost_ok.cpp
)
add_target_dependencies(is_outpost_ok)

ament_auto_add_library(is_enemy_outpost_ok SHARED
    plugins/condition/is_enemy_outpost_ok.cpp
)
add_target_dependencies(is_enemy_outpost_ok)

ament_auto_add_library(is_time_triggered SHARED
    plugins/condition/is_time_triggered.cpp
)
add_target_dependencies(is_time_triggered)

# Actions
ament_auto_add_library(send_goal SHARED 
    plugins/action/send_goal.cpp
)
add_target_dependencies(send_goal)

ament_auto_add_library(sub_all_robot_hp SHARED 
    plugins/action/sub_all_robot_hp.cpp
)
add_target_dependencies(sub_all_robot_hp)

ament_auto_add_library(sub_robot_status SHARED 
    plugins/action/sub_robot_status.cpp
)
add_target_dependencies(sub_robot_status)

ament_auto_add_library(sub_game_status SHARED 
    plugins/action/sub_game_status.cpp
)
add_target_dependencies(sub_game_status)

ament_auto_add_library(sub_decision_num SHARED
    plugins/action/sub_decision_num.cpp
)
add_target_dependencies(sub_decision_num)

ament_auto_add_library(sub_cv_decision SHARED
    plugins/action/sub_cv_decision.cpp
)
add_target_dependencies(sub_cv_decision)

ament_auto_add_library(sub_decision_status SHARED
    plugins/action/sub_decision_status.cpp
)
add_target_dependencies(sub_decision_status)

ament_auto_add_library(get_current_location SHARED
    plugins/action/get_current_location.cpp
)
add_target_dependencies(get_current_location)

ament_auto_add_library(move_around SHARED
    plugins/action/move_around.cpp
)
add_target_dependencies(move_around)

ament_auto_add_library(print_message SHARED
    plugins/action/print_message.cpp
)
add_target_dependencies(print_message)

ament_auto_add_library(sleep_action SHARED
    plugins/action/sleep_action.cpp
)
add_target_dependencies(sleep_action)

ament_auto_add_library(simple_success SHARED
    plugins/action/simple_success.cpp
)
add_target_dependencies(simple_success)

ament_auto_add_library(is_center_triggered SHARED
    plugins/condition/is_center_triggered.cpp
)
add_target_dependencies(is_center_triggered)

ament_auto_package()


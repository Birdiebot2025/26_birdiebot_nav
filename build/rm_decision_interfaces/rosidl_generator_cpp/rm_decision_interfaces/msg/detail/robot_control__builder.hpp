// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_decision_interfaces:msg/RobotControl.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_CONTROL__BUILDER_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_decision_interfaces/msg/detail/robot_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_decision_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotControl_chassis_spin_vel
{
public:
  explicit Init_RobotControl_chassis_spin_vel(::rm_decision_interfaces::msg::RobotControl & msg)
  : msg_(msg)
  {}
  ::rm_decision_interfaces::msg::RobotControl chassis_spin_vel(::rm_decision_interfaces::msg::RobotControl::_chassis_spin_vel_type arg)
  {
    msg_.chassis_spin_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_decision_interfaces::msg::RobotControl msg_;
};

class Init_RobotControl_stop_gimbal_scan
{
public:
  Init_RobotControl_stop_gimbal_scan()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotControl_chassis_spin_vel stop_gimbal_scan(::rm_decision_interfaces::msg::RobotControl::_stop_gimbal_scan_type arg)
  {
    msg_.stop_gimbal_scan = std::move(arg);
    return Init_RobotControl_chassis_spin_vel(msg_);
  }

private:
  ::rm_decision_interfaces::msg::RobotControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_decision_interfaces::msg::RobotControl>()
{
  return rm_decision_interfaces::msg::builder::Init_RobotControl_stop_gimbal_scan();
}

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_CONTROL__BUILDER_HPP_

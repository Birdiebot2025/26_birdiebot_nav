// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_decision_interfaces:msg/RobotControl.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_CONTROL__TRAITS_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_decision_interfaces/msg/detail/robot_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_decision_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: stop_gimbal_scan
  {
    out << "stop_gimbal_scan: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_gimbal_scan, out);
    out << ", ";
  }

  // member: chassis_spin_vel
  {
    out << "chassis_spin_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_spin_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stop_gimbal_scan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_gimbal_scan: ";
    rosidl_generator_traits::value_to_yaml(msg.stop_gimbal_scan, out);
    out << "\n";
  }

  // member: chassis_spin_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_spin_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_spin_vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotControl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rm_decision_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rm_decision_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rm_decision_interfaces::msg::RobotControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_decision_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_decision_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_decision_interfaces::msg::RobotControl & msg)
{
  return rm_decision_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_decision_interfaces::msg::RobotControl>()
{
  return "rm_decision_interfaces::msg::RobotControl";
}

template<>
inline const char * name<rm_decision_interfaces::msg::RobotControl>()
{
  return "rm_decision_interfaces/msg/RobotControl";
}

template<>
struct has_fixed_size<rm_decision_interfaces::msg::RobotControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_decision_interfaces::msg::RobotControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_decision_interfaces::msg::RobotControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_CONTROL__TRAITS_HPP_

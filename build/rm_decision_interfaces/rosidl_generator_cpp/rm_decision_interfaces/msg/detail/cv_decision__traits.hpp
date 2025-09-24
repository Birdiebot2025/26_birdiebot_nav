// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rm_decision_interfaces:msg/CvDecision.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__CV_DECISION__TRAITS_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__CV_DECISION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rm_decision_interfaces/msg/detail/cv_decision__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rm_decision_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CvDecision & msg,
  std::ostream & out)
{
  out << "{";
  // member: game_progress
  {
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << ", ";
  }

  // member: stage_remain_time
  {
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << ", ";
  }

  // member: red_1_robot_hp
  {
    out << "red_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_1_robot_hp, out);
    out << ", ";
  }

  // member: red_2_robot_hp
  {
    out << "red_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_2_robot_hp, out);
    out << ", ";
  }

  // member: red_3_robot_hp
  {
    out << "red_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_3_robot_hp, out);
    out << ", ";
  }

  // member: red_4_robot_hp
  {
    out << "red_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_4_robot_hp, out);
    out << ", ";
  }

  // member: red_7_robot_hp
  {
    out << "red_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_7_robot_hp, out);
    out << ", ";
  }

  // member: red_outpost_hp
  {
    out << "red_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_outpost_hp, out);
    out << ", ";
  }

  // member: red_base_hp
  {
    out << "red_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_base_hp, out);
    out << ", ";
  }

  // member: blue_1_robot_hp
  {
    out << "blue_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_1_robot_hp, out);
    out << ", ";
  }

  // member: blue_2_robot_hp
  {
    out << "blue_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_2_robot_hp, out);
    out << ", ";
  }

  // member: blue_3_robot_hp
  {
    out << "blue_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_3_robot_hp, out);
    out << ", ";
  }

  // member: blue_4_robot_hp
  {
    out << "blue_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_4_robot_hp, out);
    out << ", ";
  }

  // member: blue_7_robot_hp
  {
    out << "blue_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_7_robot_hp, out);
    out << ", ";
  }

  // member: blue_outpost_hp
  {
    out << "blue_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_outpost_hp, out);
    out << ", ";
  }

  // member: blue_base_hp
  {
    out << "blue_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_base_hp, out);
    out << ", ";
  }

  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: current_hp
  {
    out << "current_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.current_hp, out);
    out << ", ";
  }

  // member: maximum_hp
  {
    out << "maximum_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_hp, out);
    out << ", ";
  }

  // member: shooter_17_mm_1_barrel_heat
  {
    out << "shooter_17_mm_1_barrel_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17_mm_1_barrel_heat, out);
    out << ", ";
  }

  // member: shooter_17_mm_2_barrel_heat
  {
    out << "shooter_17_mm_2_barrel_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17_mm_2_barrel_heat, out);
    out << ", ";
  }

  // member: projectile_allowance_17mm
  {
    out << "projectile_allowance_17mm: ";
    rosidl_generator_traits::value_to_yaml(msg.projectile_allowance_17mm, out);
    out << ", ";
  }

  // member: remaining_gold_coin
  {
    out << "remaining_gold_coin: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_gold_coin, out);
    out << ", ";
  }

  // member: center_gain_point
  {
    out << "center_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.center_gain_point, out);
    out << ", ";
  }

  // member: team_color
  {
    out << "team_color: ";
    rosidl_generator_traits::value_to_yaml(msg.team_color, out);
    out << ", ";
  }

  // member: decision_num
  {
    out << "decision_num: ";
    rosidl_generator_traits::value_to_yaml(msg.decision_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CvDecision & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: game_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "game_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.game_progress, out);
    out << "\n";
  }

  // member: stage_remain_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stage_remain_time: ";
    rosidl_generator_traits::value_to_yaml(msg.stage_remain_time, out);
    out << "\n";
  }

  // member: red_1_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_1_robot_hp, out);
    out << "\n";
  }

  // member: red_2_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_2_robot_hp, out);
    out << "\n";
  }

  // member: red_3_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_3_robot_hp, out);
    out << "\n";
  }

  // member: red_4_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_4_robot_hp, out);
    out << "\n";
  }

  // member: red_7_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_7_robot_hp, out);
    out << "\n";
  }

  // member: red_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_outpost_hp, out);
    out << "\n";
  }

  // member: red_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "red_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.red_base_hp, out);
    out << "\n";
  }

  // member: blue_1_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_1_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_1_robot_hp, out);
    out << "\n";
  }

  // member: blue_2_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_2_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_2_robot_hp, out);
    out << "\n";
  }

  // member: blue_3_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_3_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_3_robot_hp, out);
    out << "\n";
  }

  // member: blue_4_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_4_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_4_robot_hp, out);
    out << "\n";
  }

  // member: blue_7_robot_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_7_robot_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_7_robot_hp, out);
    out << "\n";
  }

  // member: blue_outpost_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_outpost_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_outpost_hp, out);
    out << "\n";
  }

  // member: blue_base_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blue_base_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.blue_base_hp, out);
    out << "\n";
  }

  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: current_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.current_hp, out);
    out << "\n";
  }

  // member: maximum_hp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_hp: ";
    rosidl_generator_traits::value_to_yaml(msg.maximum_hp, out);
    out << "\n";
  }

  // member: shooter_17_mm_1_barrel_heat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_17_mm_1_barrel_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17_mm_1_barrel_heat, out);
    out << "\n";
  }

  // member: shooter_17_mm_2_barrel_heat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shooter_17_mm_2_barrel_heat: ";
    rosidl_generator_traits::value_to_yaml(msg.shooter_17_mm_2_barrel_heat, out);
    out << "\n";
  }

  // member: projectile_allowance_17mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "projectile_allowance_17mm: ";
    rosidl_generator_traits::value_to_yaml(msg.projectile_allowance_17mm, out);
    out << "\n";
  }

  // member: remaining_gold_coin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_gold_coin: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_gold_coin, out);
    out << "\n";
  }

  // member: center_gain_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_gain_point: ";
    rosidl_generator_traits::value_to_yaml(msg.center_gain_point, out);
    out << "\n";
  }

  // member: team_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "team_color: ";
    rosidl_generator_traits::value_to_yaml(msg.team_color, out);
    out << "\n";
  }

  // member: decision_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decision_num: ";
    rosidl_generator_traits::value_to_yaml(msg.decision_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CvDecision & msg, bool use_flow_style = false)
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
  const rm_decision_interfaces::msg::CvDecision & msg,
  std::ostream & out, size_t indentation = 0)
{
  rm_decision_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rm_decision_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const rm_decision_interfaces::msg::CvDecision & msg)
{
  return rm_decision_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rm_decision_interfaces::msg::CvDecision>()
{
  return "rm_decision_interfaces::msg::CvDecision";
}

template<>
inline const char * name<rm_decision_interfaces::msg::CvDecision>()
{
  return "rm_decision_interfaces/msg/CvDecision";
}

template<>
struct has_fixed_size<rm_decision_interfaces::msg::CvDecision>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rm_decision_interfaces::msg::CvDecision>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rm_decision_interfaces::msg::CvDecision>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__CV_DECISION__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_decision_interfaces:msg/CvDecision.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__CV_DECISION__BUILDER_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__CV_DECISION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_decision_interfaces/msg/detail/cv_decision__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_decision_interfaces
{

namespace msg
{

namespace builder
{

class Init_CvDecision_decision_num
{
public:
  explicit Init_CvDecision_decision_num(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  ::rm_decision_interfaces::msg::CvDecision decision_num(::rm_decision_interfaces::msg::CvDecision::_decision_num_type arg)
  {
    msg_.decision_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_team_color
{
public:
  explicit Init_CvDecision_team_color(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_decision_num team_color(::rm_decision_interfaces::msg::CvDecision::_team_color_type arg)
  {
    msg_.team_color = std::move(arg);
    return Init_CvDecision_decision_num(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_center_gain_point
{
public:
  explicit Init_CvDecision_center_gain_point(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_team_color center_gain_point(::rm_decision_interfaces::msg::CvDecision::_center_gain_point_type arg)
  {
    msg_.center_gain_point = std::move(arg);
    return Init_CvDecision_team_color(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_remaining_gold_coin
{
public:
  explicit Init_CvDecision_remaining_gold_coin(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_center_gain_point remaining_gold_coin(::rm_decision_interfaces::msg::CvDecision::_remaining_gold_coin_type arg)
  {
    msg_.remaining_gold_coin = std::move(arg);
    return Init_CvDecision_center_gain_point(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_projectile_allowance_17mm
{
public:
  explicit Init_CvDecision_projectile_allowance_17mm(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_remaining_gold_coin projectile_allowance_17mm(::rm_decision_interfaces::msg::CvDecision::_projectile_allowance_17mm_type arg)
  {
    msg_.projectile_allowance_17mm = std::move(arg);
    return Init_CvDecision_remaining_gold_coin(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_shooter_17_mm_2_barrel_heat
{
public:
  explicit Init_CvDecision_shooter_17_mm_2_barrel_heat(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_projectile_allowance_17mm shooter_17_mm_2_barrel_heat(::rm_decision_interfaces::msg::CvDecision::_shooter_17_mm_2_barrel_heat_type arg)
  {
    msg_.shooter_17_mm_2_barrel_heat = std::move(arg);
    return Init_CvDecision_projectile_allowance_17mm(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_shooter_17_mm_1_barrel_heat
{
public:
  explicit Init_CvDecision_shooter_17_mm_1_barrel_heat(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_shooter_17_mm_2_barrel_heat shooter_17_mm_1_barrel_heat(::rm_decision_interfaces::msg::CvDecision::_shooter_17_mm_1_barrel_heat_type arg)
  {
    msg_.shooter_17_mm_1_barrel_heat = std::move(arg);
    return Init_CvDecision_shooter_17_mm_2_barrel_heat(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_maximum_hp
{
public:
  explicit Init_CvDecision_maximum_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_shooter_17_mm_1_barrel_heat maximum_hp(::rm_decision_interfaces::msg::CvDecision::_maximum_hp_type arg)
  {
    msg_.maximum_hp = std::move(arg);
    return Init_CvDecision_shooter_17_mm_1_barrel_heat(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_current_hp
{
public:
  explicit Init_CvDecision_current_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_maximum_hp current_hp(::rm_decision_interfaces::msg::CvDecision::_current_hp_type arg)
  {
    msg_.current_hp = std::move(arg);
    return Init_CvDecision_maximum_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_robot_id
{
public:
  explicit Init_CvDecision_robot_id(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_current_hp robot_id(::rm_decision_interfaces::msg::CvDecision::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_CvDecision_current_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_blue_base_hp
{
public:
  explicit Init_CvDecision_blue_base_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_robot_id blue_base_hp(::rm_decision_interfaces::msg::CvDecision::_blue_base_hp_type arg)
  {
    msg_.blue_base_hp = std::move(arg);
    return Init_CvDecision_robot_id(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_blue_outpost_hp
{
public:
  explicit Init_CvDecision_blue_outpost_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_blue_base_hp blue_outpost_hp(::rm_decision_interfaces::msg::CvDecision::_blue_outpost_hp_type arg)
  {
    msg_.blue_outpost_hp = std::move(arg);
    return Init_CvDecision_blue_base_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_blue_7_robot_hp
{
public:
  explicit Init_CvDecision_blue_7_robot_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_blue_outpost_hp blue_7_robot_hp(::rm_decision_interfaces::msg::CvDecision::_blue_7_robot_hp_type arg)
  {
    msg_.blue_7_robot_hp = std::move(arg);
    return Init_CvDecision_blue_outpost_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_blue_4_robot_hp
{
public:
  explicit Init_CvDecision_blue_4_robot_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_blue_7_robot_hp blue_4_robot_hp(::rm_decision_interfaces::msg::CvDecision::_blue_4_robot_hp_type arg)
  {
    msg_.blue_4_robot_hp = std::move(arg);
    return Init_CvDecision_blue_7_robot_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_blue_3_robot_hp
{
public:
  explicit Init_CvDecision_blue_3_robot_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_blue_4_robot_hp blue_3_robot_hp(::rm_decision_interfaces::msg::CvDecision::_blue_3_robot_hp_type arg)
  {
    msg_.blue_3_robot_hp = std::move(arg);
    return Init_CvDecision_blue_4_robot_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_blue_2_robot_hp
{
public:
  explicit Init_CvDecision_blue_2_robot_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_blue_3_robot_hp blue_2_robot_hp(::rm_decision_interfaces::msg::CvDecision::_blue_2_robot_hp_type arg)
  {
    msg_.blue_2_robot_hp = std::move(arg);
    return Init_CvDecision_blue_3_robot_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_blue_1_robot_hp
{
public:
  explicit Init_CvDecision_blue_1_robot_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_blue_2_robot_hp blue_1_robot_hp(::rm_decision_interfaces::msg::CvDecision::_blue_1_robot_hp_type arg)
  {
    msg_.blue_1_robot_hp = std::move(arg);
    return Init_CvDecision_blue_2_robot_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_red_base_hp
{
public:
  explicit Init_CvDecision_red_base_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_blue_1_robot_hp red_base_hp(::rm_decision_interfaces::msg::CvDecision::_red_base_hp_type arg)
  {
    msg_.red_base_hp = std::move(arg);
    return Init_CvDecision_blue_1_robot_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_red_outpost_hp
{
public:
  explicit Init_CvDecision_red_outpost_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_red_base_hp red_outpost_hp(::rm_decision_interfaces::msg::CvDecision::_red_outpost_hp_type arg)
  {
    msg_.red_outpost_hp = std::move(arg);
    return Init_CvDecision_red_base_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_red_7_robot_hp
{
public:
  explicit Init_CvDecision_red_7_robot_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_red_outpost_hp red_7_robot_hp(::rm_decision_interfaces::msg::CvDecision::_red_7_robot_hp_type arg)
  {
    msg_.red_7_robot_hp = std::move(arg);
    return Init_CvDecision_red_outpost_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_red_4_robot_hp
{
public:
  explicit Init_CvDecision_red_4_robot_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_red_7_robot_hp red_4_robot_hp(::rm_decision_interfaces::msg::CvDecision::_red_4_robot_hp_type arg)
  {
    msg_.red_4_robot_hp = std::move(arg);
    return Init_CvDecision_red_7_robot_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_red_3_robot_hp
{
public:
  explicit Init_CvDecision_red_3_robot_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_red_4_robot_hp red_3_robot_hp(::rm_decision_interfaces::msg::CvDecision::_red_3_robot_hp_type arg)
  {
    msg_.red_3_robot_hp = std::move(arg);
    return Init_CvDecision_red_4_robot_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_red_2_robot_hp
{
public:
  explicit Init_CvDecision_red_2_robot_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_red_3_robot_hp red_2_robot_hp(::rm_decision_interfaces::msg::CvDecision::_red_2_robot_hp_type arg)
  {
    msg_.red_2_robot_hp = std::move(arg);
    return Init_CvDecision_red_3_robot_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_red_1_robot_hp
{
public:
  explicit Init_CvDecision_red_1_robot_hp(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_red_2_robot_hp red_1_robot_hp(::rm_decision_interfaces::msg::CvDecision::_red_1_robot_hp_type arg)
  {
    msg_.red_1_robot_hp = std::move(arg);
    return Init_CvDecision_red_2_robot_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_stage_remain_time
{
public:
  explicit Init_CvDecision_stage_remain_time(::rm_decision_interfaces::msg::CvDecision & msg)
  : msg_(msg)
  {}
  Init_CvDecision_red_1_robot_hp stage_remain_time(::rm_decision_interfaces::msg::CvDecision::_stage_remain_time_type arg)
  {
    msg_.stage_remain_time = std::move(arg);
    return Init_CvDecision_red_1_robot_hp(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

class Init_CvDecision_game_progress
{
public:
  Init_CvDecision_game_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CvDecision_stage_remain_time game_progress(::rm_decision_interfaces::msg::CvDecision::_game_progress_type arg)
  {
    msg_.game_progress = std::move(arg);
    return Init_CvDecision_stage_remain_time(msg_);
  }

private:
  ::rm_decision_interfaces::msg::CvDecision msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_decision_interfaces::msg::CvDecision>()
{
  return rm_decision_interfaces::msg::builder::Init_CvDecision_game_progress();
}

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__CV_DECISION__BUILDER_HPP_

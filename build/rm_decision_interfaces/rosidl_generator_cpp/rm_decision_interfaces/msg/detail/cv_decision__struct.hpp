// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_decision_interfaces:msg/CvDecision.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__CV_DECISION__STRUCT_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__CV_DECISION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_decision_interfaces__msg__CvDecision __attribute__((deprecated))
#else
# define DEPRECATED__rm_decision_interfaces__msg__CvDecision __declspec(deprecated)
#endif

namespace rm_decision_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CvDecision_
{
  using Type = CvDecision_<ContainerAllocator>;

  explicit CvDecision_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_progress = 0;
      this->stage_remain_time = 0;
      this->red_1_robot_hp = 0;
      this->red_2_robot_hp = 0;
      this->red_3_robot_hp = 0;
      this->red_4_robot_hp = 0;
      this->red_7_robot_hp = 0;
      this->red_outpost_hp = 0;
      this->red_base_hp = 0;
      this->blue_1_robot_hp = 0;
      this->blue_2_robot_hp = 0;
      this->blue_3_robot_hp = 0;
      this->blue_4_robot_hp = 0;
      this->blue_7_robot_hp = 0;
      this->blue_outpost_hp = 0;
      this->blue_base_hp = 0;
      this->robot_id = 0;
      this->current_hp = 0;
      this->maximum_hp = 0;
      this->shooter_17_mm_1_barrel_heat = 0;
      this->shooter_17_mm_2_barrel_heat = 0;
      this->projectile_allowance_17mm = 0;
      this->remaining_gold_coin = 0;
      this->center_gain_point = 0ul;
      this->team_color = false;
      this->decision_num = 0;
    }
  }

  explicit CvDecision_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->game_progress = 0;
      this->stage_remain_time = 0;
      this->red_1_robot_hp = 0;
      this->red_2_robot_hp = 0;
      this->red_3_robot_hp = 0;
      this->red_4_robot_hp = 0;
      this->red_7_robot_hp = 0;
      this->red_outpost_hp = 0;
      this->red_base_hp = 0;
      this->blue_1_robot_hp = 0;
      this->blue_2_robot_hp = 0;
      this->blue_3_robot_hp = 0;
      this->blue_4_robot_hp = 0;
      this->blue_7_robot_hp = 0;
      this->blue_outpost_hp = 0;
      this->blue_base_hp = 0;
      this->robot_id = 0;
      this->current_hp = 0;
      this->maximum_hp = 0;
      this->shooter_17_mm_1_barrel_heat = 0;
      this->shooter_17_mm_2_barrel_heat = 0;
      this->projectile_allowance_17mm = 0;
      this->remaining_gold_coin = 0;
      this->center_gain_point = 0ul;
      this->team_color = false;
      this->decision_num = 0;
    }
  }

  // field types and members
  using _game_progress_type =
    uint8_t;
  _game_progress_type game_progress;
  using _stage_remain_time_type =
    uint16_t;
  _stage_remain_time_type stage_remain_time;
  using _red_1_robot_hp_type =
    uint16_t;
  _red_1_robot_hp_type red_1_robot_hp;
  using _red_2_robot_hp_type =
    uint16_t;
  _red_2_robot_hp_type red_2_robot_hp;
  using _red_3_robot_hp_type =
    uint16_t;
  _red_3_robot_hp_type red_3_robot_hp;
  using _red_4_robot_hp_type =
    uint16_t;
  _red_4_robot_hp_type red_4_robot_hp;
  using _red_7_robot_hp_type =
    uint16_t;
  _red_7_robot_hp_type red_7_robot_hp;
  using _red_outpost_hp_type =
    uint16_t;
  _red_outpost_hp_type red_outpost_hp;
  using _red_base_hp_type =
    uint16_t;
  _red_base_hp_type red_base_hp;
  using _blue_1_robot_hp_type =
    uint16_t;
  _blue_1_robot_hp_type blue_1_robot_hp;
  using _blue_2_robot_hp_type =
    uint16_t;
  _blue_2_robot_hp_type blue_2_robot_hp;
  using _blue_3_robot_hp_type =
    uint16_t;
  _blue_3_robot_hp_type blue_3_robot_hp;
  using _blue_4_robot_hp_type =
    uint16_t;
  _blue_4_robot_hp_type blue_4_robot_hp;
  using _blue_7_robot_hp_type =
    uint16_t;
  _blue_7_robot_hp_type blue_7_robot_hp;
  using _blue_outpost_hp_type =
    uint16_t;
  _blue_outpost_hp_type blue_outpost_hp;
  using _blue_base_hp_type =
    uint16_t;
  _blue_base_hp_type blue_base_hp;
  using _robot_id_type =
    uint8_t;
  _robot_id_type robot_id;
  using _current_hp_type =
    uint16_t;
  _current_hp_type current_hp;
  using _maximum_hp_type =
    uint16_t;
  _maximum_hp_type maximum_hp;
  using _shooter_17_mm_1_barrel_heat_type =
    uint16_t;
  _shooter_17_mm_1_barrel_heat_type shooter_17_mm_1_barrel_heat;
  using _shooter_17_mm_2_barrel_heat_type =
    uint16_t;
  _shooter_17_mm_2_barrel_heat_type shooter_17_mm_2_barrel_heat;
  using _projectile_allowance_17mm_type =
    uint16_t;
  _projectile_allowance_17mm_type projectile_allowance_17mm;
  using _remaining_gold_coin_type =
    uint16_t;
  _remaining_gold_coin_type remaining_gold_coin;
  using _center_gain_point_type =
    uint32_t;
  _center_gain_point_type center_gain_point;
  using _team_color_type =
    bool;
  _team_color_type team_color;
  using _decision_num_type =
    uint8_t;
  _decision_num_type decision_num;

  // setters for named parameter idiom
  Type & set__game_progress(
    const uint8_t & _arg)
  {
    this->game_progress = _arg;
    return *this;
  }
  Type & set__stage_remain_time(
    const uint16_t & _arg)
  {
    this->stage_remain_time = _arg;
    return *this;
  }
  Type & set__red_1_robot_hp(
    const uint16_t & _arg)
  {
    this->red_1_robot_hp = _arg;
    return *this;
  }
  Type & set__red_2_robot_hp(
    const uint16_t & _arg)
  {
    this->red_2_robot_hp = _arg;
    return *this;
  }
  Type & set__red_3_robot_hp(
    const uint16_t & _arg)
  {
    this->red_3_robot_hp = _arg;
    return *this;
  }
  Type & set__red_4_robot_hp(
    const uint16_t & _arg)
  {
    this->red_4_robot_hp = _arg;
    return *this;
  }
  Type & set__red_7_robot_hp(
    const uint16_t & _arg)
  {
    this->red_7_robot_hp = _arg;
    return *this;
  }
  Type & set__red_outpost_hp(
    const uint16_t & _arg)
  {
    this->red_outpost_hp = _arg;
    return *this;
  }
  Type & set__red_base_hp(
    const uint16_t & _arg)
  {
    this->red_base_hp = _arg;
    return *this;
  }
  Type & set__blue_1_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_1_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_2_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_2_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_3_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_3_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_4_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_4_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_7_robot_hp(
    const uint16_t & _arg)
  {
    this->blue_7_robot_hp = _arg;
    return *this;
  }
  Type & set__blue_outpost_hp(
    const uint16_t & _arg)
  {
    this->blue_outpost_hp = _arg;
    return *this;
  }
  Type & set__blue_base_hp(
    const uint16_t & _arg)
  {
    this->blue_base_hp = _arg;
    return *this;
  }
  Type & set__robot_id(
    const uint8_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__current_hp(
    const uint16_t & _arg)
  {
    this->current_hp = _arg;
    return *this;
  }
  Type & set__maximum_hp(
    const uint16_t & _arg)
  {
    this->maximum_hp = _arg;
    return *this;
  }
  Type & set__shooter_17_mm_1_barrel_heat(
    const uint16_t & _arg)
  {
    this->shooter_17_mm_1_barrel_heat = _arg;
    return *this;
  }
  Type & set__shooter_17_mm_2_barrel_heat(
    const uint16_t & _arg)
  {
    this->shooter_17_mm_2_barrel_heat = _arg;
    return *this;
  }
  Type & set__projectile_allowance_17mm(
    const uint16_t & _arg)
  {
    this->projectile_allowance_17mm = _arg;
    return *this;
  }
  Type & set__remaining_gold_coin(
    const uint16_t & _arg)
  {
    this->remaining_gold_coin = _arg;
    return *this;
  }
  Type & set__center_gain_point(
    const uint32_t & _arg)
  {
    this->center_gain_point = _arg;
    return *this;
  }
  Type & set__team_color(
    const bool & _arg)
  {
    this->team_color = _arg;
    return *this;
  }
  Type & set__decision_num(
    const uint8_t & _arg)
  {
    this->decision_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_decision_interfaces::msg::CvDecision_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_decision_interfaces::msg::CvDecision_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_decision_interfaces::msg::CvDecision_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_decision_interfaces::msg::CvDecision_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_decision_interfaces::msg::CvDecision_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_decision_interfaces::msg::CvDecision_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_decision_interfaces::msg::CvDecision_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_decision_interfaces::msg::CvDecision_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_decision_interfaces::msg::CvDecision_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_decision_interfaces::msg::CvDecision_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_decision_interfaces__msg__CvDecision
    std::shared_ptr<rm_decision_interfaces::msg::CvDecision_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_decision_interfaces__msg__CvDecision
    std::shared_ptr<rm_decision_interfaces::msg::CvDecision_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CvDecision_ & other) const
  {
    if (this->game_progress != other.game_progress) {
      return false;
    }
    if (this->stage_remain_time != other.stage_remain_time) {
      return false;
    }
    if (this->red_1_robot_hp != other.red_1_robot_hp) {
      return false;
    }
    if (this->red_2_robot_hp != other.red_2_robot_hp) {
      return false;
    }
    if (this->red_3_robot_hp != other.red_3_robot_hp) {
      return false;
    }
    if (this->red_4_robot_hp != other.red_4_robot_hp) {
      return false;
    }
    if (this->red_7_robot_hp != other.red_7_robot_hp) {
      return false;
    }
    if (this->red_outpost_hp != other.red_outpost_hp) {
      return false;
    }
    if (this->red_base_hp != other.red_base_hp) {
      return false;
    }
    if (this->blue_1_robot_hp != other.blue_1_robot_hp) {
      return false;
    }
    if (this->blue_2_robot_hp != other.blue_2_robot_hp) {
      return false;
    }
    if (this->blue_3_robot_hp != other.blue_3_robot_hp) {
      return false;
    }
    if (this->blue_4_robot_hp != other.blue_4_robot_hp) {
      return false;
    }
    if (this->blue_7_robot_hp != other.blue_7_robot_hp) {
      return false;
    }
    if (this->blue_outpost_hp != other.blue_outpost_hp) {
      return false;
    }
    if (this->blue_base_hp != other.blue_base_hp) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->current_hp != other.current_hp) {
      return false;
    }
    if (this->maximum_hp != other.maximum_hp) {
      return false;
    }
    if (this->shooter_17_mm_1_barrel_heat != other.shooter_17_mm_1_barrel_heat) {
      return false;
    }
    if (this->shooter_17_mm_2_barrel_heat != other.shooter_17_mm_2_barrel_heat) {
      return false;
    }
    if (this->projectile_allowance_17mm != other.projectile_allowance_17mm) {
      return false;
    }
    if (this->remaining_gold_coin != other.remaining_gold_coin) {
      return false;
    }
    if (this->center_gain_point != other.center_gain_point) {
      return false;
    }
    if (this->team_color != other.team_color) {
      return false;
    }
    if (this->decision_num != other.decision_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const CvDecision_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CvDecision_

// alias to use template instance with default allocator
using CvDecision =
  rm_decision_interfaces::msg::CvDecision_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__CV_DECISION__STRUCT_HPP_

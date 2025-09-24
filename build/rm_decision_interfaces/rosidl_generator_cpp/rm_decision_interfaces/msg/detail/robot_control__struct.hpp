// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_decision_interfaces:msg/RobotControl.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_CONTROL__STRUCT_HPP_
#define RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rm_decision_interfaces__msg__RobotControl __attribute__((deprecated))
#else
# define DEPRECATED__rm_decision_interfaces__msg__RobotControl __declspec(deprecated)
#endif

namespace rm_decision_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotControl_
{
  using Type = RobotControl_<ContainerAllocator>;

  explicit RobotControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_gimbal_scan = false;
      this->chassis_spin_vel = 0.0f;
    }
  }

  explicit RobotControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stop_gimbal_scan = false;
      this->chassis_spin_vel = 0.0f;
    }
  }

  // field types and members
  using _stop_gimbal_scan_type =
    bool;
  _stop_gimbal_scan_type stop_gimbal_scan;
  using _chassis_spin_vel_type =
    float;
  _chassis_spin_vel_type chassis_spin_vel;

  // setters for named parameter idiom
  Type & set__stop_gimbal_scan(
    const bool & _arg)
  {
    this->stop_gimbal_scan = _arg;
    return *this;
  }
  Type & set__chassis_spin_vel(
    const float & _arg)
  {
    this->chassis_spin_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_decision_interfaces::msg::RobotControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_decision_interfaces::msg::RobotControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_decision_interfaces::msg::RobotControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_decision_interfaces::msg::RobotControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_decision_interfaces::msg::RobotControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_decision_interfaces::msg::RobotControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_decision_interfaces::msg::RobotControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_decision_interfaces::msg::RobotControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_decision_interfaces::msg::RobotControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_decision_interfaces::msg::RobotControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_decision_interfaces__msg__RobotControl
    std::shared_ptr<rm_decision_interfaces::msg::RobotControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_decision_interfaces__msg__RobotControl
    std::shared_ptr<rm_decision_interfaces::msg::RobotControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotControl_ & other) const
  {
    if (this->stop_gimbal_scan != other.stop_gimbal_scan) {
      return false;
    }
    if (this->chassis_spin_vel != other.chassis_spin_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotControl_

// alias to use template instance with default allocator
using RobotControl =
  rm_decision_interfaces::msg::RobotControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_decision_interfaces

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_CONTROL__STRUCT_HPP_

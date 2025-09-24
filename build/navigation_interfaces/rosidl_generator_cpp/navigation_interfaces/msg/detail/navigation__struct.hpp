// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from navigation_interfaces:msg/Navigation.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION_INTERFACES__MSG__DETAIL__NAVIGATION__STRUCT_HPP_
#define NAVIGATION_INTERFACES__MSG__DETAIL__NAVIGATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'dip_angle'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__navigation_interfaces__msg__Navigation __attribute__((deprecated))
#else
# define DEPRECATED__navigation_interfaces__msg__Navigation __declspec(deprecated)
#endif

namespace navigation_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Navigation_
{
  using Type = Navigation_<ContainerAllocator>;

  explicit Navigation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_init),
    dip_angle(_init)
  {
    (void)_init;
  }

  explicit Navigation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_alloc, _init),
    dip_angle(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;
  using _dip_angle_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _dip_angle_type dip_angle;

  // setters for named parameter idiom
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }
  Type & set__dip_angle(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->dip_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navigation_interfaces::msg::Navigation_<ContainerAllocator> *;
  using ConstRawPtr =
    const navigation_interfaces::msg::Navigation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navigation_interfaces::msg::Navigation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navigation_interfaces::msg::Navigation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navigation_interfaces::msg::Navigation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navigation_interfaces::msg::Navigation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navigation_interfaces::msg::Navigation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navigation_interfaces::msg::Navigation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navigation_interfaces::msg::Navigation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navigation_interfaces::msg::Navigation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navigation_interfaces__msg__Navigation
    std::shared_ptr<navigation_interfaces::msg::Navigation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navigation_interfaces__msg__Navigation
    std::shared_ptr<navigation_interfaces::msg::Navigation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Navigation_ & other) const
  {
    if (this->twist != other.twist) {
      return false;
    }
    if (this->dip_angle != other.dip_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const Navigation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Navigation_

// alias to use template instance with default allocator
using Navigation =
  navigation_interfaces::msg::Navigation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace navigation_interfaces

#endif  // NAVIGATION_INTERFACES__MSG__DETAIL__NAVIGATION__STRUCT_HPP_

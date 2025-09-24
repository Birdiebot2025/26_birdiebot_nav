// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navigation_interfaces:msg/Navigation.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION_INTERFACES__MSG__DETAIL__NAVIGATION__BUILDER_HPP_
#define NAVIGATION_INTERFACES__MSG__DETAIL__NAVIGATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navigation_interfaces/msg/detail/navigation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navigation_interfaces
{

namespace msg
{

namespace builder
{

class Init_Navigation_dip_angle
{
public:
  explicit Init_Navigation_dip_angle(::navigation_interfaces::msg::Navigation & msg)
  : msg_(msg)
  {}
  ::navigation_interfaces::msg::Navigation dip_angle(::navigation_interfaces::msg::Navigation::_dip_angle_type arg)
  {
    msg_.dip_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navigation_interfaces::msg::Navigation msg_;
};

class Init_Navigation_twist
{
public:
  Init_Navigation_twist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigation_dip_angle twist(::navigation_interfaces::msg::Navigation::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_Navigation_dip_angle(msg_);
  }

private:
  ::navigation_interfaces::msg::Navigation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::navigation_interfaces::msg::Navigation>()
{
  return navigation_interfaces::msg::builder::Init_Navigation_twist();
}

}  // namespace navigation_interfaces

#endif  // NAVIGATION_INTERFACES__MSG__DETAIL__NAVIGATION__BUILDER_HPP_

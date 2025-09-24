// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navigation_interfaces:msg/Navigation.idl
// generated code does not contain a copyright notice

#ifndef NAVIGATION_INTERFACES__MSG__DETAIL__NAVIGATION__STRUCT_H_
#define NAVIGATION_INTERFACES__MSG__DETAIL__NAVIGATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'dip_angle'
#include "std_msgs/msg/detail/float64__struct.h"

/// Struct defined in msg/Navigation in the package navigation_interfaces.
typedef struct navigation_interfaces__msg__Navigation
{
  geometry_msgs__msg__Twist twist;
  std_msgs__msg__Float64 dip_angle;
} navigation_interfaces__msg__Navigation;

// Struct for a sequence of navigation_interfaces__msg__Navigation.
typedef struct navigation_interfaces__msg__Navigation__Sequence
{
  navigation_interfaces__msg__Navigation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigation_interfaces__msg__Navigation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVIGATION_INTERFACES__MSG__DETAIL__NAVIGATION__STRUCT_H_

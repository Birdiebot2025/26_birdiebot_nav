// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from navigation_interfaces:msg/Navigation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "navigation_interfaces/msg/detail/navigation__rosidl_typesupport_introspection_c.h"
#include "navigation_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "navigation_interfaces/msg/detail/navigation__functions.h"
#include "navigation_interfaces/msg/detail/navigation__struct.h"


// Include directives for member types
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"
// Member `dip_angle`
#include "std_msgs/msg/float64.h"
// Member `dip_angle`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navigation_interfaces__msg__Navigation__init(message_memory);
}

void navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_fini_function(void * message_memory)
{
  navigation_interfaces__msg__Navigation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_message_member_array[2] = {
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation_interfaces__msg__Navigation, twist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dip_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navigation_interfaces__msg__Navigation, dip_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_message_members = {
  "navigation_interfaces__msg",  // message namespace
  "Navigation",  // message name
  2,  // number of fields
  sizeof(navigation_interfaces__msg__Navigation),
  navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_message_member_array,  // message members
  navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_init_function,  // function to initialize message memory (memory has to be allocated)
  navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_message_type_support_handle = {
  0,
  &navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navigation_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navigation_interfaces, msg, Navigation)() {
  navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_message_type_support_handle.typesupport_identifier) {
    navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &navigation_interfaces__msg__Navigation__rosidl_typesupport_introspection_c__Navigation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

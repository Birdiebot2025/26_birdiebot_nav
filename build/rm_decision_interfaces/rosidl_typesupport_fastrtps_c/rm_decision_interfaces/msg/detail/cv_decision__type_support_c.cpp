// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rm_decision_interfaces:msg/CvDecision.idl
// generated code does not contain a copyright notice
#include "rm_decision_interfaces/msg/detail/cv_decision__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rm_decision_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rm_decision_interfaces/msg/detail/cv_decision__struct.h"
#include "rm_decision_interfaces/msg/detail/cv_decision__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CvDecision__ros_msg_type = rm_decision_interfaces__msg__CvDecision;

static bool _CvDecision__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CvDecision__ros_msg_type * ros_message = static_cast<const _CvDecision__ros_msg_type *>(untyped_ros_message);
  // Field name: game_progress
  {
    cdr << ros_message->game_progress;
  }

  // Field name: stage_remain_time
  {
    cdr << ros_message->stage_remain_time;
  }

  // Field name: red_1_robot_hp
  {
    cdr << ros_message->red_1_robot_hp;
  }

  // Field name: red_2_robot_hp
  {
    cdr << ros_message->red_2_robot_hp;
  }

  // Field name: red_3_robot_hp
  {
    cdr << ros_message->red_3_robot_hp;
  }

  // Field name: red_4_robot_hp
  {
    cdr << ros_message->red_4_robot_hp;
  }

  // Field name: red_7_robot_hp
  {
    cdr << ros_message->red_7_robot_hp;
  }

  // Field name: red_outpost_hp
  {
    cdr << ros_message->red_outpost_hp;
  }

  // Field name: red_base_hp
  {
    cdr << ros_message->red_base_hp;
  }

  // Field name: blue_1_robot_hp
  {
    cdr << ros_message->blue_1_robot_hp;
  }

  // Field name: blue_2_robot_hp
  {
    cdr << ros_message->blue_2_robot_hp;
  }

  // Field name: blue_3_robot_hp
  {
    cdr << ros_message->blue_3_robot_hp;
  }

  // Field name: blue_4_robot_hp
  {
    cdr << ros_message->blue_4_robot_hp;
  }

  // Field name: blue_7_robot_hp
  {
    cdr << ros_message->blue_7_robot_hp;
  }

  // Field name: blue_outpost_hp
  {
    cdr << ros_message->blue_outpost_hp;
  }

  // Field name: blue_base_hp
  {
    cdr << ros_message->blue_base_hp;
  }

  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: current_hp
  {
    cdr << ros_message->current_hp;
  }

  // Field name: maximum_hp
  {
    cdr << ros_message->maximum_hp;
  }

  // Field name: shooter_17_mm_1_barrel_heat
  {
    cdr << ros_message->shooter_17_mm_1_barrel_heat;
  }

  // Field name: shooter_17_mm_2_barrel_heat
  {
    cdr << ros_message->shooter_17_mm_2_barrel_heat;
  }

  // Field name: projectile_allowance_17mm
  {
    cdr << ros_message->projectile_allowance_17mm;
  }

  // Field name: remaining_gold_coin
  {
    cdr << ros_message->remaining_gold_coin;
  }

  // Field name: center_gain_point
  {
    cdr << ros_message->center_gain_point;
  }

  // Field name: team_color
  {
    cdr << (ros_message->team_color ? true : false);
  }

  // Field name: decision_num
  {
    cdr << ros_message->decision_num;
  }

  return true;
}

static bool _CvDecision__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CvDecision__ros_msg_type * ros_message = static_cast<_CvDecision__ros_msg_type *>(untyped_ros_message);
  // Field name: game_progress
  {
    cdr >> ros_message->game_progress;
  }

  // Field name: stage_remain_time
  {
    cdr >> ros_message->stage_remain_time;
  }

  // Field name: red_1_robot_hp
  {
    cdr >> ros_message->red_1_robot_hp;
  }

  // Field name: red_2_robot_hp
  {
    cdr >> ros_message->red_2_robot_hp;
  }

  // Field name: red_3_robot_hp
  {
    cdr >> ros_message->red_3_robot_hp;
  }

  // Field name: red_4_robot_hp
  {
    cdr >> ros_message->red_4_robot_hp;
  }

  // Field name: red_7_robot_hp
  {
    cdr >> ros_message->red_7_robot_hp;
  }

  // Field name: red_outpost_hp
  {
    cdr >> ros_message->red_outpost_hp;
  }

  // Field name: red_base_hp
  {
    cdr >> ros_message->red_base_hp;
  }

  // Field name: blue_1_robot_hp
  {
    cdr >> ros_message->blue_1_robot_hp;
  }

  // Field name: blue_2_robot_hp
  {
    cdr >> ros_message->blue_2_robot_hp;
  }

  // Field name: blue_3_robot_hp
  {
    cdr >> ros_message->blue_3_robot_hp;
  }

  // Field name: blue_4_robot_hp
  {
    cdr >> ros_message->blue_4_robot_hp;
  }

  // Field name: blue_7_robot_hp
  {
    cdr >> ros_message->blue_7_robot_hp;
  }

  // Field name: blue_outpost_hp
  {
    cdr >> ros_message->blue_outpost_hp;
  }

  // Field name: blue_base_hp
  {
    cdr >> ros_message->blue_base_hp;
  }

  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: current_hp
  {
    cdr >> ros_message->current_hp;
  }

  // Field name: maximum_hp
  {
    cdr >> ros_message->maximum_hp;
  }

  // Field name: shooter_17_mm_1_barrel_heat
  {
    cdr >> ros_message->shooter_17_mm_1_barrel_heat;
  }

  // Field name: shooter_17_mm_2_barrel_heat
  {
    cdr >> ros_message->shooter_17_mm_2_barrel_heat;
  }

  // Field name: projectile_allowance_17mm
  {
    cdr >> ros_message->projectile_allowance_17mm;
  }

  // Field name: remaining_gold_coin
  {
    cdr >> ros_message->remaining_gold_coin;
  }

  // Field name: center_gain_point
  {
    cdr >> ros_message->center_gain_point;
  }

  // Field name: team_color
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->team_color = tmp ? true : false;
  }

  // Field name: decision_num
  {
    cdr >> ros_message->decision_num;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_decision_interfaces
size_t get_serialized_size_rm_decision_interfaces__msg__CvDecision(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CvDecision__ros_msg_type * ros_message = static_cast<const _CvDecision__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name game_progress
  {
    size_t item_size = sizeof(ros_message->game_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stage_remain_time
  {
    size_t item_size = sizeof(ros_message->stage_remain_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_1_robot_hp
  {
    size_t item_size = sizeof(ros_message->red_1_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_2_robot_hp
  {
    size_t item_size = sizeof(ros_message->red_2_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_3_robot_hp
  {
    size_t item_size = sizeof(ros_message->red_3_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_4_robot_hp
  {
    size_t item_size = sizeof(ros_message->red_4_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_7_robot_hp
  {
    size_t item_size = sizeof(ros_message->red_7_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_outpost_hp
  {
    size_t item_size = sizeof(ros_message->red_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red_base_hp
  {
    size_t item_size = sizeof(ros_message->red_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_1_robot_hp
  {
    size_t item_size = sizeof(ros_message->blue_1_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_2_robot_hp
  {
    size_t item_size = sizeof(ros_message->blue_2_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_3_robot_hp
  {
    size_t item_size = sizeof(ros_message->blue_3_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_4_robot_hp
  {
    size_t item_size = sizeof(ros_message->blue_4_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_7_robot_hp
  {
    size_t item_size = sizeof(ros_message->blue_7_robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_outpost_hp
  {
    size_t item_size = sizeof(ros_message->blue_outpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue_base_hp
  {
    size_t item_size = sizeof(ros_message->blue_base_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_hp
  {
    size_t item_size = sizeof(ros_message->current_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maximum_hp
  {
    size_t item_size = sizeof(ros_message->maximum_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_17_mm_1_barrel_heat
  {
    size_t item_size = sizeof(ros_message->shooter_17_mm_1_barrel_heat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooter_17_mm_2_barrel_heat
  {
    size_t item_size = sizeof(ros_message->shooter_17_mm_2_barrel_heat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name projectile_allowance_17mm
  {
    size_t item_size = sizeof(ros_message->projectile_allowance_17mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name remaining_gold_coin
  {
    size_t item_size = sizeof(ros_message->remaining_gold_coin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name center_gain_point
  {
    size_t item_size = sizeof(ros_message->center_gain_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name team_color
  {
    size_t item_size = sizeof(ros_message->team_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name decision_num
  {
    size_t item_size = sizeof(ros_message->decision_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CvDecision__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rm_decision_interfaces__msg__CvDecision(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rm_decision_interfaces
size_t max_serialized_size_rm_decision_interfaces__msg__CvDecision(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: game_progress
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stage_remain_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_1_robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_2_robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_3_robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_4_robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_7_robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_outpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red_base_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_1_robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_2_robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_3_robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_4_robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_7_robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_outpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue_base_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: robot_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: current_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: maximum_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_17_mm_1_barrel_heat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: shooter_17_mm_2_barrel_heat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: projectile_allowance_17mm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: remaining_gold_coin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: center_gain_point
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: team_color
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: decision_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rm_decision_interfaces__msg__CvDecision;
    is_plain =
      (
      offsetof(DataType, decision_num) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CvDecision__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rm_decision_interfaces__msg__CvDecision(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CvDecision = {
  "rm_decision_interfaces::msg",
  "CvDecision",
  _CvDecision__cdr_serialize,
  _CvDecision__cdr_deserialize,
  _CvDecision__get_serialized_size,
  _CvDecision__max_serialized_size
};

static rosidl_message_type_support_t _CvDecision__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CvDecision,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rm_decision_interfaces, msg, CvDecision)() {
  return &_CvDecision__type_support;
}

#if defined(__cplusplus)
}
#endif

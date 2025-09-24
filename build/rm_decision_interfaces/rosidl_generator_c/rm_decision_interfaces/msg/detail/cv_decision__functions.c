// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rm_decision_interfaces:msg/CvDecision.idl
// generated code does not contain a copyright notice
#include "rm_decision_interfaces/msg/detail/cv_decision__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rm_decision_interfaces__msg__CvDecision__init(rm_decision_interfaces__msg__CvDecision * msg)
{
  if (!msg) {
    return false;
  }
  // game_progress
  // stage_remain_time
  // red_1_robot_hp
  // red_2_robot_hp
  // red_3_robot_hp
  // red_4_robot_hp
  // red_7_robot_hp
  // red_outpost_hp
  // red_base_hp
  // blue_1_robot_hp
  // blue_2_robot_hp
  // blue_3_robot_hp
  // blue_4_robot_hp
  // blue_7_robot_hp
  // blue_outpost_hp
  // blue_base_hp
  // robot_id
  // current_hp
  // maximum_hp
  // shooter_17_mm_1_barrel_heat
  // shooter_17_mm_2_barrel_heat
  // projectile_allowance_17mm
  // remaining_gold_coin
  // center_gain_point
  // team_color
  // decision_num
  return true;
}

void
rm_decision_interfaces__msg__CvDecision__fini(rm_decision_interfaces__msg__CvDecision * msg)
{
  if (!msg) {
    return;
  }
  // game_progress
  // stage_remain_time
  // red_1_robot_hp
  // red_2_robot_hp
  // red_3_robot_hp
  // red_4_robot_hp
  // red_7_robot_hp
  // red_outpost_hp
  // red_base_hp
  // blue_1_robot_hp
  // blue_2_robot_hp
  // blue_3_robot_hp
  // blue_4_robot_hp
  // blue_7_robot_hp
  // blue_outpost_hp
  // blue_base_hp
  // robot_id
  // current_hp
  // maximum_hp
  // shooter_17_mm_1_barrel_heat
  // shooter_17_mm_2_barrel_heat
  // projectile_allowance_17mm
  // remaining_gold_coin
  // center_gain_point
  // team_color
  // decision_num
}

bool
rm_decision_interfaces__msg__CvDecision__are_equal(const rm_decision_interfaces__msg__CvDecision * lhs, const rm_decision_interfaces__msg__CvDecision * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // game_progress
  if (lhs->game_progress != rhs->game_progress) {
    return false;
  }
  // stage_remain_time
  if (lhs->stage_remain_time != rhs->stage_remain_time) {
    return false;
  }
  // red_1_robot_hp
  if (lhs->red_1_robot_hp != rhs->red_1_robot_hp) {
    return false;
  }
  // red_2_robot_hp
  if (lhs->red_2_robot_hp != rhs->red_2_robot_hp) {
    return false;
  }
  // red_3_robot_hp
  if (lhs->red_3_robot_hp != rhs->red_3_robot_hp) {
    return false;
  }
  // red_4_robot_hp
  if (lhs->red_4_robot_hp != rhs->red_4_robot_hp) {
    return false;
  }
  // red_7_robot_hp
  if (lhs->red_7_robot_hp != rhs->red_7_robot_hp) {
    return false;
  }
  // red_outpost_hp
  if (lhs->red_outpost_hp != rhs->red_outpost_hp) {
    return false;
  }
  // red_base_hp
  if (lhs->red_base_hp != rhs->red_base_hp) {
    return false;
  }
  // blue_1_robot_hp
  if (lhs->blue_1_robot_hp != rhs->blue_1_robot_hp) {
    return false;
  }
  // blue_2_robot_hp
  if (lhs->blue_2_robot_hp != rhs->blue_2_robot_hp) {
    return false;
  }
  // blue_3_robot_hp
  if (lhs->blue_3_robot_hp != rhs->blue_3_robot_hp) {
    return false;
  }
  // blue_4_robot_hp
  if (lhs->blue_4_robot_hp != rhs->blue_4_robot_hp) {
    return false;
  }
  // blue_7_robot_hp
  if (lhs->blue_7_robot_hp != rhs->blue_7_robot_hp) {
    return false;
  }
  // blue_outpost_hp
  if (lhs->blue_outpost_hp != rhs->blue_outpost_hp) {
    return false;
  }
  // blue_base_hp
  if (lhs->blue_base_hp != rhs->blue_base_hp) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // current_hp
  if (lhs->current_hp != rhs->current_hp) {
    return false;
  }
  // maximum_hp
  if (lhs->maximum_hp != rhs->maximum_hp) {
    return false;
  }
  // shooter_17_mm_1_barrel_heat
  if (lhs->shooter_17_mm_1_barrel_heat != rhs->shooter_17_mm_1_barrel_heat) {
    return false;
  }
  // shooter_17_mm_2_barrel_heat
  if (lhs->shooter_17_mm_2_barrel_heat != rhs->shooter_17_mm_2_barrel_heat) {
    return false;
  }
  // projectile_allowance_17mm
  if (lhs->projectile_allowance_17mm != rhs->projectile_allowance_17mm) {
    return false;
  }
  // remaining_gold_coin
  if (lhs->remaining_gold_coin != rhs->remaining_gold_coin) {
    return false;
  }
  // center_gain_point
  if (lhs->center_gain_point != rhs->center_gain_point) {
    return false;
  }
  // team_color
  if (lhs->team_color != rhs->team_color) {
    return false;
  }
  // decision_num
  if (lhs->decision_num != rhs->decision_num) {
    return false;
  }
  return true;
}

bool
rm_decision_interfaces__msg__CvDecision__copy(
  const rm_decision_interfaces__msg__CvDecision * input,
  rm_decision_interfaces__msg__CvDecision * output)
{
  if (!input || !output) {
    return false;
  }
  // game_progress
  output->game_progress = input->game_progress;
  // stage_remain_time
  output->stage_remain_time = input->stage_remain_time;
  // red_1_robot_hp
  output->red_1_robot_hp = input->red_1_robot_hp;
  // red_2_robot_hp
  output->red_2_robot_hp = input->red_2_robot_hp;
  // red_3_robot_hp
  output->red_3_robot_hp = input->red_3_robot_hp;
  // red_4_robot_hp
  output->red_4_robot_hp = input->red_4_robot_hp;
  // red_7_robot_hp
  output->red_7_robot_hp = input->red_7_robot_hp;
  // red_outpost_hp
  output->red_outpost_hp = input->red_outpost_hp;
  // red_base_hp
  output->red_base_hp = input->red_base_hp;
  // blue_1_robot_hp
  output->blue_1_robot_hp = input->blue_1_robot_hp;
  // blue_2_robot_hp
  output->blue_2_robot_hp = input->blue_2_robot_hp;
  // blue_3_robot_hp
  output->blue_3_robot_hp = input->blue_3_robot_hp;
  // blue_4_robot_hp
  output->blue_4_robot_hp = input->blue_4_robot_hp;
  // blue_7_robot_hp
  output->blue_7_robot_hp = input->blue_7_robot_hp;
  // blue_outpost_hp
  output->blue_outpost_hp = input->blue_outpost_hp;
  // blue_base_hp
  output->blue_base_hp = input->blue_base_hp;
  // robot_id
  output->robot_id = input->robot_id;
  // current_hp
  output->current_hp = input->current_hp;
  // maximum_hp
  output->maximum_hp = input->maximum_hp;
  // shooter_17_mm_1_barrel_heat
  output->shooter_17_mm_1_barrel_heat = input->shooter_17_mm_1_barrel_heat;
  // shooter_17_mm_2_barrel_heat
  output->shooter_17_mm_2_barrel_heat = input->shooter_17_mm_2_barrel_heat;
  // projectile_allowance_17mm
  output->projectile_allowance_17mm = input->projectile_allowance_17mm;
  // remaining_gold_coin
  output->remaining_gold_coin = input->remaining_gold_coin;
  // center_gain_point
  output->center_gain_point = input->center_gain_point;
  // team_color
  output->team_color = input->team_color;
  // decision_num
  output->decision_num = input->decision_num;
  return true;
}

rm_decision_interfaces__msg__CvDecision *
rm_decision_interfaces__msg__CvDecision__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__CvDecision * msg = (rm_decision_interfaces__msg__CvDecision *)allocator.allocate(sizeof(rm_decision_interfaces__msg__CvDecision), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rm_decision_interfaces__msg__CvDecision));
  bool success = rm_decision_interfaces__msg__CvDecision__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rm_decision_interfaces__msg__CvDecision__destroy(rm_decision_interfaces__msg__CvDecision * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rm_decision_interfaces__msg__CvDecision__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rm_decision_interfaces__msg__CvDecision__Sequence__init(rm_decision_interfaces__msg__CvDecision__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__CvDecision * data = NULL;

  if (size) {
    data = (rm_decision_interfaces__msg__CvDecision *)allocator.zero_allocate(size, sizeof(rm_decision_interfaces__msg__CvDecision), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rm_decision_interfaces__msg__CvDecision__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rm_decision_interfaces__msg__CvDecision__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rm_decision_interfaces__msg__CvDecision__Sequence__fini(rm_decision_interfaces__msg__CvDecision__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rm_decision_interfaces__msg__CvDecision__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rm_decision_interfaces__msg__CvDecision__Sequence *
rm_decision_interfaces__msg__CvDecision__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rm_decision_interfaces__msg__CvDecision__Sequence * array = (rm_decision_interfaces__msg__CvDecision__Sequence *)allocator.allocate(sizeof(rm_decision_interfaces__msg__CvDecision__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rm_decision_interfaces__msg__CvDecision__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rm_decision_interfaces__msg__CvDecision__Sequence__destroy(rm_decision_interfaces__msg__CvDecision__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rm_decision_interfaces__msg__CvDecision__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rm_decision_interfaces__msg__CvDecision__Sequence__are_equal(const rm_decision_interfaces__msg__CvDecision__Sequence * lhs, const rm_decision_interfaces__msg__CvDecision__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rm_decision_interfaces__msg__CvDecision__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rm_decision_interfaces__msg__CvDecision__Sequence__copy(
  const rm_decision_interfaces__msg__CvDecision__Sequence * input,
  rm_decision_interfaces__msg__CvDecision__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rm_decision_interfaces__msg__CvDecision);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rm_decision_interfaces__msg__CvDecision * data =
      (rm_decision_interfaces__msg__CvDecision *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rm_decision_interfaces__msg__CvDecision__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rm_decision_interfaces__msg__CvDecision__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rm_decision_interfaces__msg__CvDecision__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

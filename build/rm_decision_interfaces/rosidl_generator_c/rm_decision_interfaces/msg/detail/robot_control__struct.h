// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_decision_interfaces:msg/RobotControl.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_CONTROL__STRUCT_H_
#define RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotControl in the package rm_decision_interfaces.
/**
  * 机器人控制命令(云台、底盘)
 */
typedef struct rm_decision_interfaces__msg__RobotControl
{
  /// 是否停止云台扫描 0->扫描状态 1->停止扫描
  bool stop_gimbal_scan;
  /// 底盘小陀螺旋转速度(rad/s)
  float chassis_spin_vel;
} rm_decision_interfaces__msg__RobotControl;

// Struct for a sequence of rm_decision_interfaces__msg__RobotControl.
typedef struct rm_decision_interfaces__msg__RobotControl__Sequence
{
  rm_decision_interfaces__msg__RobotControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_decision_interfaces__msg__RobotControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__ROBOT_CONTROL__STRUCT_H_

// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rm_decision_interfaces:msg/CvDecision.idl
// generated code does not contain a copyright notice

#ifndef RM_DECISION_INTERFACES__MSG__DETAIL__CV_DECISION__STRUCT_H_
#define RM_DECISION_INTERFACES__MSG__DETAIL__CV_DECISION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CvDecision in the package rm_decision_interfaces.
/**
  * v1.7.0 0x0001 比赛状态数据
 */
typedef struct rm_decision_interfaces__msg__CvDecision
{
  /// 当前比赛阶段
  uint8_t game_progress;
  /// 当前阶段剩余时间
  uint16_t stage_remain_time;
  /// v1.7.0 0x0003 机器人血量数据
  /// 红1英雄机器人血量
  uint16_t red_1_robot_hp;
  /// 红2工程机器人血量
  uint16_t red_2_robot_hp;
  /// 红3步兵机器人血量
  uint16_t red_3_robot_hp;
  /// 红4步兵机器人血量
  uint16_t red_4_robot_hp;
  /// 红7哨兵机器人血量
  uint16_t red_7_robot_hp;
  /// 红方前哨站血量
  uint16_t red_outpost_hp;
  /// 红方基地血量
  uint16_t red_base_hp;
  /// 蓝1英雄机器人血量
  uint16_t blue_1_robot_hp;
  /// 蓝2工程机器人血量
  uint16_t blue_2_robot_hp;
  /// 蓝3步兵机器人血量
  uint16_t blue_3_robot_hp;
  /// 蓝4步兵机器人血量
  uint16_t blue_4_robot_hp;
  /// 蓝7哨兵机器人血量
  uint16_t blue_7_robot_hp;
  /// 蓝方前哨站血量
  uint16_t blue_outpost_hp;
  /// 蓝方基地血量
  uint16_t blue_base_hp;
  /// v1.7.0 0x0201 机器人性能体系数据
  /// 本机器人ID     （1~7->红，101~107->蓝）
  uint8_t robot_id;
  /// 机器人当前血量
  uint16_t current_hp;
  /// 机器人血量上限
  uint16_t maximum_hp;
  /// v1.7.0 0x0202 实时功率热量数据
  /// 第一个17mm发射机构的射击热量
  uint16_t shooter_17_mm_1_barrel_heat;
  /// 第二个17mm发射机构的射击热量
  uint16_t shooter_17_mm_2_barrel_heat;
  /// v1.7.0 0x0208 允许发弹量
  /// 17mm弹丸允许发弹量
  uint16_t projectile_allowance_17mm;
  /// 剩余金币数量
  uint16_t remaining_gold_coin;
  ///  v1.7.0 0x0101 场地事件数据
  /// 中心增益点的占领状态(仅RMUL适用)
  uint32_t center_gain_point;
  /// 经下位机处理后的数据
  /// 队伍颜色 0->红 1->蓝
  bool team_color;
  /// 选择决策模式
  uint8_t decision_num;
} rm_decision_interfaces__msg__CvDecision;

// Struct for a sequence of rm_decision_interfaces__msg__CvDecision.
typedef struct rm_decision_interfaces__msg__CvDecision__Sequence
{
  rm_decision_interfaces__msg__CvDecision * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rm_decision_interfaces__msg__CvDecision__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RM_DECISION_INTERFACES__MSG__DETAIL__CV_DECISION__STRUCT_H_

/*
  视觉与电控通信协议
*/

#pragma once
#include <stdint.h>

#include <cstdint>

#ifdef __cplusplus
extern "C" {
#endif

#define FRAME_SOF 0xF6         // 帧头
#define MAX_SIZE_SERIAL_CV 64  //不建议一包大于64字节

typedef struct Frame {
  uint8_t sof;
  uint8_t data_len;
  uint8_t data[MAX_SIZE_SERIAL_CV];
} Frame_t;

#define AUTOAIM_MCU2AI 0x5A  // 电控 -> 视觉 (自瞄用)数据包头
/* 电控 -> 视觉 (自瞄用)MCU数据结构体*/
struct Protocol_MCUPacket_t {
  uint8_t header = AUTOAIM_MCU2AI;
  uint8_t detect_color : 1;  // 0-red 1-blue
  bool reset_tracker : 1;    // 重置识别器 0-不重置 1-重置
  uint8_t reserved : 6;      // 保留位
  float roll;
  float pitch;
  float yaw;
  float aim_x;  // 火控计算出的目标点
  float aim_y;  // 火控计算出的目标点
  float aim_z;  // 火控计算出的目标点
  uint16_t checksum = 0;
} __attribute__((packed));

#define AUTOAIM_AI2MCU 0xA5  // 视觉 -> 电控 (自瞄用)数据包头
/* 视觉 -> 电控 (自瞄用)数据结构体*/
struct Protocol_MasterPacket_t {
  uint8_t header = AUTOAIM_AI2MCU;
  bool tracking : 1;       // 0-不追踪 1-追踪
  uint8_t id : 3;          // 0-outpost 6-guard 7-base
  uint8_t armors_num : 3;  // 2-balance 3-outpost 4-normal
  uint8_t reserved : 1;    // 保留位
  float x;
  float y;
  float z;
  float yaw;
  float vx;
  float vy;
  float vz;
  float v_yaw;
  float r1;
  float r2;
  float dz;
  float letency_time;
  uint16_t checksum = 0;
} __attribute__((packed));

#define DECISION_MCU2AI 0x6A  // 决策数据包头
/* 电控 -> 视觉 (决策用)裁判系统数据结构体*/
struct Protocol_UpDataReferee_t {
  uint8_t header = DECISION_MCU2AI;
  uint8_t game_progress;                  /* 当前比赛阶段 */
  uint16_t stage_remain_time;             /* 当前阶段剩余时间 */
  uint16_t red_1_robot_hp;                /* 红1英雄机器人血量 */
  uint16_t red_2_robot_hp;                /* 红2工程机器人血量 */
  uint16_t red_3_robot_hp;                /* 红3步兵机器人血量 */
  uint16_t red_4_robot_hp;                /* 红4步兵机器人血量 */
  uint16_t red_7_robot_hp;                /* 红7哨兵机器人血量 */
  uint16_t red_outpost_hp;                /* 红方前哨站血量 */
  uint16_t red_base_hp;                   /* 红方基地血量 */
  uint16_t blue_1_robot_hp;               /* 蓝1英雄机器人血量 */
  uint16_t blue_2_robot_hp;               /* 蓝2工程机器人血量 */
  uint16_t blue_3_robot_hp;               /* 蓝3步兵机器人血量 */
  uint16_t blue_4_robot_hp;               /* 蓝4步兵机器人血量 */
  uint16_t blue_7_robot_hp;               /* 蓝7哨兵机器人血量 */
  uint16_t blue_outpost_hp;               /* 蓝方前哨站血量 */
  uint16_t blue_base_hp;                  /* 蓝方基地血量 */
  uint8_t robot_id;                       /* 本机器人ID（1~7->红，101~107->蓝）*/  
  uint16_t current_hp;                    /* 机器人当前血量 */
  uint16_t maximum_hp;                    /* 机器人血量上限 */
  uint16_t shooter_17_mm_1_barrel_heat;   /* 第一个17mm发射机构的射击热量 */
  uint16_t shooter_17_mm_2_barrel_heat;   /* 第二个17mm发射机构的射击热量 */
  uint16_t projectile_allowance_17mm;     /* 17mm弹丸允许发弹量 */
  uint16_t remaining_gold_coin;           /* 剩余金币数量 */
  uint32_t center_gain_point;             /* 中心增益点的占领状态(仅RMUL适用) */
  bool team_color;                        /* 队伍颜色 0->红 1->蓝 */
  uint8_t decision_num;                   /* 选择决策模式 */
  uint16_t checksum = 0;
} __attribute__((packed));

#define NAVIGATION_AI2MCU 0xA6  // 导航数据包头
/* 视觉 -> 电控 (导航用)数据结构体*/
struct Protocol_NavCommand_t {
  uint8_t header = NAVIGATION_AI2MCU;
  struct __attribute__((packed)) {
    float yaw;        /* 偏航角(Yaw angle) */
    float pit;        /* 俯仰角(Pitch angle) */
    float rol;        /* 翻滚角(Roll angle) */
  } gimbal;           /* 欧拉角 */

  struct __attribute__((packed)) {
    float vx;         /* x轴移动速度 */
    float vy;         /* y轴移动速度*/
    float wz;         /* z轴转动速度 */
  } chassis_move_vec; /* 底盘移动向量 */

  // float dip_angle;

  uint16_t checksum = 0;
} __attribute__((packed));

#ifdef __cplusplus
}
#endif
# v1.7.0 0x0001 比赛状态数据
uint8 game_progress         # 当前比赛阶段
uint16 stage_remain_time    # 当前阶段剩余时间

# v1.7.0 0x0003 机器人血量数据
uint16 red_1_robot_hp   # 红1英雄机器人血量
uint16 red_2_robot_hp   # 红2工程机器人血量
uint16 red_3_robot_hp   # 红3步兵机器人血量
uint16 red_4_robot_hp   # 红4步兵机器人血量
uint16 red_7_robot_hp   # 红7哨兵机器人血量
uint16 red_outpost_hp   # 红方前哨站血量
uint16 red_base_hp      # 红方基地血量
uint16 blue_1_robot_hp  # 蓝1英雄机器人血量
uint16 blue_2_robot_hp  # 蓝2工程机器人血量
uint16 blue_3_robot_hp  # 蓝3步兵机器人血量
uint16 blue_4_robot_hp  # 蓝4步兵机器人血量
uint16 blue_7_robot_hp  # 蓝7哨兵机器人血量
uint16 blue_outpost_hp  # 蓝方前哨站血量
uint16 blue_base_hp     # 蓝方基地血量

# v1.7.0 0x0201 机器人性能体系数据
uint8 robot_id          # 本机器人ID     （1~7->红，101~107->蓝）
uint16 current_hp       # 机器人当前血量
uint16 maximum_hp       # 机器人血量上限

# v1.7.0 0x0202 实时功率热量数据
uint16 shooter_17_mm_1_barrel_heat  # 第一个17mm发射机构的射击热量
uint16 shooter_17_mm_2_barrel_heat  # 第二个17mm发射机构的射击热量

# v1.7.0 0x0208 允许发弹量
uint16 projectile_allowance_17mm    # 17mm弹丸允许发弹量
uint16 remaining_gold_coin          # 剩余金币数量

# v1.7.0 0x0101 场地事件数据
uint32 center_gain_point #中心增益点的占领状态(仅RMUL适用)

# 经下位机处理后的数据
bool team_color        # 队伍颜色 0->红 1->蓝
uint8 decision_num     # 选择决策模式
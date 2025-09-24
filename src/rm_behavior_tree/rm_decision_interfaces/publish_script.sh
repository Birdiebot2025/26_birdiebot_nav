source install/setup.sh

ros2 topic pub -r 1 /decision_status rm_decision_interfaces/msg/CvDecision "{
    game_progress: 4,
    stage_remain_time: 200,
    robot_id: 7,
    current_hp: 500,
    shooter_17_mm_1_barrel_heat: 100,
    team_color: 0,
    projectile_allowance_17mm: 200,

}" 
wait

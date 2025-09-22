cd /home/hero/Desktop/26_birdiebot_nav
#colcon build --symlink-install
sudo chmod 777 /dev/ttyUSB0
. install/setup.sh
sudo ps -ef | grep ros | grep -v grep | awk '{print $2}' | xargs sudo kill -9
cmds=(
	"export ROS_LOCALHOST_ONLY=1"
	"ros2 launch '/home/hero/Desktop/26_birdiebot_nav/src/rm_serial_driver/launch/serial_driver.launch.py'"
	"ros2 launch rm_nav_bringup tf2.launch.py"
	#"ros2 launch rm_nav_bringup bringup_real.launch.py world:=RMUC mode:=mapping lio:=pointlio"
	"ros2 launch rm_nav_bringup bringup_real.launch.py world:=nice mode:=nav lio:=pointlio"
	# "ros2 run dip_angle dip_angle"
	# "ros2 run navigation_data_processer navigation_data_processer"
	# "ros2 run rm_behavior_tree rm_behavior_tree"
	# "ros2 run rm_sentry_FSM rm_sentry_FSM"

	# "'/home/pq/Desktop/bubble_slam/src/rm_behavior_tree/rm_decision_interfaces/publish_script.sh'"
	)


for cmd in "${cmds[@]}";
do
	echo Current CMD : "$cmd"
	gnome-terminal -x bash -c "cd /home/hero/Desktop/26_birdiebot_nav;source /opt/ros/humble/setup.bash ;$cmd;exec bash;"
	sleep 2
done

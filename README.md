# birdiebot_nav_ws
1.安装 Livox SDK2

sudo apt install cmake

git clone https://github.com/Livox-SDK/Livox-SDK2.git

cd ./Livox-SDK2/

mkdir build

cd build

cmake .. && make -j

sudo make install

2.安装依赖

cd birdiebot_nav_ws

rosdep install -r --from-paths src --ignore-src --rosdistro $ROS_DISTRO -y

3.编译

colcon build --symlink-install

4.实车适配关键参数

以下均在/26_birdiebot_nav/src/rm_slam/src/rm_nav_bringup/config/reality下配置

本导航包已内置 livox_ros_driver2，可直接修改 MID360_config.json - lidar_configs - ip

测量机器人底盘正中心到雷达的相对坐标x, y 距离比较重要，将影响云台旋转时解算到 base_link 的坐标准确性，填入 sentry_robot_real.xacro - <joint name="livox_joint" type="fixed">

若雷达倾斜放置，无需在此处填入 rpy，而是将点云旋转角度填入 MID360_config.json - extrinsic_parameter

测量雷达与地面的垂直距离。此参数影响点云分割效果，填入 segmentation_real.yaml - sensor_height
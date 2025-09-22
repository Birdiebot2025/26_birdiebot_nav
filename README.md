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

cd bubble_slam

rosdep install -r --from-paths src --ignore-src --rosdistro $ROS_DISTRO -y

3.编译

colcon build --symlink-install
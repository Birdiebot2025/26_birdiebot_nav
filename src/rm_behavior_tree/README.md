# rm_behavior_tree

## 致谢

决策算法框架：基于深圳北理莫斯科大学北极熊POLARBEAR战队RM哨兵上位机决策算法  略微修改以适配整体框架。

非常非常感谢上述开源项目及其开发者的帮助！！！

## 描述

用于RoboMaster机甲大师赛的哨兵机器人自主决策的导航算法。

## 环境配置

当前开发环境为Ubuntu22.04，ROS Humble，BehaviorTree CPP 4.5

## 安装依赖

```
sudo apt-get install ros-humble-behaviortree-cpp
```

## 编译

```
cd rm_behavior_tree
colcon build --symlink-install
source install/setup.sh
```


## 使用方法

### 开启虚拟裁判系统话题发布

```
./rm_behavior_tree/rm_decision_interfaces/publish_script.sh
```

### 启动行为树
```
ros2 run rm_behavior_tree rm_behavior_tree
```

## 使用Groot2可视化行为树

### 下载Groot Linux Installer
```
https://www.behaviortree.dev/groot/
```

### 安装Groot2
```
chmod +x Groot2-*-linux-installer.run
./Groot2-*-linux-installer.run
```

### 运行Groot2
```
cd ~/Groot2/bin
./groot2
```

### 在Groot2中打开 rm_behavior_tree.xml
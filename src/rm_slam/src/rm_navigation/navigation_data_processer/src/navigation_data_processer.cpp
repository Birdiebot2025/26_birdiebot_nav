#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <std_msgs/msg/float64.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <navigation_interfaces/msg/navigation.hpp>

class NaviDataProcesser : public rclcpp::Node 
{
public:
    NaviDataProcesser() : Node("navi_data_processer")
    {
        // 订阅/cmd_vel_chassis话题
        nav_control_sub = this->create_subscription<geometry_msgs::msg::Twist>(
            "/cmd_vel_chassis", 
            10, 
            std::bind(&NaviDataProcesser::navControlCallback, this, std::placeholders::_1));
                
        // 订阅/dip_angle话题
        dip_angle_sub = this->create_subscription<std_msgs::msg::Float64>(
            "/dip_angle", 
            10, 
            std::bind(&NaviDataProcesser::dipAngleCallback, this, std::placeholders::_1));

        // 初始化发布者
        nav_control_pub = this->create_publisher<navigation_interfaces::msg::Navigation>("navigation_data", 10);
        
        // 初始化定时器，定期检查并发布数据
        timer_ = this->create_wall_timer(
            std::chrono::duration<double>(1.0 / 150.0),
            std::bind(&NaviDataProcesser::publishNavigationData, this));
            
        // 初始化标志位
        has_twist_ = false;
        has_dip_angle_ = false;
    }

private:
    void navControlCallback(const geometry_msgs::msg::Twist::SharedPtr msg) 
    {
        std::lock_guard<std::mutex> lock(data_mutex_);
        current_twist_ = *msg;
        has_twist_ = true;
    }

    void dipAngleCallback(const std_msgs::msg::Float64::SharedPtr msg) 
    {
        std::lock_guard<std::mutex> lock(data_mutex_);
        current_dip_angle_ = *msg;
        has_dip_angle_ = true;
        RCLCPP_INFO(this->get_logger(), "Received dip_angle: %.2f", msg->data);
    }

    void publishNavigationData() 
    {
        std::lock_guard<std::mutex> lock(data_mutex_);
        
        // 只有当两个数据都收到时才发布
        if (has_twist_ && has_dip_angle_)
        {
            auto nav_msg = navigation_interfaces::msg::Navigation();
            nav_msg.twist = current_twist_;
            nav_msg.dip_angle = current_dip_angle_;
            nav_control_pub->publish(nav_msg);
            RCLCPP_INFO(this->get_logger(), "Published combined navigation data");
            
            // 重置标志位，等待下一组数据
            has_twist_ = false;
            has_dip_angle_ = false;
        }
    }

    // 订阅和发布
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr nav_control_sub;
    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr dip_angle_sub;
    rclcpp::Publisher<navigation_interfaces::msg::Navigation>::SharedPtr nav_control_pub;
    rclcpp::TimerBase::SharedPtr timer_;

    // 数据存储
    geometry_msgs::msg::Twist current_twist_;
    std_msgs::msg::Float64 current_dip_angle_;
    
    // 同步控制
    std::mutex data_mutex_;
    bool has_twist_;
    bool has_dip_angle_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<NaviDataProcesser>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
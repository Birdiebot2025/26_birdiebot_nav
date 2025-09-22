#ifndef RM_BEHAVIOR_TREE__PLUGINS__DECORATOR__RATE_CONTROLLER_HPP_
#define RM_BEHAVIOR_TREE__PLUGINS__DECORATOR__RATE_CONTROLLER_HPP_

#include <chrono>
#include <string>

#include "behaviortree_cpp/decorator_node.h"

namespace rm_behavior_tree
{
class RateController : public BT::DecoratorNode
{
public:
    RateController(const std::string & name,const BT::NodeConfiguration & conf);

    static BT::PortsList providedPorts()
    {
        return {BT::InputPort<double>("hz", 10.0, "Rate")};
    }

private:
    BT::NodeStatus tick() override;

    std::chrono::time_point<std::chrono::high_resolution_clock> start_;

    double period_;
    bool first_time_;
};
}  //  namespace rm_behavior_tree

#endif  //  RM_BEHAVIOR_TREE__PLUGINS__DECORATOR__RATE_CONTROLLER_HPP_
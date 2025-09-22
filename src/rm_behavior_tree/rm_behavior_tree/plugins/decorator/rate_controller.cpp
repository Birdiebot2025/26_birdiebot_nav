#include "rm_behavior_tree/plugins/decorator/rate_controller.hpp"

#include <chrono>
#include <string>

namespace rm_behavior_tree
{

RateController::RateController(const std::string & name, const BT::NodeConfiguration & conf)
: BT::DecoratorNode(name, conf), first_time_(false)
{
    double hz =1.0;
    getInput("hz", hz);
    period_ = 1.0 / hz;
}

BT::NodeStatus RateController::tick()
{
    if(status() == BT::NodeStatus::IDLE)
    {
        //  Reset the starting point since we're starting a new iteration of
        //  the rate controller (moving from IDLE to RUNNING)
        start_ = std::chrono::high_resolution_clock::now();
        first_time_ = true;
    }

    setStatus(BT::NodeStatus::RUNNING);

    //  Determine how long its been since we've started this iteration
    auto now = std::chrono::high_resolution_clock::now();
    auto elapsed = now - start_;  //  间隔的时间

    //  Now,get that in seconds
    typedef std::chrono::duration<float> float_seconds;
    auto seconds = std::chrono::duration_cast<float_seconds>(elapsed);

    //  The child gets ticked the first time through and any time the period has
    //  expired. In addition, once the child begins to run, it is ticked each time
    //  'til completion

    //  在每次节点执行时，它会检查当前节点状态，如果节点状态是 IDLE，则重置开始时间点，以便开始新的迭代。
    //  然后，它将节点状态设置为 RUNNING。接着，它计算了当前迭代开始至当前时间的时间间隔，并将其转换为秒数。
    //  然后，它根据当前时间和周期来确定是否执行子节点。如果是第一次执行、子节点正在运行，或者当前时间已经超过周期，那么就执行子节点的 tick 函数。
    //  执行完成后，根据子节点的返回状态，更新节点的状态，并根据情况重置计时器。
    
    if (first_time_ || (child_node_ -> status() == BT::NodeStatus::RUNNING) || seconds.count() >= period_)
    {
        first_time_ = false;
        const BT::NodeStatus child_state = child_node_ -> executeTick();

        switch (child_state)
        {
            case BT::NodeStatus::RUNNING:
                return BT::NodeStatus::RUNNING;

            case BT::NodeStatus::SUCCESS:
                start_ = std::chrono::high_resolution_clock::now();  //  Reset the timer
                return BT::NodeStatus::SUCCESS;

            case BT::NodeStatus::FAILURE:
            default:
                return BT::NodeStatus::FAILURE;
        }
    }

    return status();
}

}  //  namespace rm_behavior_tree

#include "behaviortree_cpp/bt_factory.h"
BT_REGISTER_NODES(factory)
{
    factory.registerNodeType<rm_behavior_tree::RateController>("RateController");
}


#ifndef CPP_PACKAGE__LAP_TIME_ACTION_CLIENT_HPP_
#define CPP_PACKAGE__LAP_TIME_ACTION_CLIENT_HPP_

#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <action_package/action/lap_time.hpp>

#include <memory>

class LapTimeClient : public rclcpp::Node
{
public:
    LapTimeClient();
    void sendGoal();

private:
    using LapTime = action_package::action::LapTime;
    using LapTimeGoalHandle = rclcpp_action::ClientGoalHandle<LapTime>;

    void onGoalResponse(const LapTimeGoalHandle::SharedPtr & goal_handle);
    void onFeedback(
        const LapTimeGoalHandle::SharedPtr & goal_handle,
        const std::shared_ptr<const LapTime::Feedback> feedback
    );
    void onResult(const LapTimeGoalHandle::WrappedResult & result);

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp_action::Client<LapTime>::SharedPtr action_client_;
};

#endif // CPP_PACKAGE__LAP_TIME_ACTION_CLIENT_HPP_

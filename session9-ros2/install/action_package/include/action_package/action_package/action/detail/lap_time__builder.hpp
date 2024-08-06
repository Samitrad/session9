// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_package:action/LapTime.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PACKAGE__ACTION__DETAIL__LAP_TIME__BUILDER_HPP_
#define ACTION_PACKAGE__ACTION__DETAIL__LAP_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_package/action/detail/lap_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_package
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::LapTime_Goal>()
{
  return ::action_package::action::LapTime_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_LapTime_Result_total_time
{
public:
  Init_LapTime_Result_total_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_package::action::LapTime_Result total_time(::action_package::action::LapTime_Result::_total_time_type arg)
  {
    msg_.total_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::LapTime_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::LapTime_Result>()
{
  return action_package::action::builder::Init_LapTime_Result_total_time();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_LapTime_Feedback_elapsed_time
{
public:
  Init_LapTime_Feedback_elapsed_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_package::action::LapTime_Feedback elapsed_time(::action_package::action::LapTime_Feedback::_elapsed_time_type arg)
  {
    msg_.elapsed_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::LapTime_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::LapTime_Feedback>()
{
  return action_package::action::builder::Init_LapTime_Feedback_elapsed_time();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_LapTime_SendGoal_Request_goal
{
public:
  explicit Init_LapTime_SendGoal_Request_goal(::action_package::action::LapTime_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_package::action::LapTime_SendGoal_Request goal(::action_package::action::LapTime_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::LapTime_SendGoal_Request msg_;
};

class Init_LapTime_SendGoal_Request_goal_id
{
public:
  Init_LapTime_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LapTime_SendGoal_Request_goal goal_id(::action_package::action::LapTime_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LapTime_SendGoal_Request_goal(msg_);
  }

private:
  ::action_package::action::LapTime_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::LapTime_SendGoal_Request>()
{
  return action_package::action::builder::Init_LapTime_SendGoal_Request_goal_id();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_LapTime_SendGoal_Response_stamp
{
public:
  explicit Init_LapTime_SendGoal_Response_stamp(::action_package::action::LapTime_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_package::action::LapTime_SendGoal_Response stamp(::action_package::action::LapTime_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::LapTime_SendGoal_Response msg_;
};

class Init_LapTime_SendGoal_Response_accepted
{
public:
  Init_LapTime_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LapTime_SendGoal_Response_stamp accepted(::action_package::action::LapTime_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LapTime_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_package::action::LapTime_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::LapTime_SendGoal_Response>()
{
  return action_package::action::builder::Init_LapTime_SendGoal_Response_accepted();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_LapTime_GetResult_Request_goal_id
{
public:
  Init_LapTime_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_package::action::LapTime_GetResult_Request goal_id(::action_package::action::LapTime_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::LapTime_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::LapTime_GetResult_Request>()
{
  return action_package::action::builder::Init_LapTime_GetResult_Request_goal_id();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_LapTime_GetResult_Response_result
{
public:
  explicit Init_LapTime_GetResult_Response_result(::action_package::action::LapTime_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_package::action::LapTime_GetResult_Response result(::action_package::action::LapTime_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::LapTime_GetResult_Response msg_;
};

class Init_LapTime_GetResult_Response_status
{
public:
  Init_LapTime_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LapTime_GetResult_Response_result status(::action_package::action::LapTime_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LapTime_GetResult_Response_result(msg_);
  }

private:
  ::action_package::action::LapTime_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::LapTime_GetResult_Response>()
{
  return action_package::action::builder::Init_LapTime_GetResult_Response_status();
}

}  // namespace action_package


namespace action_package
{

namespace action
{

namespace builder
{

class Init_LapTime_FeedbackMessage_feedback
{
public:
  explicit Init_LapTime_FeedbackMessage_feedback(::action_package::action::LapTime_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_package::action::LapTime_FeedbackMessage feedback(::action_package::action::LapTime_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::action::LapTime_FeedbackMessage msg_;
};

class Init_LapTime_FeedbackMessage_goal_id
{
public:
  Init_LapTime_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LapTime_FeedbackMessage_feedback goal_id(::action_package::action::LapTime_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LapTime_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_package::action::LapTime_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::action::LapTime_FeedbackMessage>()
{
  return action_package::action::builder::Init_LapTime_FeedbackMessage_goal_id();
}

}  // namespace action_package

#endif  // ACTION_PACKAGE__ACTION__DETAIL__LAP_TIME__BUILDER_HPP_

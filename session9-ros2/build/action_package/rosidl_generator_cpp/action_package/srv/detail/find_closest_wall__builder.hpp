// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_package:srv/FindClosestWall.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PACKAGE__SRV__DETAIL__FIND_CLOSEST_WALL__BUILDER_HPP_
#define ACTION_PACKAGE__SRV__DETAIL__FIND_CLOSEST_WALL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_package/srv/detail/find_closest_wall__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_package
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::srv::FindClosestWall_Request>()
{
  return ::action_package::srv::FindClosestWall_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace action_package


namespace action_package
{

namespace srv
{

namespace builder
{

class Init_FindClosestWall_Response_distance
{
public:
  Init_FindClosestWall_Response_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_package::srv::FindClosestWall_Response distance(::action_package::srv::FindClosestWall_Response::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_package::srv::FindClosestWall_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_package::srv::FindClosestWall_Response>()
{
  return action_package::srv::builder::Init_FindClosestWall_Response_distance();
}

}  // namespace action_package

#endif  // ACTION_PACKAGE__SRV__DETAIL__FIND_CLOSEST_WALL__BUILDER_HPP_

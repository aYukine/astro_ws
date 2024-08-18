// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:srv/ResetOdom.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__SRV__DETAIL__RESET_ODOM__BUILDER_HPP_
#define CUSTOM_MESSAGES__SRV__DETAIL__RESET_ODOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/srv/detail/reset_odom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::srv::ResetOdom_Request>()
{
  return ::custom_messages::srv::ResetOdom_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace custom_messages


namespace custom_messages
{

namespace srv
{

namespace builder
{

class Init_ResetOdom_Response_success
{
public:
  Init_ResetOdom_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_messages::srv::ResetOdom_Response success(::custom_messages::srv::ResetOdom_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::srv::ResetOdom_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::srv::ResetOdom_Response>()
{
  return custom_messages::srv::builder::Init_ResetOdom_Response_success();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__SRV__DETAIL__RESET_ODOM__BUILDER_HPP_

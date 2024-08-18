// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/MotorFeedback.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_FEEDBACK__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/motor_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_MotorFeedback_position
{
public:
  explicit Init_MotorFeedback_position(::custom_messages::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  ::custom_messages::msg::MotorFeedback position(::custom_messages::msg::MotorFeedback::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_speed
{
public:
  explicit Init_MotorFeedback_speed(::custom_messages::msg::MotorFeedback & msg)
  : msg_(msg)
  {}
  Init_MotorFeedback_position speed(::custom_messages::msg::MotorFeedback::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_MotorFeedback_position(msg_);
  }

private:
  ::custom_messages::msg::MotorFeedback msg_;
};

class Init_MotorFeedback_motor_id
{
public:
  Init_MotorFeedback_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorFeedback_speed motor_id(::custom_messages::msg::MotorFeedback::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_MotorFeedback_speed(msg_);
  }

private:
  ::custom_messages::msg::MotorFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::MotorFeedback>()
{
  return custom_messages::msg::builder::Init_MotorFeedback_motor_id();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_FEEDBACK__BUILDER_HPP_

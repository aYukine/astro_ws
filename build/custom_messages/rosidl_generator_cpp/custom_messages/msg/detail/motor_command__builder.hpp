// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_voltagemode
{
public:
  explicit Init_MotorCommand_voltagemode(::custom_messages::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::custom_messages::msg::MotorCommand voltagemode(::custom_messages::msg::MotorCommand::_voltagemode_type arg)
  {
    msg_.voltagemode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::MotorCommand msg_;
};

class Init_MotorCommand_reset
{
public:
  explicit Init_MotorCommand_reset(::custom_messages::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_voltagemode reset(::custom_messages::msg::MotorCommand::_reset_type arg)
  {
    msg_.reset = std::move(arg);
    return Init_MotorCommand_voltagemode(msg_);
  }

private:
  ::custom_messages::msg::MotorCommand msg_;
};

class Init_MotorCommand_stop
{
public:
  explicit Init_MotorCommand_stop(::custom_messages::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_reset stop(::custom_messages::msg::MotorCommand::_stop_type arg)
  {
    msg_.stop = std::move(arg);
    return Init_MotorCommand_reset(msg_);
  }

private:
  ::custom_messages::msg::MotorCommand msg_;
};

class Init_MotorCommand_speedmode
{
public:
  explicit Init_MotorCommand_speedmode(::custom_messages::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_stop speedmode(::custom_messages::msg::MotorCommand::_speedmode_type arg)
  {
    msg_.speedmode = std::move(arg);
    return Init_MotorCommand_stop(msg_);
  }

private:
  ::custom_messages::msg::MotorCommand msg_;
};

class Init_MotorCommand_goal
{
public:
  explicit Init_MotorCommand_goal(::custom_messages::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_speedmode goal(::custom_messages::msg::MotorCommand::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_MotorCommand_speedmode(msg_);
  }

private:
  ::custom_messages::msg::MotorCommand msg_;
};

class Init_MotorCommand_motor_id
{
public:
  Init_MotorCommand_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_goal motor_id(::custom_messages::msg::MotorCommand::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_MotorCommand_goal(msg_);
  }

private:
  ::custom_messages::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::MotorCommand>()
{
  return custom_messages::msg::builder::Init_MotorCommand_motor_id();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

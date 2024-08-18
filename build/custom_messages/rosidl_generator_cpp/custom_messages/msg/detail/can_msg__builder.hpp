// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/CanMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__CAN_MSG__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__CAN_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/can_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_CanMsg_data
{
public:
  explicit Init_CanMsg_data(::custom_messages::msg::CanMsg & msg)
  : msg_(msg)
  {}
  ::custom_messages::msg::CanMsg data(::custom_messages::msg::CanMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::CanMsg msg_;
};

class Init_CanMsg_can_id
{
public:
  Init_CanMsg_can_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanMsg_data can_id(::custom_messages::msg::CanMsg::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_CanMsg_data(msg_);
  }

private:
  ::custom_messages::msg::CanMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::CanMsg>()
{
  return custom_messages::msg::builder::Init_CanMsg_can_id();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__CAN_MSG__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messages:msg/Dino.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__DINO__BUILDER_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__DINO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messages/msg/detail/dino__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messages
{

namespace msg
{

namespace builder
{

class Init_Dino_weight
{
public:
  explicit Init_Dino_weight(::custom_messages::msg::Dino & msg)
  : msg_(msg)
  {}
  ::custom_messages::msg::Dino weight(::custom_messages::msg::Dino::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messages::msg::Dino msg_;
};

class Init_Dino_age
{
public:
  explicit Init_Dino_age(::custom_messages::msg::Dino & msg)
  : msg_(msg)
  {}
  Init_Dino_weight age(::custom_messages::msg::Dino::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_Dino_weight(msg_);
  }

private:
  ::custom_messages::msg::Dino msg_;
};

class Init_Dino_name
{
public:
  Init_Dino_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dino_age name(::custom_messages::msg::Dino::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Dino_age(msg_);
  }

private:
  ::custom_messages::msg::Dino msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messages::msg::Dino>()
{
  return custom_messages::msg::builder::Init_Dino_name();
}

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__DINO__BUILDER_HPP_

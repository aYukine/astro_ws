// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_messages:msg/MotorFeedback.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_FEEDBACK__STRUCT_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_FEEDBACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_messages__msg__MotorFeedback __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__msg__MotorFeedback __declspec(deprecated)
#endif

namespace custom_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorFeedback_
{
  using Type = MotorFeedback_<ContainerAllocator>;

  explicit MotorFeedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->speed = 0.0f;
      this->position = 0.0f;
    }
  }

  explicit MotorFeedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->speed = 0.0f;
      this->position = 0.0f;
    }
  }

  // field types and members
  using _motor_id_type =
    uint16_t;
  _motor_id_type motor_id;
  using _speed_type =
    float;
  _speed_type speed;
  using _position_type =
    float;
  _position_type position;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint16_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__position(
    const float & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::msg::MotorFeedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::msg::MotorFeedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::msg::MotorFeedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::msg::MotorFeedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::MotorFeedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::MotorFeedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::MotorFeedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::MotorFeedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::msg::MotorFeedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::msg::MotorFeedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__msg__MotorFeedback
    std::shared_ptr<custom_messages::msg::MotorFeedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__msg__MotorFeedback
    std::shared_ptr<custom_messages::msg::MotorFeedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorFeedback_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorFeedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorFeedback_

// alias to use template instance with default allocator
using MotorFeedback =
  custom_messages::msg::MotorFeedback_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_FEEDBACK__STRUCT_HPP_

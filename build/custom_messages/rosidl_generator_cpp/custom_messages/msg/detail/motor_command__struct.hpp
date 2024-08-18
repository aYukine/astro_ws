// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_messages:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_
#define CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_messages__msg__MotorCommand __attribute__((deprecated))
#else
# define DEPRECATED__custom_messages__msg__MotorCommand __declspec(deprecated)
#endif

namespace custom_messages
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCommand_
{
  using Type = MotorCommand_<ContainerAllocator>;

  explicit MotorCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->goal = 0.0f;
      this->speedmode = false;
      this->stop = false;
      this->reset = false;
      this->voltagemode = false;
    }
  }

  explicit MotorCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->goal = 0.0f;
      this->speedmode = false;
      this->stop = false;
      this->reset = false;
      this->voltagemode = false;
    }
  }

  // field types and members
  using _motor_id_type =
    uint16_t;
  _motor_id_type motor_id;
  using _goal_type =
    float;
  _goal_type goal;
  using _speedmode_type =
    bool;
  _speedmode_type speedmode;
  using _stop_type =
    bool;
  _stop_type stop;
  using _reset_type =
    bool;
  _reset_type reset;
  using _voltagemode_type =
    bool;
  _voltagemode_type voltagemode;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint16_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__goal(
    const float & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__speedmode(
    const bool & _arg)
  {
    this->speedmode = _arg;
    return *this;
  }
  Type & set__stop(
    const bool & _arg)
  {
    this->stop = _arg;
    return *this;
  }
  Type & set__reset(
    const bool & _arg)
  {
    this->reset = _arg;
    return *this;
  }
  Type & set__voltagemode(
    const bool & _arg)
  {
    this->voltagemode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_messages::msg::MotorCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_messages::msg::MotorCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_messages::msg::MotorCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_messages::msg::MotorCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::MotorCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::MotorCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_messages::msg::MotorCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_messages::msg::MotorCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_messages::msg::MotorCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_messages::msg::MotorCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_messages__msg__MotorCommand
    std::shared_ptr<custom_messages::msg::MotorCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_messages__msg__MotorCommand
    std::shared_ptr<custom_messages::msg::MotorCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCommand_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->speedmode != other.speedmode) {
      return false;
    }
    if (this->stop != other.stop) {
      return false;
    }
    if (this->reset != other.reset) {
      return false;
    }
    if (this->voltagemode != other.voltagemode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCommand_

// alias to use template instance with default allocator
using MotorCommand =
  custom_messages::msg::MotorCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_messages

#endif  // CUSTOM_MESSAGES__MSG__DETAIL__MOTOR_COMMAND__STRUCT_HPP_

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_messages:msg/ControllerMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControllerMsg(type):
    """Metaclass of message 'ControllerMsg'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_messages.msg.ControllerMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__controller_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__controller_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__controller_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__controller_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__controller_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControllerMsg(metaclass=Metaclass_ControllerMsg):
    """Message class 'ControllerMsg'."""

    __slots__ = [
        '_button_a',
        '_button_b',
        '_button_x',
        '_button_y',
        '_button_up',
        '_button_down',
        '_button_left',
        '_button_right',
        '_button_sel',
        '_button_sta',
        '_button_lb',
        '_button_lt',
        '_button_rb',
        '_button_rt',
        '_button_joystick_left',
        '_button_joystick_right',
        '_button_m1',
        '_button_m2',
        '_left_analog_x',
        '_left_analog_y',
        '_right_analog_x',
        '_right_analog_y',
    ]

    _fields_and_field_types = {
        'button_a': 'boolean',
        'button_b': 'boolean',
        'button_x': 'boolean',
        'button_y': 'boolean',
        'button_up': 'boolean',
        'button_down': 'boolean',
        'button_left': 'boolean',
        'button_right': 'boolean',
        'button_sel': 'boolean',
        'button_sta': 'boolean',
        'button_lb': 'boolean',
        'button_lt': 'boolean',
        'button_rb': 'boolean',
        'button_rt': 'boolean',
        'button_joystick_left': 'boolean',
        'button_joystick_right': 'boolean',
        'button_m1': 'boolean',
        'button_m2': 'boolean',
        'left_analog_x': 'uint8',
        'left_analog_y': 'uint8',
        'right_analog_x': 'uint8',
        'right_analog_y': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.button_a = kwargs.get('button_a', bool())
        self.button_b = kwargs.get('button_b', bool())
        self.button_x = kwargs.get('button_x', bool())
        self.button_y = kwargs.get('button_y', bool())
        self.button_up = kwargs.get('button_up', bool())
        self.button_down = kwargs.get('button_down', bool())
        self.button_left = kwargs.get('button_left', bool())
        self.button_right = kwargs.get('button_right', bool())
        self.button_sel = kwargs.get('button_sel', bool())
        self.button_sta = kwargs.get('button_sta', bool())
        self.button_lb = kwargs.get('button_lb', bool())
        self.button_lt = kwargs.get('button_lt', bool())
        self.button_rb = kwargs.get('button_rb', bool())
        self.button_rt = kwargs.get('button_rt', bool())
        self.button_joystick_left = kwargs.get('button_joystick_left', bool())
        self.button_joystick_right = kwargs.get('button_joystick_right', bool())
        self.button_m1 = kwargs.get('button_m1', bool())
        self.button_m2 = kwargs.get('button_m2', bool())
        self.left_analog_x = kwargs.get('left_analog_x', int())
        self.left_analog_y = kwargs.get('left_analog_y', int())
        self.right_analog_x = kwargs.get('right_analog_x', int())
        self.right_analog_y = kwargs.get('right_analog_y', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.button_a != other.button_a:
            return False
        if self.button_b != other.button_b:
            return False
        if self.button_x != other.button_x:
            return False
        if self.button_y != other.button_y:
            return False
        if self.button_up != other.button_up:
            return False
        if self.button_down != other.button_down:
            return False
        if self.button_left != other.button_left:
            return False
        if self.button_right != other.button_right:
            return False
        if self.button_sel != other.button_sel:
            return False
        if self.button_sta != other.button_sta:
            return False
        if self.button_lb != other.button_lb:
            return False
        if self.button_lt != other.button_lt:
            return False
        if self.button_rb != other.button_rb:
            return False
        if self.button_rt != other.button_rt:
            return False
        if self.button_joystick_left != other.button_joystick_left:
            return False
        if self.button_joystick_right != other.button_joystick_right:
            return False
        if self.button_m1 != other.button_m1:
            return False
        if self.button_m2 != other.button_m2:
            return False
        if self.left_analog_x != other.left_analog_x:
            return False
        if self.left_analog_y != other.left_analog_y:
            return False
        if self.right_analog_x != other.right_analog_x:
            return False
        if self.right_analog_y != other.right_analog_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def button_a(self):
        """Message field 'button_a'."""
        return self._button_a

    @button_a.setter
    def button_a(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_a' field must be of type 'bool'"
        self._button_a = value

    @builtins.property
    def button_b(self):
        """Message field 'button_b'."""
        return self._button_b

    @button_b.setter
    def button_b(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_b' field must be of type 'bool'"
        self._button_b = value

    @builtins.property
    def button_x(self):
        """Message field 'button_x'."""
        return self._button_x

    @button_x.setter
    def button_x(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_x' field must be of type 'bool'"
        self._button_x = value

    @builtins.property
    def button_y(self):
        """Message field 'button_y'."""
        return self._button_y

    @button_y.setter
    def button_y(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_y' field must be of type 'bool'"
        self._button_y = value

    @builtins.property
    def button_up(self):
        """Message field 'button_up'."""
        return self._button_up

    @button_up.setter
    def button_up(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_up' field must be of type 'bool'"
        self._button_up = value

    @builtins.property
    def button_down(self):
        """Message field 'button_down'."""
        return self._button_down

    @button_down.setter
    def button_down(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_down' field must be of type 'bool'"
        self._button_down = value

    @builtins.property
    def button_left(self):
        """Message field 'button_left'."""
        return self._button_left

    @button_left.setter
    def button_left(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_left' field must be of type 'bool'"
        self._button_left = value

    @builtins.property
    def button_right(self):
        """Message field 'button_right'."""
        return self._button_right

    @button_right.setter
    def button_right(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_right' field must be of type 'bool'"
        self._button_right = value

    @builtins.property
    def button_sel(self):
        """Message field 'button_sel'."""
        return self._button_sel

    @button_sel.setter
    def button_sel(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_sel' field must be of type 'bool'"
        self._button_sel = value

    @builtins.property
    def button_sta(self):
        """Message field 'button_sta'."""
        return self._button_sta

    @button_sta.setter
    def button_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_sta' field must be of type 'bool'"
        self._button_sta = value

    @builtins.property
    def button_lb(self):
        """Message field 'button_lb'."""
        return self._button_lb

    @button_lb.setter
    def button_lb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_lb' field must be of type 'bool'"
        self._button_lb = value

    @builtins.property
    def button_lt(self):
        """Message field 'button_lt'."""
        return self._button_lt

    @button_lt.setter
    def button_lt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_lt' field must be of type 'bool'"
        self._button_lt = value

    @builtins.property
    def button_rb(self):
        """Message field 'button_rb'."""
        return self._button_rb

    @button_rb.setter
    def button_rb(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_rb' field must be of type 'bool'"
        self._button_rb = value

    @builtins.property
    def button_rt(self):
        """Message field 'button_rt'."""
        return self._button_rt

    @button_rt.setter
    def button_rt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_rt' field must be of type 'bool'"
        self._button_rt = value

    @builtins.property
    def button_joystick_left(self):
        """Message field 'button_joystick_left'."""
        return self._button_joystick_left

    @button_joystick_left.setter
    def button_joystick_left(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_joystick_left' field must be of type 'bool'"
        self._button_joystick_left = value

    @builtins.property
    def button_joystick_right(self):
        """Message field 'button_joystick_right'."""
        return self._button_joystick_right

    @button_joystick_right.setter
    def button_joystick_right(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_joystick_right' field must be of type 'bool'"
        self._button_joystick_right = value

    @builtins.property
    def button_m1(self):
        """Message field 'button_m1'."""
        return self._button_m1

    @button_m1.setter
    def button_m1(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_m1' field must be of type 'bool'"
        self._button_m1 = value

    @builtins.property
    def button_m2(self):
        """Message field 'button_m2'."""
        return self._button_m2

    @button_m2.setter
    def button_m2(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'button_m2' field must be of type 'bool'"
        self._button_m2 = value

    @builtins.property
    def left_analog_x(self):
        """Message field 'left_analog_x'."""
        return self._left_analog_x

    @left_analog_x.setter
    def left_analog_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_analog_x' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left_analog_x' field must be an unsigned integer in [0, 255]"
        self._left_analog_x = value

    @builtins.property
    def left_analog_y(self):
        """Message field 'left_analog_y'."""
        return self._left_analog_y

    @left_analog_y.setter
    def left_analog_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_analog_y' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left_analog_y' field must be an unsigned integer in [0, 255]"
        self._left_analog_y = value

    @builtins.property
    def right_analog_x(self):
        """Message field 'right_analog_x'."""
        return self._right_analog_x

    @right_analog_x.setter
    def right_analog_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_analog_x' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'right_analog_x' field must be an unsigned integer in [0, 255]"
        self._right_analog_x = value

    @builtins.property
    def right_analog_y(self):
        """Message field 'right_analog_y'."""
        return self._right_analog_y

    @right_analog_y.setter
    def right_analog_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_analog_y' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'right_analog_y' field must be an unsigned integer in [0, 255]"
        self._right_analog_y = value

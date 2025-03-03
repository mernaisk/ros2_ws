# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_parameters:msg/JoystickParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JoystickParameters(type):
    """Metaclass of message 'JoystickParameters'."""

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
            module = import_type_support('my_parameters')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_parameters.msg.JoystickParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joystick_parameters
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joystick_parameters
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joystick_parameters
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joystick_parameters
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joystick_parameters

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JoystickParameters(metaclass=Metaclass_JoystickParameters):
    """Message class 'JoystickParameters'."""

    __slots__ = [
        '_turn_command',
        '_turn_angle',
        '_position_command',
        '_position_direction',
        '_velocity',
        '_enabled',
    ]

    _fields_and_field_types = {
        'turn_command': 'boolean',
        'turn_angle': 'float',
        'position_command': 'boolean',
        'position_direction': 'float',
        'velocity': 'float',
        'enabled': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.turn_command = kwargs.get('turn_command', bool())
        self.turn_angle = kwargs.get('turn_angle', float())
        self.position_command = kwargs.get('position_command', bool())
        self.position_direction = kwargs.get('position_direction', float())
        self.velocity = kwargs.get('velocity', float())
        self.enabled = kwargs.get('enabled', bool())

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
        if self.turn_command != other.turn_command:
            return False
        if self.turn_angle != other.turn_angle:
            return False
        if self.position_command != other.position_command:
            return False
        if self.position_direction != other.position_direction:
            return False
        if self.velocity != other.velocity:
            return False
        if self.enabled != other.enabled:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def turn_command(self):
        """Message field 'turn_command'."""
        return self._turn_command

    @turn_command.setter
    def turn_command(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'turn_command' field must be of type 'bool'"
        self._turn_command = value

    @builtins.property
    def turn_angle(self):
        """Message field 'turn_angle'."""
        return self._turn_angle

    @turn_angle.setter
    def turn_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turn_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'turn_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._turn_angle = value

    @builtins.property
    def position_command(self):
        """Message field 'position_command'."""
        return self._position_command

    @position_command.setter
    def position_command(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'position_command' field must be of type 'bool'"
        self._position_command = value

    @builtins.property
    def position_direction(self):
        """Message field 'position_direction'."""
        return self._position_direction

    @position_direction.setter
    def position_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_direction' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_direction' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_direction = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity = value

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enabled' field must be of type 'bool'"
        self._enabled = value

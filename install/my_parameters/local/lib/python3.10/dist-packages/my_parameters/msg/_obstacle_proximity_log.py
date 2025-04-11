# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_parameters:msg/ObstacleProximityLog.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObstacleProximityLog(type):
    """Metaclass of message 'ObstacleProximityLog'."""

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
                'my_parameters.msg.ObstacleProximityLog')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle_proximity_log
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle_proximity_log
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle_proximity_log
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle_proximity_log
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle_proximity_log

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObstacleProximityLog(metaclass=Metaclass_ObstacleProximityLog):
    """Message class 'ObstacleProximityLog'."""

    __slots__ = [
        '_distance_zone',
        '_goal_status',
        '_stamp',
        '_turn_count',
    ]

    _fields_and_field_types = {
        'distance_zone': 'int8',
        'goal_status': 'int8',
        'stamp': 'builtin_interfaces/Time',
        'turn_count': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.distance_zone = kwargs.get('distance_zone', int())
        self.goal_status = kwargs.get('goal_status', int())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.turn_count = kwargs.get('turn_count', int())

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
        if self.distance_zone != other.distance_zone:
            return False
        if self.goal_status != other.goal_status:
            return False
        if self.stamp != other.stamp:
            return False
        if self.turn_count != other.turn_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def distance_zone(self):
        """Message field 'distance_zone'."""
        return self._distance_zone

    @distance_zone.setter
    def distance_zone(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distance_zone' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'distance_zone' field must be an integer in [-128, 127]"
        self._distance_zone = value

    @builtins.property
    def goal_status(self):
        """Message field 'goal_status'."""
        return self._goal_status

    @goal_status.setter
    def goal_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'goal_status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'goal_status' field must be an integer in [-128, 127]"
        self._goal_status = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def turn_count(self):
        """Message field 'turn_count'."""
        return self._turn_count

    @turn_count.setter
    def turn_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_count' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'turn_count' field must be an integer in [-2147483648, 2147483647]"
        self._turn_count = value

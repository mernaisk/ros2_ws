# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_parameters:msg/Stm32Data.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Stm32Data(type):
    """Metaclass of message 'Stm32Data'."""

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
                'my_parameters.msg.Stm32Data')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__stm32_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__stm32_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__stm32_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__stm32_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__stm32_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Stm32Data(metaclass=Metaclass_Stm32Data):
    """Message class 'Stm32Data'."""

    __slots__ = [
        '_motor1_fr',
        '_motor2_fr',
        '_motor3_fr',
        '_motor1_fl',
        '_motor2_fl',
        '_motor3_fl',
        '_motor1_rr',
        '_motor2_rr',
        '_motor3_rr',
        '_motor1_rl',
        '_motor2_rl',
        '_motor3_rl',
        '_move',
    ]

    _fields_and_field_types = {
        'motor1_fr': 'int32',
        'motor2_fr': 'int32',
        'motor3_fr': 'int32',
        'motor1_fl': 'int32',
        'motor2_fl': 'int32',
        'motor3_fl': 'int32',
        'motor1_rr': 'int32',
        'motor2_rr': 'int32',
        'motor3_rr': 'int32',
        'motor1_rl': 'int32',
        'motor2_rl': 'int32',
        'motor3_rl': 'int32',
        'move': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor1_fr = kwargs.get('motor1_fr', int())
        self.motor2_fr = kwargs.get('motor2_fr', int())
        self.motor3_fr = kwargs.get('motor3_fr', int())
        self.motor1_fl = kwargs.get('motor1_fl', int())
        self.motor2_fl = kwargs.get('motor2_fl', int())
        self.motor3_fl = kwargs.get('motor3_fl', int())
        self.motor1_rr = kwargs.get('motor1_rr', int())
        self.motor2_rr = kwargs.get('motor2_rr', int())
        self.motor3_rr = kwargs.get('motor3_rr', int())
        self.motor1_rl = kwargs.get('motor1_rl', int())
        self.motor2_rl = kwargs.get('motor2_rl', int())
        self.motor3_rl = kwargs.get('motor3_rl', int())
        self.move = kwargs.get('move', bool())

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
        if self.motor1_fr != other.motor1_fr:
            return False
        if self.motor2_fr != other.motor2_fr:
            return False
        if self.motor3_fr != other.motor3_fr:
            return False
        if self.motor1_fl != other.motor1_fl:
            return False
        if self.motor2_fl != other.motor2_fl:
            return False
        if self.motor3_fl != other.motor3_fl:
            return False
        if self.motor1_rr != other.motor1_rr:
            return False
        if self.motor2_rr != other.motor2_rr:
            return False
        if self.motor3_rr != other.motor3_rr:
            return False
        if self.motor1_rl != other.motor1_rl:
            return False
        if self.motor2_rl != other.motor2_rl:
            return False
        if self.motor3_rl != other.motor3_rl:
            return False
        if self.move != other.move:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor1_fr(self):
        """Message field 'motor1_fr'."""
        return self._motor1_fr

    @motor1_fr.setter
    def motor1_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor1_fr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor1_fr' field must be an integer in [-2147483648, 2147483647]"
        self._motor1_fr = value

    @builtins.property
    def motor2_fr(self):
        """Message field 'motor2_fr'."""
        return self._motor2_fr

    @motor2_fr.setter
    def motor2_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor2_fr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor2_fr' field must be an integer in [-2147483648, 2147483647]"
        self._motor2_fr = value

    @builtins.property
    def motor3_fr(self):
        """Message field 'motor3_fr'."""
        return self._motor3_fr

    @motor3_fr.setter
    def motor3_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor3_fr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor3_fr' field must be an integer in [-2147483648, 2147483647]"
        self._motor3_fr = value

    @builtins.property
    def motor1_fl(self):
        """Message field 'motor1_fl'."""
        return self._motor1_fl

    @motor1_fl.setter
    def motor1_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor1_fl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor1_fl' field must be an integer in [-2147483648, 2147483647]"
        self._motor1_fl = value

    @builtins.property
    def motor2_fl(self):
        """Message field 'motor2_fl'."""
        return self._motor2_fl

    @motor2_fl.setter
    def motor2_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor2_fl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor2_fl' field must be an integer in [-2147483648, 2147483647]"
        self._motor2_fl = value

    @builtins.property
    def motor3_fl(self):
        """Message field 'motor3_fl'."""
        return self._motor3_fl

    @motor3_fl.setter
    def motor3_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor3_fl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor3_fl' field must be an integer in [-2147483648, 2147483647]"
        self._motor3_fl = value

    @builtins.property
    def motor1_rr(self):
        """Message field 'motor1_rr'."""
        return self._motor1_rr

    @motor1_rr.setter
    def motor1_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor1_rr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor1_rr' field must be an integer in [-2147483648, 2147483647]"
        self._motor1_rr = value

    @builtins.property
    def motor2_rr(self):
        """Message field 'motor2_rr'."""
        return self._motor2_rr

    @motor2_rr.setter
    def motor2_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor2_rr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor2_rr' field must be an integer in [-2147483648, 2147483647]"
        self._motor2_rr = value

    @builtins.property
    def motor3_rr(self):
        """Message field 'motor3_rr'."""
        return self._motor3_rr

    @motor3_rr.setter
    def motor3_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor3_rr' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor3_rr' field must be an integer in [-2147483648, 2147483647]"
        self._motor3_rr = value

    @builtins.property
    def motor1_rl(self):
        """Message field 'motor1_rl'."""
        return self._motor1_rl

    @motor1_rl.setter
    def motor1_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor1_rl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor1_rl' field must be an integer in [-2147483648, 2147483647]"
        self._motor1_rl = value

    @builtins.property
    def motor2_rl(self):
        """Message field 'motor2_rl'."""
        return self._motor2_rl

    @motor2_rl.setter
    def motor2_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor2_rl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor2_rl' field must be an integer in [-2147483648, 2147483647]"
        self._motor2_rl = value

    @builtins.property
    def motor3_rl(self):
        """Message field 'motor3_rl'."""
        return self._motor3_rl

    @motor3_rl.setter
    def motor3_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor3_rl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor3_rl' field must be an integer in [-2147483648, 2147483647]"
        self._motor3_rl = value

    @builtins.property
    def move(self):
        """Message field 'move'."""
        return self._move

    @move.setter
    def move(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'move' field must be of type 'bool'"
        self._move = value

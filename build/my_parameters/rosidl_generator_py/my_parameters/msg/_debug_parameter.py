# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_parameters:msg/DebugParameter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DebugParameter(type):
    """Metaclass of message 'DebugParameter'."""

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
                'my_parameters.msg.DebugParameter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__debug_parameter
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__debug_parameter
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__debug_parameter
            cls._TYPE_SUPPORT = module.type_support_msg__msg__debug_parameter
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__debug_parameter

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DebugParameter(metaclass=Metaclass_DebugParameter):
    """Message class 'DebugParameter'."""

    __slots__ = [
        '_alpha_r_fr',
        '_alpha_b_fr',
        '_z_l_fr',
        '_alpha_r_fl',
        '_alpha_b_fl',
        '_z_l_fl',
        '_alpha_r_rr',
        '_alpha_b_rr',
        '_z_l_rr',
        '_alpha_r_rl',
        '_alpha_b_rl',
        '_z_l_rl',
    ]

    _fields_and_field_types = {
        'alpha_r_fr': 'double',
        'alpha_b_fr': 'double',
        'z_l_fr': 'double',
        'alpha_r_fl': 'double',
        'alpha_b_fl': 'double',
        'z_l_fl': 'double',
        'alpha_r_rr': 'double',
        'alpha_b_rr': 'double',
        'z_l_rr': 'double',
        'alpha_r_rl': 'double',
        'alpha_b_rl': 'double',
        'z_l_rl': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.alpha_r_fr = kwargs.get('alpha_r_fr', float())
        self.alpha_b_fr = kwargs.get('alpha_b_fr', float())
        self.z_l_fr = kwargs.get('z_l_fr', float())
        self.alpha_r_fl = kwargs.get('alpha_r_fl', float())
        self.alpha_b_fl = kwargs.get('alpha_b_fl', float())
        self.z_l_fl = kwargs.get('z_l_fl', float())
        self.alpha_r_rr = kwargs.get('alpha_r_rr', float())
        self.alpha_b_rr = kwargs.get('alpha_b_rr', float())
        self.z_l_rr = kwargs.get('z_l_rr', float())
        self.alpha_r_rl = kwargs.get('alpha_r_rl', float())
        self.alpha_b_rl = kwargs.get('alpha_b_rl', float())
        self.z_l_rl = kwargs.get('z_l_rl', float())

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
        if self.alpha_r_fr != other.alpha_r_fr:
            return False
        if self.alpha_b_fr != other.alpha_b_fr:
            return False
        if self.z_l_fr != other.z_l_fr:
            return False
        if self.alpha_r_fl != other.alpha_r_fl:
            return False
        if self.alpha_b_fl != other.alpha_b_fl:
            return False
        if self.z_l_fl != other.z_l_fl:
            return False
        if self.alpha_r_rr != other.alpha_r_rr:
            return False
        if self.alpha_b_rr != other.alpha_b_rr:
            return False
        if self.z_l_rr != other.z_l_rr:
            return False
        if self.alpha_r_rl != other.alpha_r_rl:
            return False
        if self.alpha_b_rl != other.alpha_b_rl:
            return False
        if self.z_l_rl != other.z_l_rl:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def alpha_r_fr(self):
        """Message field 'alpha_r_fr'."""
        return self._alpha_r_fr

    @alpha_r_fr.setter
    def alpha_r_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_r_fr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha_r_fr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha_r_fr = value

    @builtins.property
    def alpha_b_fr(self):
        """Message field 'alpha_b_fr'."""
        return self._alpha_b_fr

    @alpha_b_fr.setter
    def alpha_b_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_b_fr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha_b_fr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha_b_fr = value

    @builtins.property
    def z_l_fr(self):
        """Message field 'z_l_fr'."""
        return self._z_l_fr

    @z_l_fr.setter
    def z_l_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_l_fr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z_l_fr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z_l_fr = value

    @builtins.property
    def alpha_r_fl(self):
        """Message field 'alpha_r_fl'."""
        return self._alpha_r_fl

    @alpha_r_fl.setter
    def alpha_r_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_r_fl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha_r_fl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha_r_fl = value

    @builtins.property
    def alpha_b_fl(self):
        """Message field 'alpha_b_fl'."""
        return self._alpha_b_fl

    @alpha_b_fl.setter
    def alpha_b_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_b_fl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha_b_fl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha_b_fl = value

    @builtins.property
    def z_l_fl(self):
        """Message field 'z_l_fl'."""
        return self._z_l_fl

    @z_l_fl.setter
    def z_l_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_l_fl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z_l_fl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z_l_fl = value

    @builtins.property
    def alpha_r_rr(self):
        """Message field 'alpha_r_rr'."""
        return self._alpha_r_rr

    @alpha_r_rr.setter
    def alpha_r_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_r_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha_r_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha_r_rr = value

    @builtins.property
    def alpha_b_rr(self):
        """Message field 'alpha_b_rr'."""
        return self._alpha_b_rr

    @alpha_b_rr.setter
    def alpha_b_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_b_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha_b_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha_b_rr = value

    @builtins.property
    def z_l_rr(self):
        """Message field 'z_l_rr'."""
        return self._z_l_rr

    @z_l_rr.setter
    def z_l_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_l_rr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z_l_rr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z_l_rr = value

    @builtins.property
    def alpha_r_rl(self):
        """Message field 'alpha_r_rl'."""
        return self._alpha_r_rl

    @alpha_r_rl.setter
    def alpha_r_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_r_rl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha_r_rl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha_r_rl = value

    @builtins.property
    def alpha_b_rl(self):
        """Message field 'alpha_b_rl'."""
        return self._alpha_b_rl

    @alpha_b_rl.setter
    def alpha_b_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_b_rl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alpha_b_rl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alpha_b_rl = value

    @builtins.property
    def z_l_rl(self):
        """Message field 'z_l_rl'."""
        return self._z_l_rl

    @z_l_rl.setter
    def z_l_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_l_rl' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'z_l_rl' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._z_l_rl = value

# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_parameters:msg/MotorParameters.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorParameters(type):
    """Metaclass of message 'MotorParameters'."""

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
                'my_parameters.msg.MotorParameters')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_parameters
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_parameters
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_parameters
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_parameters
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_parameters

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorParameters(metaclass=Metaclass_MotorParameters):
    """Message class 'MotorParameters'."""

    __slots__ = [
        '_alpha_a_fr',
        '_alpha_b_fr',
        '_alpha_c_fr',
        '_alpha_a_fl',
        '_alpha_b_fl',
        '_alpha_c_fl',
        '_alpha_a_rr',
        '_alpha_b_rr',
        '_alpha_c_rr',
        '_alpha_a_rl',
        '_alpha_b_rl',
        '_alpha_c_rl',
        '_move',
        '_pre_tight',
    ]

    _fields_and_field_types = {
        'alpha_a_fr': 'float',
        'alpha_b_fr': 'float',
        'alpha_c_fr': 'float',
        'alpha_a_fl': 'float',
        'alpha_b_fl': 'float',
        'alpha_c_fl': 'float',
        'alpha_a_rr': 'float',
        'alpha_b_rr': 'float',
        'alpha_c_rr': 'float',
        'alpha_a_rl': 'float',
        'alpha_b_rl': 'float',
        'alpha_c_rl': 'float',
        'move': 'boolean',
        'pre_tight': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.alpha_a_fr = kwargs.get('alpha_a_fr', float())
        self.alpha_b_fr = kwargs.get('alpha_b_fr', float())
        self.alpha_c_fr = kwargs.get('alpha_c_fr', float())
        self.alpha_a_fl = kwargs.get('alpha_a_fl', float())
        self.alpha_b_fl = kwargs.get('alpha_b_fl', float())
        self.alpha_c_fl = kwargs.get('alpha_c_fl', float())
        self.alpha_a_rr = kwargs.get('alpha_a_rr', float())
        self.alpha_b_rr = kwargs.get('alpha_b_rr', float())
        self.alpha_c_rr = kwargs.get('alpha_c_rr', float())
        self.alpha_a_rl = kwargs.get('alpha_a_rl', float())
        self.alpha_b_rl = kwargs.get('alpha_b_rl', float())
        self.alpha_c_rl = kwargs.get('alpha_c_rl', float())
        self.move = kwargs.get('move', bool())
        self.pre_tight = kwargs.get('pre_tight', bool())

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
        if self.alpha_a_fr != other.alpha_a_fr:
            return False
        if self.alpha_b_fr != other.alpha_b_fr:
            return False
        if self.alpha_c_fr != other.alpha_c_fr:
            return False
        if self.alpha_a_fl != other.alpha_a_fl:
            return False
        if self.alpha_b_fl != other.alpha_b_fl:
            return False
        if self.alpha_c_fl != other.alpha_c_fl:
            return False
        if self.alpha_a_rr != other.alpha_a_rr:
            return False
        if self.alpha_b_rr != other.alpha_b_rr:
            return False
        if self.alpha_c_rr != other.alpha_c_rr:
            return False
        if self.alpha_a_rl != other.alpha_a_rl:
            return False
        if self.alpha_b_rl != other.alpha_b_rl:
            return False
        if self.alpha_c_rl != other.alpha_c_rl:
            return False
        if self.move != other.move:
            return False
        if self.pre_tight != other.pre_tight:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def alpha_a_fr(self):
        """Message field 'alpha_a_fr'."""
        return self._alpha_a_fr

    @alpha_a_fr.setter
    def alpha_a_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_a_fr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha_a_fr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha_a_fr = value

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
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha_b_fr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha_b_fr = value

    @builtins.property
    def alpha_c_fr(self):
        """Message field 'alpha_c_fr'."""
        return self._alpha_c_fr

    @alpha_c_fr.setter
    def alpha_c_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_c_fr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha_c_fr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha_c_fr = value

    @builtins.property
    def alpha_a_fl(self):
        """Message field 'alpha_a_fl'."""
        return self._alpha_a_fl

    @alpha_a_fl.setter
    def alpha_a_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_a_fl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha_a_fl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha_a_fl = value

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
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha_b_fl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha_b_fl = value

    @builtins.property
    def alpha_c_fl(self):
        """Message field 'alpha_c_fl'."""
        return self._alpha_c_fl

    @alpha_c_fl.setter
    def alpha_c_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_c_fl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha_c_fl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha_c_fl = value

    @builtins.property
    def alpha_a_rr(self):
        """Message field 'alpha_a_rr'."""
        return self._alpha_a_rr

    @alpha_a_rr.setter
    def alpha_a_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_a_rr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha_a_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha_a_rr = value

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
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha_b_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha_b_rr = value

    @builtins.property
    def alpha_c_rr(self):
        """Message field 'alpha_c_rr'."""
        return self._alpha_c_rr

    @alpha_c_rr.setter
    def alpha_c_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_c_rr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha_c_rr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha_c_rr = value

    @builtins.property
    def alpha_a_rl(self):
        """Message field 'alpha_a_rl'."""
        return self._alpha_a_rl

    @alpha_a_rl.setter
    def alpha_a_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_a_rl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha_a_rl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha_a_rl = value

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
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha_b_rl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha_b_rl = value

    @builtins.property
    def alpha_c_rl(self):
        """Message field 'alpha_c_rl'."""
        return self._alpha_c_rl

    @alpha_c_rl.setter
    def alpha_c_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alpha_c_rl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alpha_c_rl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alpha_c_rl = value

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

    @builtins.property
    def pre_tight(self):
        """Message field 'pre_tight'."""
        return self._pre_tight

    @pre_tight.setter
    def pre_tight(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pre_tight' field must be of type 'bool'"
        self._pre_tight = value

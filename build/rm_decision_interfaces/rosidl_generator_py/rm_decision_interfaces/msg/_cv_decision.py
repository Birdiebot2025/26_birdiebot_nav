# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rm_decision_interfaces:msg/CvDecision.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CvDecision(type):
    """Metaclass of message 'CvDecision'."""

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
            module = import_type_support('rm_decision_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rm_decision_interfaces.msg.CvDecision')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cv_decision
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cv_decision
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cv_decision
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cv_decision
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cv_decision

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CvDecision(metaclass=Metaclass_CvDecision):
    """Message class 'CvDecision'."""

    __slots__ = [
        '_game_progress',
        '_stage_remain_time',
        '_red_1_robot_hp',
        '_red_2_robot_hp',
        '_red_3_robot_hp',
        '_red_4_robot_hp',
        '_red_7_robot_hp',
        '_red_outpost_hp',
        '_red_base_hp',
        '_blue_1_robot_hp',
        '_blue_2_robot_hp',
        '_blue_3_robot_hp',
        '_blue_4_robot_hp',
        '_blue_7_robot_hp',
        '_blue_outpost_hp',
        '_blue_base_hp',
        '_robot_id',
        '_current_hp',
        '_maximum_hp',
        '_shooter_17_mm_1_barrel_heat',
        '_shooter_17_mm_2_barrel_heat',
        '_projectile_allowance_17mm',
        '_remaining_gold_coin',
        '_center_gain_point',
        '_team_color',
        '_decision_num',
    ]

    _fields_and_field_types = {
        'game_progress': 'uint8',
        'stage_remain_time': 'uint16',
        'red_1_robot_hp': 'uint16',
        'red_2_robot_hp': 'uint16',
        'red_3_robot_hp': 'uint16',
        'red_4_robot_hp': 'uint16',
        'red_7_robot_hp': 'uint16',
        'red_outpost_hp': 'uint16',
        'red_base_hp': 'uint16',
        'blue_1_robot_hp': 'uint16',
        'blue_2_robot_hp': 'uint16',
        'blue_3_robot_hp': 'uint16',
        'blue_4_robot_hp': 'uint16',
        'blue_7_robot_hp': 'uint16',
        'blue_outpost_hp': 'uint16',
        'blue_base_hp': 'uint16',
        'robot_id': 'uint8',
        'current_hp': 'uint16',
        'maximum_hp': 'uint16',
        'shooter_17_mm_1_barrel_heat': 'uint16',
        'shooter_17_mm_2_barrel_heat': 'uint16',
        'projectile_allowance_17mm': 'uint16',
        'remaining_gold_coin': 'uint16',
        'center_gain_point': 'uint32',
        'team_color': 'boolean',
        'decision_num': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.game_progress = kwargs.get('game_progress', int())
        self.stage_remain_time = kwargs.get('stage_remain_time', int())
        self.red_1_robot_hp = kwargs.get('red_1_robot_hp', int())
        self.red_2_robot_hp = kwargs.get('red_2_robot_hp', int())
        self.red_3_robot_hp = kwargs.get('red_3_robot_hp', int())
        self.red_4_robot_hp = kwargs.get('red_4_robot_hp', int())
        self.red_7_robot_hp = kwargs.get('red_7_robot_hp', int())
        self.red_outpost_hp = kwargs.get('red_outpost_hp', int())
        self.red_base_hp = kwargs.get('red_base_hp', int())
        self.blue_1_robot_hp = kwargs.get('blue_1_robot_hp', int())
        self.blue_2_robot_hp = kwargs.get('blue_2_robot_hp', int())
        self.blue_3_robot_hp = kwargs.get('blue_3_robot_hp', int())
        self.blue_4_robot_hp = kwargs.get('blue_4_robot_hp', int())
        self.blue_7_robot_hp = kwargs.get('blue_7_robot_hp', int())
        self.blue_outpost_hp = kwargs.get('blue_outpost_hp', int())
        self.blue_base_hp = kwargs.get('blue_base_hp', int())
        self.robot_id = kwargs.get('robot_id', int())
        self.current_hp = kwargs.get('current_hp', int())
        self.maximum_hp = kwargs.get('maximum_hp', int())
        self.shooter_17_mm_1_barrel_heat = kwargs.get('shooter_17_mm_1_barrel_heat', int())
        self.shooter_17_mm_2_barrel_heat = kwargs.get('shooter_17_mm_2_barrel_heat', int())
        self.projectile_allowance_17mm = kwargs.get('projectile_allowance_17mm', int())
        self.remaining_gold_coin = kwargs.get('remaining_gold_coin', int())
        self.center_gain_point = kwargs.get('center_gain_point', int())
        self.team_color = kwargs.get('team_color', bool())
        self.decision_num = kwargs.get('decision_num', int())

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
        if self.game_progress != other.game_progress:
            return False
        if self.stage_remain_time != other.stage_remain_time:
            return False
        if self.red_1_robot_hp != other.red_1_robot_hp:
            return False
        if self.red_2_robot_hp != other.red_2_robot_hp:
            return False
        if self.red_3_robot_hp != other.red_3_robot_hp:
            return False
        if self.red_4_robot_hp != other.red_4_robot_hp:
            return False
        if self.red_7_robot_hp != other.red_7_robot_hp:
            return False
        if self.red_outpost_hp != other.red_outpost_hp:
            return False
        if self.red_base_hp != other.red_base_hp:
            return False
        if self.blue_1_robot_hp != other.blue_1_robot_hp:
            return False
        if self.blue_2_robot_hp != other.blue_2_robot_hp:
            return False
        if self.blue_3_robot_hp != other.blue_3_robot_hp:
            return False
        if self.blue_4_robot_hp != other.blue_4_robot_hp:
            return False
        if self.blue_7_robot_hp != other.blue_7_robot_hp:
            return False
        if self.blue_outpost_hp != other.blue_outpost_hp:
            return False
        if self.blue_base_hp != other.blue_base_hp:
            return False
        if self.robot_id != other.robot_id:
            return False
        if self.current_hp != other.current_hp:
            return False
        if self.maximum_hp != other.maximum_hp:
            return False
        if self.shooter_17_mm_1_barrel_heat != other.shooter_17_mm_1_barrel_heat:
            return False
        if self.shooter_17_mm_2_barrel_heat != other.shooter_17_mm_2_barrel_heat:
            return False
        if self.projectile_allowance_17mm != other.projectile_allowance_17mm:
            return False
        if self.remaining_gold_coin != other.remaining_gold_coin:
            return False
        if self.center_gain_point != other.center_gain_point:
            return False
        if self.team_color != other.team_color:
            return False
        if self.decision_num != other.decision_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def game_progress(self):
        """Message field 'game_progress'."""
        return self._game_progress

    @game_progress.setter
    def game_progress(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'game_progress' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'game_progress' field must be an unsigned integer in [0, 255]"
        self._game_progress = value

    @builtins.property
    def stage_remain_time(self):
        """Message field 'stage_remain_time'."""
        return self._stage_remain_time

    @stage_remain_time.setter
    def stage_remain_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stage_remain_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'stage_remain_time' field must be an unsigned integer in [0, 65535]"
        self._stage_remain_time = value

    @builtins.property
    def red_1_robot_hp(self):
        """Message field 'red_1_robot_hp'."""
        return self._red_1_robot_hp

    @red_1_robot_hp.setter
    def red_1_robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_1_robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_1_robot_hp' field must be an unsigned integer in [0, 65535]"
        self._red_1_robot_hp = value

    @builtins.property
    def red_2_robot_hp(self):
        """Message field 'red_2_robot_hp'."""
        return self._red_2_robot_hp

    @red_2_robot_hp.setter
    def red_2_robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_2_robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_2_robot_hp' field must be an unsigned integer in [0, 65535]"
        self._red_2_robot_hp = value

    @builtins.property
    def red_3_robot_hp(self):
        """Message field 'red_3_robot_hp'."""
        return self._red_3_robot_hp

    @red_3_robot_hp.setter
    def red_3_robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_3_robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_3_robot_hp' field must be an unsigned integer in [0, 65535]"
        self._red_3_robot_hp = value

    @builtins.property
    def red_4_robot_hp(self):
        """Message field 'red_4_robot_hp'."""
        return self._red_4_robot_hp

    @red_4_robot_hp.setter
    def red_4_robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_4_robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_4_robot_hp' field must be an unsigned integer in [0, 65535]"
        self._red_4_robot_hp = value

    @builtins.property
    def red_7_robot_hp(self):
        """Message field 'red_7_robot_hp'."""
        return self._red_7_robot_hp

    @red_7_robot_hp.setter
    def red_7_robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_7_robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_7_robot_hp' field must be an unsigned integer in [0, 65535]"
        self._red_7_robot_hp = value

    @builtins.property
    def red_outpost_hp(self):
        """Message field 'red_outpost_hp'."""
        return self._red_outpost_hp

    @red_outpost_hp.setter
    def red_outpost_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_outpost_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_outpost_hp' field must be an unsigned integer in [0, 65535]"
        self._red_outpost_hp = value

    @builtins.property
    def red_base_hp(self):
        """Message field 'red_base_hp'."""
        return self._red_base_hp

    @red_base_hp.setter
    def red_base_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_base_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'red_base_hp' field must be an unsigned integer in [0, 65535]"
        self._red_base_hp = value

    @builtins.property
    def blue_1_robot_hp(self):
        """Message field 'blue_1_robot_hp'."""
        return self._blue_1_robot_hp

    @blue_1_robot_hp.setter
    def blue_1_robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_1_robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_1_robot_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_1_robot_hp = value

    @builtins.property
    def blue_2_robot_hp(self):
        """Message field 'blue_2_robot_hp'."""
        return self._blue_2_robot_hp

    @blue_2_robot_hp.setter
    def blue_2_robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_2_robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_2_robot_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_2_robot_hp = value

    @builtins.property
    def blue_3_robot_hp(self):
        """Message field 'blue_3_robot_hp'."""
        return self._blue_3_robot_hp

    @blue_3_robot_hp.setter
    def blue_3_robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_3_robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_3_robot_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_3_robot_hp = value

    @builtins.property
    def blue_4_robot_hp(self):
        """Message field 'blue_4_robot_hp'."""
        return self._blue_4_robot_hp

    @blue_4_robot_hp.setter
    def blue_4_robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_4_robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_4_robot_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_4_robot_hp = value

    @builtins.property
    def blue_7_robot_hp(self):
        """Message field 'blue_7_robot_hp'."""
        return self._blue_7_robot_hp

    @blue_7_robot_hp.setter
    def blue_7_robot_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_7_robot_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_7_robot_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_7_robot_hp = value

    @builtins.property
    def blue_outpost_hp(self):
        """Message field 'blue_outpost_hp'."""
        return self._blue_outpost_hp

    @blue_outpost_hp.setter
    def blue_outpost_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_outpost_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_outpost_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_outpost_hp = value

    @builtins.property
    def blue_base_hp(self):
        """Message field 'blue_base_hp'."""
        return self._blue_base_hp

    @blue_base_hp.setter
    def blue_base_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_base_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'blue_base_hp' field must be an unsigned integer in [0, 65535]"
        self._blue_base_hp = value

    @builtins.property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'robot_id' field must be an unsigned integer in [0, 255]"
        self._robot_id = value

    @builtins.property
    def current_hp(self):
        """Message field 'current_hp'."""
        return self._current_hp

    @current_hp.setter
    def current_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'current_hp' field must be an unsigned integer in [0, 65535]"
        self._current_hp = value

    @builtins.property
    def maximum_hp(self):
        """Message field 'maximum_hp'."""
        return self._maximum_hp

    @maximum_hp.setter
    def maximum_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maximum_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'maximum_hp' field must be an unsigned integer in [0, 65535]"
        self._maximum_hp = value

    @builtins.property
    def shooter_17_mm_1_barrel_heat(self):
        """Message field 'shooter_17_mm_1_barrel_heat'."""
        return self._shooter_17_mm_1_barrel_heat

    @shooter_17_mm_1_barrel_heat.setter
    def shooter_17_mm_1_barrel_heat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_17_mm_1_barrel_heat' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_17_mm_1_barrel_heat' field must be an unsigned integer in [0, 65535]"
        self._shooter_17_mm_1_barrel_heat = value

    @builtins.property
    def shooter_17_mm_2_barrel_heat(self):
        """Message field 'shooter_17_mm_2_barrel_heat'."""
        return self._shooter_17_mm_2_barrel_heat

    @shooter_17_mm_2_barrel_heat.setter
    def shooter_17_mm_2_barrel_heat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'shooter_17_mm_2_barrel_heat' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'shooter_17_mm_2_barrel_heat' field must be an unsigned integer in [0, 65535]"
        self._shooter_17_mm_2_barrel_heat = value

    @builtins.property
    def projectile_allowance_17mm(self):
        """Message field 'projectile_allowance_17mm'."""
        return self._projectile_allowance_17mm

    @projectile_allowance_17mm.setter
    def projectile_allowance_17mm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'projectile_allowance_17mm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'projectile_allowance_17mm' field must be an unsigned integer in [0, 65535]"
        self._projectile_allowance_17mm = value

    @builtins.property
    def remaining_gold_coin(self):
        """Message field 'remaining_gold_coin'."""
        return self._remaining_gold_coin

    @remaining_gold_coin.setter
    def remaining_gold_coin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remaining_gold_coin' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'remaining_gold_coin' field must be an unsigned integer in [0, 65535]"
        self._remaining_gold_coin = value

    @builtins.property
    def center_gain_point(self):
        """Message field 'center_gain_point'."""
        return self._center_gain_point

    @center_gain_point.setter
    def center_gain_point(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'center_gain_point' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'center_gain_point' field must be an unsigned integer in [0, 4294967295]"
        self._center_gain_point = value

    @builtins.property
    def team_color(self):
        """Message field 'team_color'."""
        return self._team_color

    @team_color.setter
    def team_color(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'team_color' field must be of type 'bool'"
        self._team_color = value

    @builtins.property
    def decision_num(self):
        """Message field 'decision_num'."""
        return self._decision_num

    @decision_num.setter
    def decision_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'decision_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'decision_num' field must be an unsigned integer in [0, 255]"
        self._decision_num = value

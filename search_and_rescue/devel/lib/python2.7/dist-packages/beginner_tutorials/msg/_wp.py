# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from beginner_tutorials/wp.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import beginner_tutorials.msg

class wp(genpy.Message):
  _md5sum = "0607f801753c707bef4c2c689caa3fea"
  _type = "beginner_tutorials/wp"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """pose[] way_pt

================================================================================
MSG: beginner_tutorials/pose
float32 x
float32 y
float32 theta
"""
  __slots__ = ['way_pt']
  _slot_types = ['beginner_tutorials/pose[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       way_pt

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(wp, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.way_pt is None:
        self.way_pt = []
    else:
      self.way_pt = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.way_pt)
      buff.write(_struct_I.pack(length))
      for val1 in self.way_pt:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.theta))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.way_pt is None:
        self.way_pt = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.way_pt = []
      for i in range(0, length):
        val1 = beginner_tutorials.msg.pose()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.theta,) = _get_struct_3f().unpack(str[start:end])
        self.way_pt.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.way_pt)
      buff.write(_struct_I.pack(length))
      for val1 in self.way_pt:
        _x = val1
        buff.write(_get_struct_3f().pack(_x.x, _x.y, _x.theta))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.way_pt is None:
        self.way_pt = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.way_pt = []
      for i in range(0, length):
        val1 = beginner_tutorials.msg.pose()
        _x = val1
        start = end
        end += 12
        (_x.x, _x.y, _x.theta,) = _get_struct_3f().unpack(str[start:end])
        self.way_pt.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3f = None
def _get_struct_3f():
    global _struct_3f
    if _struct_3f is None:
        _struct_3f = struct.Struct("<3f")
    return _struct_3f
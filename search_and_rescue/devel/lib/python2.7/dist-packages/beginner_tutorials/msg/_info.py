# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from beginner_tutorials/info.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import beginner_tutorials.msg

class info(genpy.Message):
  _md5sum = "e2b1c54aa4c02c97f9c6f17593bc5f83"
  _type = "beginner_tutorials/info"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """

single array

================================================================================
MSG: beginner_tutorials/single
float32[] height
int32[] align
float32[] area
"""
  __slots__ = ['array']
  _slot_types = ['beginner_tutorials/single']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       array

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(info, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.array is None:
        self.array = beginner_tutorials.msg.single()
    else:
      self.array = beginner_tutorials.msg.single()

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
      length = len(self.array.height)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.array.height))
      length = len(self.array.align)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.array.align))
      length = len(self.array.area)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(struct.pack(pattern, *self.array.area))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.array is None:
        self.array = beginner_tutorials.msg.single()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.array.height = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.array.align = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.array.area = struct.unpack(pattern, str[start:end])
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
      length = len(self.array.height)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.array.height.tostring())
      length = len(self.array.align)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.array.align.tostring())
      length = len(self.array.area)
      buff.write(_struct_I.pack(length))
      pattern = '<%sf'%length
      buff.write(self.array.area.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.array is None:
        self.array = beginner_tutorials.msg.single()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.array.height = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.array.align = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sf'%length
      start = end
      end += struct.calcsize(pattern)
      self.array.area = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
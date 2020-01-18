// Generated by gencpp from file beginner_tutorials/info.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_INFO_H
#define BEGINNER_TUTORIALS_MESSAGE_INFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <beginner_tutorials/single.h>

namespace beginner_tutorials
{
template <class ContainerAllocator>
struct info_
{
  typedef info_<ContainerAllocator> Type;

  info_()
    : array()  {
    }
  info_(const ContainerAllocator& _alloc)
    : array(_alloc)  {
  (void)_alloc;
    }



   typedef  ::beginner_tutorials::single_<ContainerAllocator>  _array_type;
  _array_type array;





  typedef boost::shared_ptr< ::beginner_tutorials::info_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::info_<ContainerAllocator> const> ConstPtr;

}; // struct info_

typedef ::beginner_tutorials::info_<std::allocator<void> > info;

typedef boost::shared_ptr< ::beginner_tutorials::info > infoPtr;
typedef boost::shared_ptr< ::beginner_tutorials::info const> infoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::info_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::info_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'beginner_tutorials': ['/home/mayuresh/search_and_rescue/src/beginner_tutorials/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::info_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::info_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::info_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::info_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::info_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::info_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e2b1c54aa4c02c97f9c6f17593bc5f83";
  }

  static const char* value(const ::beginner_tutorials::info_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe2b1c54aa4c02c97ULL;
  static const uint64_t static_value2 = 0xf9c6f17593bc5f83ULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/info";
  }

  static const char* value(const ::beginner_tutorials::info_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"single array\n"
"\n"
"================================================================================\n"
"MSG: beginner_tutorials/single\n"
"float32[] height\n"
"int32[] align\n"
"float32[] area\n"
;
  }

  static const char* value(const ::beginner_tutorials::info_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::info_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.array);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct info_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::info_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::info_<ContainerAllocator>& v)
  {
    s << indent << "array: ";
    s << std::endl;
    Printer< ::beginner_tutorials::single_<ContainerAllocator> >::stream(s, indent + "  ", v.array);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_INFO_H

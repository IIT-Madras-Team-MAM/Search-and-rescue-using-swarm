// Generated by gencpp from file beginner_tutorials/dist2.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_DIST2_H
#define BEGINNER_TUTORIALS_MESSAGE_DIST2_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <beginner_tutorials/dist1.h>

namespace beginner_tutorials
{
template <class ContainerAllocator>
struct dist2_
{
  typedef dist2_<ContainerAllocator> Type;

  dist2_()
    : data()  {
    }
  dist2_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::beginner_tutorials::dist1_<ContainerAllocator>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::beginner_tutorials::dist2_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::dist2_<ContainerAllocator> const> ConstPtr;

}; // struct dist2_

typedef ::beginner_tutorials::dist2_<std::allocator<void> > dist2;

typedef boost::shared_ptr< ::beginner_tutorials::dist2 > dist2Ptr;
typedef boost::shared_ptr< ::beginner_tutorials::dist2 const> dist2ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::dist2_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::dist2_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace beginner_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'beginner_tutorials': ['/home/mayuresh/search_and_rescue/src/beginner_tutorials/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::dist2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::dist2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::dist2_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::dist2_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::dist2_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::dist2_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::dist2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5b473841e30c98b858bbebd2aca970b8";
  }

  static const char* value(const ::beginner_tutorials::dist2_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5b473841e30c98b8ULL;
  static const uint64_t static_value2 = 0x58bbebd2aca970b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::dist2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/dist2";
  }

  static const char* value(const ::beginner_tutorials::dist2_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::dist2_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dist1 data\n"
"\n"
"================================================================================\n"
"MSG: beginner_tutorials/dist1\n"
"float32 distance\n"
"int32 dir\n"
;
  }

  static const char* value(const ::beginner_tutorials::dist2_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::dist2_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct dist2_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::dist2_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::dist2_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    s << std::endl;
    Printer< ::beginner_tutorials::dist1_<ContainerAllocator> >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_DIST2_H

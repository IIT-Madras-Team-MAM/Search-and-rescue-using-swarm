// Generated by gencpp from file beginner_tutorials/wp.msg
// DO NOT EDIT!


#ifndef BEGINNER_TUTORIALS_MESSAGE_WP_H
#define BEGINNER_TUTORIALS_MESSAGE_WP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <beginner_tutorials/pose.h>

namespace beginner_tutorials
{
template <class ContainerAllocator>
struct wp_
{
  typedef wp_<ContainerAllocator> Type;

  wp_()
    : way_pt()  {
    }
  wp_(const ContainerAllocator& _alloc)
    : way_pt(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::beginner_tutorials::pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::beginner_tutorials::pose_<ContainerAllocator> >::other >  _way_pt_type;
  _way_pt_type way_pt;





  typedef boost::shared_ptr< ::beginner_tutorials::wp_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::beginner_tutorials::wp_<ContainerAllocator> const> ConstPtr;

}; // struct wp_

typedef ::beginner_tutorials::wp_<std::allocator<void> > wp;

typedef boost::shared_ptr< ::beginner_tutorials::wp > wpPtr;
typedef boost::shared_ptr< ::beginner_tutorials::wp const> wpConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::beginner_tutorials::wp_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::beginner_tutorials::wp_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::beginner_tutorials::wp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::beginner_tutorials::wp_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::wp_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::beginner_tutorials::wp_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::wp_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::beginner_tutorials::wp_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::beginner_tutorials::wp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0607f801753c707bef4c2c689caa3fea";
  }

  static const char* value(const ::beginner_tutorials::wp_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0607f801753c707bULL;
  static const uint64_t static_value2 = 0xef4c2c689caa3feaULL;
};

template<class ContainerAllocator>
struct DataType< ::beginner_tutorials::wp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beginner_tutorials/wp";
  }

  static const char* value(const ::beginner_tutorials::wp_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::beginner_tutorials::wp_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pose[] way_pt\n"
"\n"
"================================================================================\n"
"MSG: beginner_tutorials/pose\n"
"float32 x\n"
"float32 y\n"
"float32 theta\n"
;
  }

  static const char* value(const ::beginner_tutorials::wp_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::beginner_tutorials::wp_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.way_pt);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct wp_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::beginner_tutorials::wp_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::beginner_tutorials::wp_<ContainerAllocator>& v)
  {
    s << indent << "way_pt[]" << std::endl;
    for (size_t i = 0; i < v.way_pt.size(); ++i)
    {
      s << indent << "  way_pt[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::beginner_tutorials::pose_<ContainerAllocator> >::stream(s, indent + "    ", v.way_pt[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BEGINNER_TUTORIALS_MESSAGE_WP_H

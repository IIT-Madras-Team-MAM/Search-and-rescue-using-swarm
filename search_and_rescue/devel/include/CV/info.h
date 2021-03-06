// Generated by gencpp from file CV/info.msg
// DO NOT EDIT!


#ifndef CV_MESSAGE_INFO_H
#define CV_MESSAGE_INFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <CV/single.h>

namespace CV
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



   typedef  ::CV::single_<ContainerAllocator>  _array_type;
  _array_type array;





  typedef boost::shared_ptr< ::CV::info_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::CV::info_<ContainerAllocator> const> ConstPtr;

}; // struct info_

typedef ::CV::info_<std::allocator<void> > info;

typedef boost::shared_ptr< ::CV::info > infoPtr;
typedef boost::shared_ptr< ::CV::info const> infoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::CV::info_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::CV::info_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace CV

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'CV': ['/home/mayuresh/search_and_rescue/src/CV/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::CV::info_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::CV::info_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::CV::info_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::CV::info_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::CV::info_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::CV::info_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::CV::info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e2b1c54aa4c02c97f9c6f17593bc5f83";
  }

  static const char* value(const ::CV::info_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe2b1c54aa4c02c97ULL;
  static const uint64_t static_value2 = 0xf9c6f17593bc5f83ULL;
};

template<class ContainerAllocator>
struct DataType< ::CV::info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "CV/info";
  }

  static const char* value(const ::CV::info_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::CV::info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "single array\n"
"\n"
"================================================================================\n"
"MSG: CV/single\n"
"float32[] height\n"
"int32[] align\n"
"float32[] area\n"
;
  }

  static const char* value(const ::CV::info_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::CV::info_<ContainerAllocator> >
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
struct Printer< ::CV::info_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::CV::info_<ContainerAllocator>& v)
  {
    s << indent << "array: ";
    s << std::endl;
    Printer< ::CV::single_<ContainerAllocator> >::stream(s, indent + "  ", v.array);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CV_MESSAGE_INFO_H

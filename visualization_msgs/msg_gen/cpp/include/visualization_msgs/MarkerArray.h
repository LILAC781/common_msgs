/* Auto-generated by genmsg_cpp for file /wg/stor2a/dgossow/ros_sandbox/visualization_msgs/msg/MarkerArray.msg */
#ifndef VISUALIZATION_MSGS_MESSAGE_MARKERARRAY_H
#define VISUALIZATION_MSGS_MESSAGE_MARKERARRAY_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "visualization_msgs/Marker.h"

namespace visualization_msgs
{
template <class ContainerAllocator>
struct MarkerArray_ : public ros::Message
{
  typedef MarkerArray_<ContainerAllocator> Type;

  MarkerArray_()
  : markers()
  {
  }

  MarkerArray_(const ContainerAllocator& _alloc)
  : markers(_alloc)
  {
  }

  typedef std::vector< ::visualization_msgs::Marker_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visualization_msgs::Marker_<ContainerAllocator> >::other >  _markers_type;
  std::vector< ::visualization_msgs::Marker_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visualization_msgs::Marker_<ContainerAllocator> >::other >  markers;


  ROS_DEPRECATED uint32_t get_markers_size() const { return (uint32_t)markers.size(); }
  ROS_DEPRECATED void set_markers_size(uint32_t size) { markers.resize((size_t)size); }
  ROS_DEPRECATED void get_markers_vec(std::vector< ::visualization_msgs::Marker_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visualization_msgs::Marker_<ContainerAllocator> >::other > & vec) const { vec = this->markers; }
  ROS_DEPRECATED void set_markers_vec(const std::vector< ::visualization_msgs::Marker_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visualization_msgs::Marker_<ContainerAllocator> >::other > & vec) { this->markers = vec; }
private:
  static const char* __s_getDataType_() { return "visualization_msgs/MarkerArray"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "f10fe193d6fac1bf68fad5d31da421a7"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Marker[] markers\n\
\n\
================================================================================\n\
MSG: visualization_msgs/Marker\n\
# See http://www.ros.org/wiki/rviz/DisplayTypes/Marker and http://www.ros.org/wiki/rviz/Tutorials/Markers%3A%20Basic%20Shapes for more information on using this message with rviz\n\
\n\
byte ARROW=0\n\
byte CUBE=1\n\
byte SPHERE=2\n\
byte CYLINDER=3\n\
byte LINE_STRIP=4\n\
byte LINE_LIST=5\n\
byte CUBE_LIST=6\n\
byte SPHERE_LIST=7\n\
byte POINTS=8\n\
byte TEXT_VIEW_FACING=9\n\
byte MESH_RESOURCE=10\n\
byte TRIANGLE_LIST=11\n\
\n\
byte ADD=0\n\
byte MODIFY=0\n\
byte DELETE=2\n\
\n\
Header header                        # header for time/frame information\n\
string ns                            # Namespace to place this object in... used in conjunction with id to create a unique name for the object\n\
int32 id 		                         # object ID useful in conjunction with the namespace for manipulating and deleting the object later\n\
int32 type 		                       # Type of object\n\
int32 action 	                       # 0 add/modify an object, 1 (deprecated), 2 deletes an object\n\
geometry_msgs/Pose pose                 # Pose of the object\n\
geometry_msgs/Vector3 scale             # Scale of the object 1,1,1 means default (usually 1 meter square)\n\
std_msgs/ColorRGBA color             # Color [0.0-1.0]\n\
duration lifetime                    # How long the object should last before being automatically deleted.  0 means forever\n\
bool frame_locked                    # If this marker should be frame-locked, i.e. retransformed into its frame every timestep\n\
\n\
#Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...)\n\
geometry_msgs/Point[] points\n\
#Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...)\n\
#number of colors must either be 0 or equal to the number of points\n\
#NOTE: alpha is not yet used\n\
std_msgs/ColorRGBA[] colors\n\
\n\
# NOTE: only used for text markers\n\
string text\n\
\n\
# NOTE: only used for MESH_RESOURCE markers\n\
string mesh_resource\n\
bool mesh_use_embedded_materials\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, markers);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, markers);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(markers);
    return size;
  }

  typedef boost::shared_ptr< ::visualization_msgs::MarkerArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::visualization_msgs::MarkerArray_<ContainerAllocator>  const> ConstPtr;
}; // struct MarkerArray
typedef  ::visualization_msgs::MarkerArray_<std::allocator<void> > MarkerArray;

typedef boost::shared_ptr< ::visualization_msgs::MarkerArray> MarkerArrayPtr;
typedef boost::shared_ptr< ::visualization_msgs::MarkerArray const> MarkerArrayConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::visualization_msgs::MarkerArray_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::visualization_msgs::MarkerArray_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace visualization_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::visualization_msgs::MarkerArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f10fe193d6fac1bf68fad5d31da421a7";
  }

  static const char* value(const  ::visualization_msgs::MarkerArray_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf10fe193d6fac1bfULL;
  static const uint64_t static_value2 = 0x68fad5d31da421a7ULL;
};

template<class ContainerAllocator>
struct DataType< ::visualization_msgs::MarkerArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "visualization_msgs/MarkerArray";
  }

  static const char* value(const  ::visualization_msgs::MarkerArray_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::visualization_msgs::MarkerArray_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Marker[] markers\n\
\n\
================================================================================\n\
MSG: visualization_msgs/Marker\n\
# See http://www.ros.org/wiki/rviz/DisplayTypes/Marker and http://www.ros.org/wiki/rviz/Tutorials/Markers%3A%20Basic%20Shapes for more information on using this message with rviz\n\
\n\
byte ARROW=0\n\
byte CUBE=1\n\
byte SPHERE=2\n\
byte CYLINDER=3\n\
byte LINE_STRIP=4\n\
byte LINE_LIST=5\n\
byte CUBE_LIST=6\n\
byte SPHERE_LIST=7\n\
byte POINTS=8\n\
byte TEXT_VIEW_FACING=9\n\
byte MESH_RESOURCE=10\n\
byte TRIANGLE_LIST=11\n\
\n\
byte ADD=0\n\
byte MODIFY=0\n\
byte DELETE=2\n\
\n\
Header header                        # header for time/frame information\n\
string ns                            # Namespace to place this object in... used in conjunction with id to create a unique name for the object\n\
int32 id 		                         # object ID useful in conjunction with the namespace for manipulating and deleting the object later\n\
int32 type 		                       # Type of object\n\
int32 action 	                       # 0 add/modify an object, 1 (deprecated), 2 deletes an object\n\
geometry_msgs/Pose pose                 # Pose of the object\n\
geometry_msgs/Vector3 scale             # Scale of the object 1,1,1 means default (usually 1 meter square)\n\
std_msgs/ColorRGBA color             # Color [0.0-1.0]\n\
duration lifetime                    # How long the object should last before being automatically deleted.  0 means forever\n\
bool frame_locked                    # If this marker should be frame-locked, i.e. retransformed into its frame every timestep\n\
\n\
#Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...)\n\
geometry_msgs/Point[] points\n\
#Only used if the type specified has some use for them (eg. POINTS, LINE_STRIP, ...)\n\
#number of colors must either be 0 or equal to the number of points\n\
#NOTE: alpha is not yet used\n\
std_msgs/ColorRGBA[] colors\n\
\n\
# NOTE: only used for text markers\n\
string text\n\
\n\
# NOTE: only used for MESH_RESOURCE markers\n\
string mesh_resource\n\
bool mesh_use_embedded_materials\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: std_msgs/ColorRGBA\n\
float32 r\n\
float32 g\n\
float32 b\n\
float32 a\n\
\n\
";
  }

  static const char* value(const  ::visualization_msgs::MarkerArray_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::visualization_msgs::MarkerArray_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.markers);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MarkerArray_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::visualization_msgs::MarkerArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::visualization_msgs::MarkerArray_<ContainerAllocator> & v) 
  {
    s << indent << "markers[]" << std::endl;
    for (size_t i = 0; i < v.markers.size(); ++i)
    {
      s << indent << "  markers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::visualization_msgs::Marker_<ContainerAllocator> >::stream(s, indent + "    ", v.markers[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // VISUALIZATION_MSGS_MESSAGE_MARKERARRAY_H


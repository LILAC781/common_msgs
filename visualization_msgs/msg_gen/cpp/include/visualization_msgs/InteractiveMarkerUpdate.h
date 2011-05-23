/* Auto-generated by genmsg_cpp for file /wg/stor2a/dgossow/ros_sandbox/visualization_msgs/msg/InteractiveMarkerUpdate.msg */
#ifndef VISUALIZATION_MSGS_MESSAGE_INTERACTIVEMARKERUPDATE_H
#define VISUALIZATION_MSGS_MESSAGE_INTERACTIVEMARKERUPDATE_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"

#include "visualization_msgs/InteractiveMarker.h"
#include "visualization_msgs/InteractiveMarkerPose.h"

namespace visualization_msgs
{
template <class ContainerAllocator>
struct InteractiveMarkerUpdate_ : public ros::Message
{
  typedef InteractiveMarkerUpdate_<ContainerAllocator> Type;

  InteractiveMarkerUpdate_()
  : markers()
  , poses()
  {
  }

  InteractiveMarkerUpdate_(const ContainerAllocator& _alloc)
  : markers(_alloc)
  , poses(_alloc)
  {
  }

  typedef std::vector< ::visualization_msgs::InteractiveMarker_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visualization_msgs::InteractiveMarker_<ContainerAllocator> >::other >  _markers_type;
  std::vector< ::visualization_msgs::InteractiveMarker_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visualization_msgs::InteractiveMarker_<ContainerAllocator> >::other >  markers;

  typedef std::vector< ::visualization_msgs::InteractiveMarkerPose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visualization_msgs::InteractiveMarkerPose_<ContainerAllocator> >::other >  _poses_type;
  std::vector< ::visualization_msgs::InteractiveMarkerPose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visualization_msgs::InteractiveMarkerPose_<ContainerAllocator> >::other >  poses;


  ROS_DEPRECATED uint32_t get_markers_size() const { return (uint32_t)markers.size(); }
  ROS_DEPRECATED void set_markers_size(uint32_t size) { markers.resize((size_t)size); }
  ROS_DEPRECATED void get_markers_vec(std::vector< ::visualization_msgs::InteractiveMarker_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visualization_msgs::InteractiveMarker_<ContainerAllocator> >::other > & vec) const { vec = this->markers; }
  ROS_DEPRECATED void set_markers_vec(const std::vector< ::visualization_msgs::InteractiveMarker_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visualization_msgs::InteractiveMarker_<ContainerAllocator> >::other > & vec) { this->markers = vec; }
  ROS_DEPRECATED uint32_t get_poses_size() const { return (uint32_t)poses.size(); }
  ROS_DEPRECATED void set_poses_size(uint32_t size) { poses.resize((size_t)size); }
  ROS_DEPRECATED void get_poses_vec(std::vector< ::visualization_msgs::InteractiveMarkerPose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visualization_msgs::InteractiveMarkerPose_<ContainerAllocator> >::other > & vec) const { vec = this->poses; }
  ROS_DEPRECATED void set_poses_vec(const std::vector< ::visualization_msgs::InteractiveMarkerPose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::visualization_msgs::InteractiveMarkerPose_<ContainerAllocator> >::other > & vec) { this->poses = vec; }
private:
  static const char* __s_getDataType_() { return "visualization_msgs/InteractiveMarkerUpdate"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "45d278ed8c428219b5fae4da46c9f9ba"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "InteractiveMarker[] markers\n\
InteractiveMarkerPose[] poses\n\
\n\
================================================================================\n\
MSG: visualization_msgs/InteractiveMarker\n\
#Time/frame info\n\
#The frame_id of this pose is used as 'parent frame' for the controls\n\
#which have a fixed orientation.\n\
Header header\n\
\n\
# Name of this marker. Only necessary if you are sending multiple markers.\n\
# See InteractiveMarkerArray for details.\n\
string name\n\
\n\
# Initial pose of the interactive marker. Defines the pivot point for rotations.\n\
geometry_msgs/Pose pose\n\
\n\
# Scale to be used for default controls (default=1).\n\
float32 scale\n\
\n\
# Menu associated with this marker (max. depth is 2).\n\
Menu[] menu\n\
\n\
# List of controls displayed for this marker.\n\
# To delete an interactive marker, send one without controls.\n\
InteractiveMarkerControl[] controls\n\
\n\
# If this marker should be frame-locked, i.e. retransformed \n\
# into its parent frame every timestep.\n\
bool frame_locked\n\
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
MSG: visualization_msgs/Menu\n\
# menu / entry title\n\
string title\n\
\n\
# entries for this menu\n\
# if empty, this menu represents a simple menu entry itself\n\
string[] entries\n\
\n\
================================================================================\n\
MSG: visualization_msgs/InteractiveMarkerControl\n\
# represents a control that is to be displayed together with an interactive marker\n\
\n\
# Identifying string for this control.\n\
# You need to assign a unique value to this to receive feedback from the GUI\n\
# on what actions the user performs on this control (e.g. a button click).\n\
string name\n\
\n\
# Defines the local coordinate frame (relative to the pose of the parent\n\
# interactive marker) in which is being rotated and translated.\n\
# Note: Does not influence the pose of the contained markers.\n\
geometry_msgs/Quaternion orientation\n\
\n\
# Interaction mode for this control\n\
# \n\
# NONE: this control is only meant for visualization, context menu is deactivated\n\
# MENU: like none, but right-click menu is active\n\
# BUTTON: element can be left-clicked\n\
# MOVE_AXIS: Translate along local x-axis\n\
# MOVE_PLANE: Translate in local y-z plane\n\
# ROTATE_AXIS: Rotate around local x-axis\n\
# MOVE_ROTATE: Combines MOVE_PLANE and ROTATE_AXIS\n\
byte NONE = 0 \n\
byte MENU = 1\n\
byte BUTTON = 2\n\
byte MOVE_AXIS = 3 \n\
byte MOVE_PLANE = 4\n\
byte ROTATE_AXIS = 5\n\
byte MOVE_ROTATE = 6\n\
\n\
byte interaction_mode\n\
\n\
# how should the orientation be updated?\n\
# INHERIT: follow orientation of interactive marker\n\
# FIXED: keep orientation fixed at initial state\n\
# VIEW_FACING: align y-z plane with screen (x: forward, y:left, z:up)\n\
byte INHERIT = 0 \n\
byte FIXED = 1\n\
byte VIEW_FACING = 2 \n\
\n\
byte orientation_mode\n\
\n\
# if true, the contained markers will also be visible\n\
# when the gui is not in interactive mode\n\
bool always_visible\n\
\n\
# Markers to be displayed as custom visual representation.\n\
# Leave this empty to use the default control handles.\n\
#\n\
# Note: \n\
# - The markers can be defined in an arbitrary coordinate frame,\n\
#   but will be transformed into the local frame of the interactive marker.\n\
# - If the header of a marker is empty, its pose will be interpreted as \n\
#   relative to the pose of the parent interactive marker.\n\
Marker[] markers\n\
\n\
# Short description (<80 characters) of what this control does,\n\
# e.g. \"Move the robot\". If no tool tip is given, a generic description\n\
# based on the interaction mode is assigned.\n\
string tool_tip\n\
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
================================================================================\n\
MSG: visualization_msgs/InteractiveMarkerPose\n\
string name\n\
geometry_msgs/Pose pose\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, markers);
    ros::serialization::serialize(stream, poses);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, markers);
    ros::serialization::deserialize(stream, poses);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(markers);
    size += ros::serialization::serializationLength(poses);
    return size;
  }

  typedef boost::shared_ptr< ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator>  const> ConstPtr;
}; // struct InteractiveMarkerUpdate
typedef  ::visualization_msgs::InteractiveMarkerUpdate_<std::allocator<void> > InteractiveMarkerUpdate;

typedef boost::shared_ptr< ::visualization_msgs::InteractiveMarkerUpdate> InteractiveMarkerUpdatePtr;
typedef boost::shared_ptr< ::visualization_msgs::InteractiveMarkerUpdate const> InteractiveMarkerUpdateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace visualization_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator> > {
  static const char* value() 
  {
    return "45d278ed8c428219b5fae4da46c9f9ba";
  }

  static const char* value(const  ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x45d278ed8c428219ULL;
  static const uint64_t static_value2 = 0xb5fae4da46c9f9baULL;
};

template<class ContainerAllocator>
struct DataType< ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator> > {
  static const char* value() 
  {
    return "visualization_msgs/InteractiveMarkerUpdate";
  }

  static const char* value(const  ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator> > {
  static const char* value() 
  {
    return "InteractiveMarker[] markers\n\
InteractiveMarkerPose[] poses\n\
\n\
================================================================================\n\
MSG: visualization_msgs/InteractiveMarker\n\
#Time/frame info\n\
#The frame_id of this pose is used as 'parent frame' for the controls\n\
#which have a fixed orientation.\n\
Header header\n\
\n\
# Name of this marker. Only necessary if you are sending multiple markers.\n\
# See InteractiveMarkerArray for details.\n\
string name\n\
\n\
# Initial pose of the interactive marker. Defines the pivot point for rotations.\n\
geometry_msgs/Pose pose\n\
\n\
# Scale to be used for default controls (default=1).\n\
float32 scale\n\
\n\
# Menu associated with this marker (max. depth is 2).\n\
Menu[] menu\n\
\n\
# List of controls displayed for this marker.\n\
# To delete an interactive marker, send one without controls.\n\
InteractiveMarkerControl[] controls\n\
\n\
# If this marker should be frame-locked, i.e. retransformed \n\
# into its parent frame every timestep.\n\
bool frame_locked\n\
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
MSG: visualization_msgs/Menu\n\
# menu / entry title\n\
string title\n\
\n\
# entries for this menu\n\
# if empty, this menu represents a simple menu entry itself\n\
string[] entries\n\
\n\
================================================================================\n\
MSG: visualization_msgs/InteractiveMarkerControl\n\
# represents a control that is to be displayed together with an interactive marker\n\
\n\
# Identifying string for this control.\n\
# You need to assign a unique value to this to receive feedback from the GUI\n\
# on what actions the user performs on this control (e.g. a button click).\n\
string name\n\
\n\
# Defines the local coordinate frame (relative to the pose of the parent\n\
# interactive marker) in which is being rotated and translated.\n\
# Note: Does not influence the pose of the contained markers.\n\
geometry_msgs/Quaternion orientation\n\
\n\
# Interaction mode for this control\n\
# \n\
# NONE: this control is only meant for visualization, context menu is deactivated\n\
# MENU: like none, but right-click menu is active\n\
# BUTTON: element can be left-clicked\n\
# MOVE_AXIS: Translate along local x-axis\n\
# MOVE_PLANE: Translate in local y-z plane\n\
# ROTATE_AXIS: Rotate around local x-axis\n\
# MOVE_ROTATE: Combines MOVE_PLANE and ROTATE_AXIS\n\
byte NONE = 0 \n\
byte MENU = 1\n\
byte BUTTON = 2\n\
byte MOVE_AXIS = 3 \n\
byte MOVE_PLANE = 4\n\
byte ROTATE_AXIS = 5\n\
byte MOVE_ROTATE = 6\n\
\n\
byte interaction_mode\n\
\n\
# how should the orientation be updated?\n\
# INHERIT: follow orientation of interactive marker\n\
# FIXED: keep orientation fixed at initial state\n\
# VIEW_FACING: align y-z plane with screen (x: forward, y:left, z:up)\n\
byte INHERIT = 0 \n\
byte FIXED = 1\n\
byte VIEW_FACING = 2 \n\
\n\
byte orientation_mode\n\
\n\
# if true, the contained markers will also be visible\n\
# when the gui is not in interactive mode\n\
bool always_visible\n\
\n\
# Markers to be displayed as custom visual representation.\n\
# Leave this empty to use the default control handles.\n\
#\n\
# Note: \n\
# - The markers can be defined in an arbitrary coordinate frame,\n\
#   but will be transformed into the local frame of the interactive marker.\n\
# - If the header of a marker is empty, its pose will be interpreted as \n\
#   relative to the pose of the parent interactive marker.\n\
Marker[] markers\n\
\n\
# Short description (<80 characters) of what this control does,\n\
# e.g. \"Move the robot\". If no tool tip is given, a generic description\n\
# based on the interaction mode is assigned.\n\
string tool_tip\n\
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
================================================================================\n\
MSG: visualization_msgs/InteractiveMarkerPose\n\
string name\n\
geometry_msgs/Pose pose\n\
\n\
";
  }

  static const char* value(const  ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.markers);
    stream.next(m.poses);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct InteractiveMarkerUpdate_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::visualization_msgs::InteractiveMarkerUpdate_<ContainerAllocator> & v) 
  {
    s << indent << "markers[]" << std::endl;
    for (size_t i = 0; i < v.markers.size(); ++i)
    {
      s << indent << "  markers[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::visualization_msgs::InteractiveMarker_<ContainerAllocator> >::stream(s, indent + "    ", v.markers[i]);
    }
    s << indent << "poses[]" << std::endl;
    for (size_t i = 0; i < v.poses.size(); ++i)
    {
      s << indent << "  poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::visualization_msgs::InteractiveMarkerPose_<ContainerAllocator> >::stream(s, indent + "    ", v.poses[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // VISUALIZATION_MSGS_MESSAGE_INTERACTIVEMARKERUPDATE_H


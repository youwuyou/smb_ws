#include <ekf_localization/EKF_Localization.hpp>


namespace ekf_localization {


// Constructor
EKF_Localization::EKF_Localization(ros::NodeHandle& nodeHandle) :
  nodeHandle_(nodeHandle)
{
///////////////////////////////////////
  // set parameters
  if (!nodeHandle_.getParam("/smb_highlevel_controller/topic", topic))
      ROS_ERROR("Could not find topic parameter!");

  if (!nodeHandle_.getParam("/smb_highlevel_controller/queue_size", queue_size))
      ROS_ERROR("Could not find queue_size parameter!");

  if (!nodeHandle_.getParam("/smb_highlevel_controller/pid_p", pid_p))
      ROS_ERROR("Could not find pid_p parameter!");


///////////////////////////////////////
  // publishing
  cmd_vel_publisher = nodeHandle_.advertise<geometry_msgs::Twist>
                                  ("/cmd_vel", 1);

  marker_publisher = nodeHandle_.advertise<visualization_msgs::Marker>
                                  ("/marker", 0);


  // subscribing
  scan_subscriber =
        nodeHandle_.subscribe(topic, queue_size, &EKF_Localization::scanCallback, this);

  pointcloud_subscriber =
        nodeHandle_.subscribe("/rslidar", 1, &EKF_Localization::pointcloudCallback, this);

  // sleep for a few seconds
  // ros::Duration(10).sleep();
}


// Destructor
EKF_Localization::~EKF_Localization(){
      // no destructor needed since no dynamic memory allocation happened
}

void EKF_Localization::pointcloudCallback(const sensor_msgs::PointCloud2& msg){
    ROS_INFO_STREAM("3D pointcloud size: [" << msg.data.size() << "]");
}



void EKF_Localization::scanCallback(const sensor_msgs::LaserScan::ConstPtr& msg){

    min = msg->range_max;
    int index;
    int size = msg->ranges.size();

    for(unsigned i = 0; i < size; ++i){
          if(msg->ranges[i] < min){
              min = msg-> ranges[i];
              index = i;
          }
    }


    angle =(msg->angle_increment) * index + msg->angle_min;

    // create data in format of the geometry_msgs::Twist
    // - member variable: cmd_vel_publisher => publisher initialized in constructor
    // - member variable: cmd_vel_msg => yet empty message variable
    cmd_vel_msg.linear.x =  pid_p * min / 10 ; // some value for the speed
    cmd_vel_msg.angular.z = pid_p * angle;


    cmd_vel_publisher.publish(cmd_vel_msg);
    // publish with help of the publishMarker function
    publishMarker(min * cos(angle), min * sin(angle), 0);


    // float32 range_min is found using the standard algorithm
    // print the minimal distance in range
		ROS_INFO_STREAM("The smallest distance in the vector ranges is: [" << min << "]");

    // print the speed in each direction
    ROS_INFO_STREAM("LinX: [" << cmd_vel_msg.linear.x << "]");
    ROS_INFO_STREAM("LinY: [" << cmd_vel_msg.linear.y << "]");
    ROS_INFO_STREAM("AngZ: [" << cmd_vel_msg.angular.z << "]");
  }


void EKF_Localization::publishMarker(int x, int y, int z){
  visualization_msgs::Marker marker;
  marker.header.frame_id = "base_link";
  marker.header.stamp = ros::Time();

  marker.ns = "marker";

  marker.type = visualization_msgs::Marker::CYLINDER;
  marker.action = visualization_msgs::Marker::ADD;

  marker.pose.position.x = x;
  marker.pose.position.y = y;
  marker.pose.position.z = z;

  marker.pose.orientation.x = 0;
  marker.pose.orientation.y = 0;
  marker.pose.orientation.z = 0;
  marker.pose.orientation.w = 1.0;

  marker.scale.x = 1;
  marker.scale.y = 1;
  marker.scale.z = 1;

  marker.color.a = 1.0;
  marker.color.r = 0.0;
  marker.color.g = 1.0;
  marker.color.b = 0.0;

  marker_publisher.publish(marker);

}



} /* namespace */

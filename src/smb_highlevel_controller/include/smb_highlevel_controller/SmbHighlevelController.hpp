#pragma once

#include <ros/ros.h>
#include <std_msgs/String.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/PointCloud2.h>
#include <geometry_msgs/Twist.h> // for the motion control
#include <visualization_msgs/Marker.h> // for the marker visualization
#include <string.h>
#include <math.h>
#include <std_msgs/Bool.h>
#include <std_srvs/SetBool.h>


namespace smb_highlevel_controller {

/*!
 * Class containing the Husky Highlevel Controller
 */
class SmbHighlevelController {
public:
	/*!
	 * Constructor.
	 */
	SmbHighlevelController(ros::NodeHandle& nodeHandle);

	/*!
	 * Destructor.
	 */
	virtual ~SmbHighlevelController();



private:
	ros::NodeHandle nodeHandle_;

	std::string topic;
	std::string service;
	int queue_size;
	float pid_p;
	double min;
	double angle;


	ros::Subscriber scan_subscriber;
	ros::Subscriber pointcloud_subscriber;
	ros::Publisher cmd_vel_publisher;
	ros::Publisher marker_publisher;
	geometry_msgs::Twist cmd_vel_msg; // for the motion control

	ros::ServiceServer server;



	/*
	callback method
	- outputs the smallest distance measurement from the vector ranges
	in the message of the laser scanner to the terminal
	*/

/////
	bool stop_(std_srvs::SetBool::Request &request,
	            std_srvs::SetBool::Response &response);
	bool boolean;
////


	void scanCallback(const sensor_msgs::LaserScan::ConstPtr&);
	void pointcloudCallback(const sensor_msgs::PointCloud2&);
	void publishMarker(int, int, int);

};

} /* namespace */

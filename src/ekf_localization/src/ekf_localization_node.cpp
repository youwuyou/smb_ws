#include <ros/ros.h>
#include "ekf_localization/EKF_Localization.hpp"

int main(int argc, char** argv) {
  ros::init(argc, argv, "ekf_localization");
  ros::NodeHandle nodeHandle("~");  // Private node handle
                                    // the access point for communications with
                                    // the ROS system
  // ros::Rate rate(10);

  // 	calling member func to initialize the
  //  private member variable ros::NodeHandle nodeHandle_;
  ekf_localization::EKF_Localization EKF_Localization(nodeHandle);


  ros::spin();
  return 0;
}

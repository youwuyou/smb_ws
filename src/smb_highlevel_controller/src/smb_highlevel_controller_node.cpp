#include <ros/ros.h>
#include "smb_highlevel_controller/SmbHighlevelController.hpp"

int main(int argc, char** argv) {
  ros::init(argc, argv, "smb_highlevel_controller");
  ros::NodeHandle nodeHandle("~");  // Private node handle
                                    // the access point for communications with
                                    // the ROS system
  // ros::Rate rate(10);

  // 	calling member func to initialize the
  //  private member variable ros::NodeHandle nodeHandle_;
  smb_highlevel_controller::SmbHighlevelController smbHighlevelController(nodeHandle);


  ros::spin();
  return 0;
}

# 151-0662-00L - Programming for Robotics - Introduction to ROS
[:link:](https://rsl.ethz.ch/education-students/lectures/ros.html)


[:video_camera:](https://www.youtube.com/watch?v=0BxVPCInS3M&list=PLE-BQwvVGf8HOvwXPgtDfWoxd4Cc6ghiP)


:information_source: An introductory class to ROS at ETH Zürich

### Important
i).   Build the packages using `catkin build`
ii).  Each time sourcing using `source devel/setup.bash`
iii). Launch a node using `roslaunch <package> <launchfile>`
iv).  Visualization of data using `rosrun rqt_multiplot rqt_multiplot`
v).   Configurations of the rviz and gazebo can be customized

## Exercise 1
- ROS architecture
- ROS master, nodes, and topics
- Console commands
- Catkin workspace and build system
- Launch-files

---
## Exercise 2
- ROS package structure
- Integration and programming with Eclipse
- ROS C++ client library (roscpp)
- ROS subscribers and publishers
- ROS parameter server
- RViz visualization

---
## Exercise 3
- ROS publisher
- rqt User Interface
- TF Transformation System (Optional)
- Robot models (URDF) (Optional)
- Simulation descriptions (SDF) (Optional)


---
## Exercise 4
- ROS bag
- rqt_multiplot
- RViz
- ROS time
- ROS launch

---
## Exercise 5
- Service calls

*Commands for motion control using service*
_Use the following commands during the simulation..._

Option 1: Make the smb roboter move
`rosservice call /start_stop "data: false"`

Option 2: Stop the smb roboter
`rosservice call /start_stop "data: true"`

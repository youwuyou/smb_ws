# 151-0662-00L - Programming for Robotics - Introduction to ROS
[:link:](https://rsl.ethz.ch/education-students/lectures/ros.html)
[:video_camera:](https://www.youtube.com/watch?v=0BxVPCInS3M&list=PLE-BQwvVGf8HOvwXPgtDfWoxd4Cc6ghiP)

:information_source: An introductory class to ROS at ETH Zürich

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

### Commands for motion control using service
Use the following commands during the simulation...

Option 1:
'rosservice call /start_stop "data: false'


'rosservice call /start_stop "data: true'


### enable the obstacle detection => not moving when obstacle is ahead of us

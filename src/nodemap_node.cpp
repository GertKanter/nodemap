#include <ros/ros.h>
#include <map>
#include <string>

int main(int argc, char** args)
{
   std::map<std::string, std::string> node_map;
   ros::init(argc, args, "nodemap");
   ros::NodeHandle nh;
   nh.getParam("nodes", node_map);
   ROS_INFO("Loaded node map:");
   for (std::map<std::string ,std::string>::iterator it = node_map.begin(); it != node_map.end(); ++it)
   {
      ROS_WARN("%s : %s", it->first.c_str(), it->second.c_str());
   }
   return 0;
}

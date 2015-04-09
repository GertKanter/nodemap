#include <ros/ros.h>
#include <map>
#include <string>

int main(int argc, char** args)
{
   std::map<unsigned int, std::string> node_map;
   node_map.insert(std::pair<unsigned int, std::string>(123, "node name"));
   for (std::map<unsigned int ,std::string>::iterator it = node_map.begin(); it != node_map.end(); ++it)
   {
      ROS_WARN("%i : %s", it->first, (it->second).c_str());
   }
   return 0;
}

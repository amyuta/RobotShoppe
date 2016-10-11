#ifndef __ROBOTPART_H
#define __ROBOTPART_H 

#include "vector"
#include "string"

using namespace std;

class RobotPart {
	
protected:
    int p_num;
    string p_type;
    double p_weight;
    double p_cost;
    string p_description;
    
public:
    RobotPart(int part_num, string type, double weight, double cost, string description) : p_num(part_num), p_type(type), p_weight(weight), p_cost(cost), p_description(description) {}
    
    



};
#endif
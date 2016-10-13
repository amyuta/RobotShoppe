#ifndef __ROBOTPART_H
#define __ROBOTPART_H 

#include "vector"
#include "string"

using namespace std;

class RobotPart {
	
protected:
    int p_num;
    double p_weight;
    double p_cost;
    string p_description;
    int p_quantity;
    
public:
    RobotPart(int part_num, double weight, double cost, string description, int quantity) : p_num(part_num), p_weight(weight), p_cost(cost), p_description(description), p_quantity(quantity) {}
    
    
    void list_all();
    void add_quan(int part_num, int quantity);


};
#endif
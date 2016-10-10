
#ifndef Arm_h
#define Arm_h

#include "std_lib_facilities.h"


class Arm::public (RobotPart) {
public:
    Arm(int arm_val) : arm_type(arm_val) {}
    
	int part_num;
	string type;
	double weight;
	double cost;
	string description;
	int arm_count;
       
    int power_consumed(int speed);
    //Need to create .cpp file for power_consumed method
    
    
private:
    int arm_type;
    int power_consumed;
    
};
#endif /* Arm_h */


#ifndef Arm_h
#define Arm_h

#include "std_lib_facilities.h"
#include "RobotPart.h"



class Arm:public RobotPart {
public:
    Arm(int part_num, string type, double weight, double cost, string description, int power) : RobotPart(part_num, type, weight, cost, description), p_power(power){}
    
       
    int power_consumed(int speed);
    //Need to create .cpp file for power_consumed method
    
    
protected:
    int p_power;
    int arm_count;
    int power_cons;
    
};
#endif /* Arm_h */


#ifndef Locomotor_h
#define Locomotor_h
#include "string"
#include "std_lib_facilities.h"
#include "RobotPart.h"

class Locomotor:public RobotPart {
      
public:
    Locomotor(int part_num, string type, double weight, double cost, string description, int power, int max_speed) : p_power(power), p_maxspeed(max_speed), RobotPart(part_num, type, weight, cost, description){}

    
    double find_maxspeed();
    double find_powerconsumed();
    //need to create a .cpp file
    
protected:
    int loco_count;
    int p_power;
    int p_maxspeed;
    //might need to create more variables for max speed& power consumed
    
    
};




#endif /* Locomotor_h */
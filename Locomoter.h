
#ifndef Locomoter_h
#define Locomoter_h
#include "string"
#include "std_lib_facilities.h"

class Locomoter::public (RobotPart) {
public:
    Locomoter(int loco_val) : loco_type(loco_val) {}
    

	int loco_count;
	int part_num;
	string type;
	double weight;
	double cost;
	string description;
    
    double find_maxspeed();
    double find_powerconsumed();
    //need to create a .cpp file
    
private:
    int loco_type;
    //might need to create more variables for max speed& power consumed
    
    
};




#endif /* Locomoter_h */

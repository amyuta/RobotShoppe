

#ifndef Head_h
#define Head_h

#include "std_lib_facilities.h"
#include "shoppe.h"
#include "RobotPart.h"

class Head: public RobotPart {
public:
    Head(int part_num, string type, double weight, double cost, string description) : RobotPart(part_num, type, weight, cost, description){}
    

protected:
    int head_count;
    
};
#endif /* Head_h */

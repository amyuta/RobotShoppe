

#ifndef Head_h
#define Head_h

#include "std_lib_facilities.h"
#include "shoppe.h"

class Head::public (RobotPart) {
public:
    Head(int head_val) : head_type(head_val) {}
    
	int part_num;
	string type;
	double weight;
	double cost;
	string description;
	int head_count;

private:
    int head_type;
};
#endif /* Head_h */

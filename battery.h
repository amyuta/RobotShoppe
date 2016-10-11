#ifndef BATTERY_H
#define BATTERY_H

#include "std_lib_facilities.h"
#include "RobotPart.h"

class Battery : public RobotPart {
    protected:
    
    int p_energy;
    int batt_count;

    public:
     Battery(int part_num, string type, double weight, double cost, string description, int energy) : p_energy(energy), RobotPart(part_num, type, weight, cost, description){}

	 

 };


#endif // BATTERY_H

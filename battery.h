#ifndef BATTERY_H
#define BATTERY_H

//#include "std_lib_facilities.h"
#include "RobotPart.h"

class Battery : public RobotPart {
    protected:
    
    int p_energy;
    int batt_count;

    public:
     Battery(int part_num, double weight, double cost, string description, int energy, int quantity) : p_energy(energy), RobotPart(part_num, weight, cost, description, quantity){}

	 

 };


#endif // BATTERY_H

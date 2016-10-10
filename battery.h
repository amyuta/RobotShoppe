#ifndef BATTERY_H
#define BATTERY_H

#include "std_lib_facilities.h"

class Battery::public (RobotPart) {
    private:
     double energy;
     int model;

    public:
     Battery(int type) : model(type) { }

	 int part_num;
	 string type;
	 double weight;
	 double cost;
	 string description;
	 int batt_count;

 };


#endif // BATTERY_H

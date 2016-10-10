#ifndef TORSO_H
#define TORSO_H

#include "std_lib_facilities.h"
#include "shoppe.h"
#include "string"

class Torso::public (RobotPart) {
    private:
     int model;

    public:
     Torso(int type) : model(type) { }

	 int part_num;
	 string type;
	 double weight;
	 double cost;
	 string description;
	 int torso_count;

 };
 #endif



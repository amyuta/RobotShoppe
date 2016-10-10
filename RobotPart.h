#ifndef __ROBOTPART_H
#define __ROBOTPART_H 

//#include "std_lib_facilities.h"
#include "vector"
#include "string"
#include "shoppe.h"
#include "Head.h"


class RobotPart::public RobotModel {
	
private:

public:

	vector<Torso> torsos;
	vector<Locomoter> locos;
	vector<Head> heads;
	vector<Battery> batterys;
	vector<Arm> arms;

	void create_head(int part_num, double weight, double cost, string descrip);
	void create_arm(int part_num, double weight, double cost, int power, string descrip);
	void create_battery(int part_num, double weight, double cost, int energy, string descrip);
	void create_loco(int part_num, double weight, double cost, int power, int max_speed, string descrip);
	void create_battery(int part_num, double weight, double cost, int batt_count, string descrip);






}
#endif
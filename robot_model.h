#ifndef ROBOT_MODEL_H
#define ROBOT_MODEL_H
#include "std_lib_facilities.h"

class Robot_Model {
public:
    Robot_Model(string r_name, int r_num, double r_price)
        : name(r_name), model_num(r_num), price(r_price) {}

//cost function?
//maxySpeedy stuff?

private:
    string name;
    int model_num;
    double price;
	vector<Robot_Part> parts;
};
#endif // ROBOT_MODEL_H

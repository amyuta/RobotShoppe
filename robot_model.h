#ifndef ROBOT_MODEL_H
#define ROBOT_MODEL_H
//#include "std_lib_facilities.h"
#include "RobotPart.h"
#include<string>


class Robot_Model {
    friend RobotPart;
public:
    Robot_Model(string r_name, int r_num, double r_price)
        : name(r_name), model_num(r_num), price(r_price) {}

private:
    string name;
    int model_num;
    double price;
    
};
#endif // ROBOT_MODEL_H

#ifndef ORDER_H
#define ORDER_H
#include "std_lib_facilities.h"

class Order {
public:
    Order(int o_num, string o_date)
        : order_num(o_num), date(o_date) {}

    double get_robot_cost();
    double get_ship();
    double get_tax();
    double get_total_cost();

private:
    int order_num;
    string date;
    double total_cost;
    double shipping;
    double tax;
    //customer
    //robot model
    //sales associate
};
#endif // ORDER_H

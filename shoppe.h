#ifndef SHOPPE_H
#define SHOPPE_H

//#include "std_lib_facilities.h"
#include "robot_model.h"
#include "order.h"
#include "customer.h"
#include "sales_associate.h"
#include "RobotPart.h"



class Shoppe {
public:
	void add_new_model(Robot_Model model);
    void add_order(Order order);
    //void add_customer(Customer customer);
    //void add_sa(SalesAssociate sa);
    void create_newpart(RobotPart* part, int type);
    void list_parts(int type);
    void add_to_parts(int type, int quantity, int part_num);
    void save_info();

    int num_of_models;
    int num_of_orders;
    int num_of_customers;
    int num_of_sas;
    int type;

private:
	vector<Robot_Model> robot_models;
	vector<Order> orders;
	//vector<Customer> customers;
	//vector<SalesAssociate> sales_associates;

    vector<RobotPart*> head;
    vector<RobotPart*> torso;
    vector<RobotPart*> battery;
    vector<RobotPart*> loco;
    vector<RobotPart*> arm;

    
};

#endif
#pragma once

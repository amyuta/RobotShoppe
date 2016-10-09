#ifndef SHOPPE_H
#define SHOPPE_H

#include "std_lib_facilities.h"
#include "robot_model.h"
#include "order.h"
#include "customer.h"
#include "sa.h"

class Shoppe {
public:
	void add_new_model(Robot_Model model);
    void add_order(Order order);
    void add_customer(Customer customer);
    void add_sa(SalesAssociate sa);

    int num_of_models;
    int num_of_orders;
    int num_of_customers;
    int num_of_sas;

private:
	vector<Robot_Model> robot_models;
	vector<Order> orders;
	vector<Customer> customers;
	vector<SalesAssociate> sales_associates;
};

#endif
#pragma once

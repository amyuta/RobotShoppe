#include "shoppe.h"

void Shoppe::create_newpart(RobotPart* part, int type){
 
    
    if(type == 1){
        head.push_back(part);
    }
    else if(type == 2){
        arm.push_back(part);
    }
    else if(type == 3){
        battery.push_back(part);
    }
    else if(type == 4){
        loco.push_back(part);
    }
    else if(type == 5){
        torso.push_back(part);
    }
     

}
void Shoppe::add_new_model(Robot_Model model) {
  robot_models.push_back(model);
}

void Shoppe::add_order(Order order) {
  orders.push_back(order);
}
/*

void Shoppe::add_customer(Customer customer) {
  customer.push_back(customer);
}

void Shoppe::add_sa(SalesAssociate sa) {
  sales_associates.push_back(sa);
}
*/

/*
int Shoppe::num_of_models() {
  return robot_models.size();
}

int Shoppe::num_of_orders() {
  return orders.size();
}

int Shoppe::num_of_customers() {
  return customers.size();
}

int Shoppe::num_of_sas() {
  return sales_associates.size();
}
*/
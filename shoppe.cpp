#include "shoppe.h"

void Shoppe::add_new_model(Robot_Model model) {
  robot_models.push_back(model);
}

void Shoppe::add_order(Order order) {
  orders.push_back(order);
}

void Shoppe::add_customer(Customer customer) {
  customer.push_back(customer);
}

void Shoppe::add_sa(SalesAssociate sa) {
  sales_associates.push_back(sa);
}

int Library::num_of_models() {
  return robot_models.size();
}

int Library::num_of_orders() {
  return orders.size();
}

int Library::num_of_customers() {
  return customers.size();
}

int Library::num_of_sas() {
  return sales_associates.size();
}

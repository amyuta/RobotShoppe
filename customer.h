#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {

public:
    Customer(string c_name, int c_num) : name(c_name), number(c_num) {}

    string get_customer_name();
    int get_customer_number();
    //Order order;
private:
    string name;
    int number;

};


#endif // CUSTOMER_H

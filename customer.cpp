#include "customer.h"
#include <stdio.h>
#include <fstream>
#include <ostream>

 string Customer::get_customer_name() {return name;}
 int Customer::get_customer_number() {return number;}

void Customer::save_all(){

    ofstream ofs;
    ofs.open("data.txt", ofstream::out | ofstream::app);

            ofs << number << endl;
            ofs << name << endl;

            ofs.close();
}


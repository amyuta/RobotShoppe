<<<<<<< HEAD
#include "customer.h"
#include <stdio.h>
#include <fstream>
#include <ostream>
#include <iostream>
using namespace std;

void Customer::save_all(){

    ofstream ofs;
    ofs.open("data.txt", ofstream::out | ofstream::app);

            ofs << number << endl;
            ofs << name << endl;
            ofs << sales_a << endl;

            ofs.close();
}
void Customer::list_all_detail(){
    
    cout << name << " " <<number;
}
=======
#include "customer.h"
#include <stdio.h>
#include <fstream>
#include <ostream>
#include <iostream>
using namespace std;

void Customer::save_all(){

    ofstream ofs;
    ofs.open("data.txt", ofstream::out | ofstream::app);

            ofs << number << endl;
            ofs << name << endl;
            ofs << sales_a << endl;

            ofs.close();
}
void Customer::list_all_detail(){
    
    cout << name << " " <<number;
}
>>>>>>> 4e08305d5fca81444807dc206782e19d17b66e75

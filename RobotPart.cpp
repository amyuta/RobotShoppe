#include "RobotPart.h"
#include <string>
#include <iostream>
#include <iomanip>


using namespace std;


void RobotPart:: list_all(){
    
    cout<<setw(7) <<p_num<< "| "<< p_quantity<< "|"<< p_description <<endl;
    
}

void RobotPart:: add_quan(int part_num, int quantity){
    
    if(p_num == part_num){
        p_quantity = p_quantity + quantity;
    }
}

void RobotPart:: list_all_detail() {
    cout << "hello";
}

double RobotPart::get_cost() {
    
    return p_cost;
    
}
int RobotPart::quan_count(){
    return p_quantity;
}



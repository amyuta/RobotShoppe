#include "RobotPart.h"
#include <string>
#include <iostream>
#include <iomanip>
#include "vector"

using namespace std;


void RobotPart:: list_all(){
    
    cout<<setw(7) <<p_num<< "| "<< p_quantity<< endl;
    
}

void RobotPart:: add_quan(int part_num, int quantity){
    
    if(p_num == part_num){
        p_quantity = p_quantity + quantity;
    }
}





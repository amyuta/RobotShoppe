#include "shoppe.h"
#include <iostream>
#include <fstream>
#include <iostream>
#include <stdexcept>


using namespace std;

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

void Shoppe::list_parts(int type){
    int i = 0;
    
    if(type == 1){
        while(i < head.size()){
            
            cout << "Head" << i+1 << "   | ";
            head[i]->list_all();
            i++;
        }
    }
    else if(type == 2){
        while(i < arm.size()){
            
            cout << "Arm" << i+1 << "   | ";
            arm[i]->list_all();
            i++;
        }
    }
    else if(type == 3){
        while(i < battery.size()){
            
            cout << "Battery" << i+1 << "   | ";
            battery[i]->list_all();
            i++;
        }
    }
    else if(type == 4){
        while(i < loco.size()){
            
            cout << "Locomoter" << i+1 << "   | ";
            loco[i]->list_all();
            i++;
        }
    }
    else if(type == 5){
        while(i < torso.size()){
            
            cout << "Torso" << i+1 << "   | ";
            torso[i]->list_all();
            i++;
        }
    }
}

void Shoppe::add_to_parts(int type, int quantity, int part_num){
    
    int i = 0;
    
    if(type == 1){
        while(i < head.size()){
            head[i]->add_quan(part_num, quantity);
            i++;
        }
        
    }
    else if(type == 2){
        while(i < arm.size()){
            arm[i]->add_quan(part_num, quantity);
            i++;
        }
    }
    else if(type == 3){
        while(i < battery.size()){
            battery[i]->add_quan(part_num, quantity);
            i++;
        }
    }
    else if(type == 4){
        while(i < loco.size()){
            loco[i]->add_quan(part_num, quantity);
            i++;
        }
    }
    else if(type == 5){
        while(i < torso.size()){
            torso[i]->add_quan(part_num, quantity);
            i++;
        }
    }
    
    
}

void Shoppe::save_info() {
  
    cout << "Please wait while we save...\n";
    
    ofstream ofs;
    ofs.open("data.txt");   /////////find thing to create .txt file
    ofs << "Write to File\n";
    
    /*  cout << "\n\n Please wait while the current data is saving...\n";
    ofstream ofs{"data.dat", ios_base::binary};
    
    if (!ofs) {
        cout << "Error opening file" << endl;
    }
    
    for (int i = 0; i <head.size(); ++i)
        ofs.write(as_bytes(head[i]), sizeof(int));*/
    
    
    
    
    ofs.close();
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
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

            cout << "(" << i+1 << ")"<<" Head" << i+1 << "   | ";
            head[i]->list_all();
            i++;
        }
    }
    else if(type == 2){
        while(i < arm.size()){

            cout << "(" << i+1 << ")"<<"Arm" << i+1 << "   | ";
            arm[i]->list_all();
            i++;
        }
    }
    else if(type == 3){
        while(i < battery.size()){

            cout << "(" << i+1 << ")"<<"Battery" << i+1 << "   | ";
            battery[i]->list_all();
            i++;
        }
    }
    else if(type == 4){
        while(i < loco.size()){

            cout << "(" << i+1 << ")"<<"Locomoter" << i+1 << "   | ";
            loco[i]->list_all();
            i++;
        }
    }
    else if(type == 5){
        while(i < torso.size()){

            cout << "(" << i+1 << ")"<<"Torso" << i+1 << "   | ";
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

void Shoppe::list_part_details(int type) {

    int i = 0;

    if (type == 1) {
        while (i < head.size()) {

            head[i]->list_all_detail();
            i++;
        }
    }
}

bool Shoppe:: check_parts(int c_bat, int c_torso, int c_arm){

    int batt, tor, arm_c;

    tor = torso[c_torso-1]->quan_count();
    batt = battery[c_bat-1]->quan_count();
    arm_c = arm[c_arm-1]->quan_count();

    if(batt >= tor){
        if(arm_c >= 2){
            return true;
        }
    }

    return false;

}

void Shoppe::make_model(int type1, int type2, int type3, int type4, int type5, int mod_num, string mod_name){

    int cost = 0;

    cost += head[type1]->get_cost();
    cost += arm[type2]->get_cost();
    cost += battery[type3]->get_cost();
    cost += loco[type4]->get_cost();
    cost += torso[type5]->get_cost();

    add_new_model(Robot_Model(mod_name, mod_num, cost), *head[type1], *arm[type2], *battery[type3], *loco[type4], *torso[type5]);

}

void Shoppe::add_new_model(Robot_Model model, RobotPart head, RobotPart arm, RobotPart battery, RobotPart loco, RobotPart torso) {
    robot_models.push_back(model);
    robot_models[robot_models.size()-1].make_robotmodel(head, arm, battery, loco, torso);

}

void Shoppe:: show_models(){
    int i = 0;

    while(i < robot_models.size()){

        robot_models[i].show_model();
        i++;
    }
}

void Shoppe::add_sa(SalesAssociate* sa){
    
    sales_a.push_back(sa);
}


void Shoppe::list_sa(){
    int i = 0;
    while (i < sales_a.size()) {
        
        cout << "(" << i+1 << ") ";
        sales_a[i]->list_all_detail();
        i++;
    }
    
}

void Shoppe::add_order(Order* order, int model ) {
    double price;
    
    price = robot_models[model].get_price();
    order->get_price(price);
    orders.push_back(order);
    
}

void Shoppe::show_orders(string name, int num){
    
    int i = 0;
    
    while(i < orders.size()){
        
        cout << "(" << i+1 << ") ";
        orders[i]->show_order(name, num);
        i++;
        cout << endl;
    }
}

void Shoppe:: pay_order(int ord_num){
    
    orders[ord_num]->pay_now();
}

void Shoppe::list_order(int sales_a){
    
    int i = 0;
    
    while(i < orders.size()){
        cout << "\n(" << i+1 << ") ";
        orders[i]->list_order(sales_a);
        i++;
    }
}


void Shoppe::add_customer(Customer* customer) {
  customers.push_back(customer);
}

void Shoppe::list_cust(){
    
    int i = 0;
    while (i < customers.size()) {
        
        cout << "(" << i+1 << ") ";
        customers[i]->list_all_detail();
        i++;
    }
}

void Shoppe::save_info() {

    cout << "Please wait while we save...\n";
    int i = 0;

    ofstream ofs;
    ofs.open("data.txt");   //print the head count for the loading process.
    ofs << head.size() << endl;
    ofs.close();

    while (i < head.size()){
        head[i]->save_all();
        i++;
    }

    i = 0;
    ofs.open("data.txt", ofstream::out | ofstream::app);   //print the arm count for the loading process.
    ofs << arm.size() << endl;
    ofs.close();

    while (i < arm.size()) {
        arm[i]->save_all();
        i++;
    }

    i = 0;
    ofs.open("data.txt", ofstream::out | ofstream::app);   //print the loco count for the loading process.
    ofs << loco.size() << endl;
    ofs.close();

    while (i < loco.size()) {
        loco[i]->save_all();
        i++;
    }

    i = 0;
    ofs.open("data.txt", ofstream::out | ofstream::app);   //print the battery count for the loading process.
    ofs << battery.size() << endl;
    ofs.close();

    while (i < battery.size()) {
        battery[i]->save_all();
        i++;
    }

    i = 0;
    ofs.open("data.txt", ofstream::out | ofstream::app);   //print the torso count for the loading process.
    ofs << torso.size() << endl;
    ofs.close();

    while (i < torso.size()) {
        torso[i]->save_all();
        i++;
    }

    i = 0;
    ofs.open("data.txt", ofstream::out | ofstream::app); //print the customer count for loading
    ofs << customers.size() << endl;
    ofs.close();

    while (i < customers.size()) {
        customers[i]->save_all();
        i++;
    }

    i = 0;
    ofs.open("data.txt", ofstream::out | ofstream::app); //print the model count for the loading
    ofs << robot_models.size() << endl;
    ofs.close();

    while (i < robot_models.size()) {
        robot_models[i].save_all();
        i++;
    }





}

int Shoppe::searchfor_part(int type, int num){

    int i = 0, pnum;

    if (type == 1) {

        while (i < head.size()) {
                pnum = head[i]->get_pnum();
            if (pnum == num) {
                return i;
            }
        }
    }

    i = 0;

    if (type == 2) {

        while (i < arm.size()) {
                pnum = arm[i]->get_pnum();
            if (pnum == num) {
                return i;
            }
        }
    }

    i = 0;

    if (type == 3) {

        while (i < battery.size()) {
                pnum = battery[i]->get_pnum();
            if ( pnum == num) {
                return i;
            }
        }
    }

    i = 0;

    if (type == 4) {

        while (i < loco.size()) {
                pnum = loco[i]->get_pnum();
            if (pnum == num) {
                return i;
            }
        }
    }

    i = 0;

    if (type == 5) {

        while (i < torso.size()) {
                pnum = torso[i]->get_pnum();
            if ( pnum == num) {
                return i;
            }
        }
    }

}




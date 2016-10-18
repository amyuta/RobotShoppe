#include "std_lib_facilities.h"
#include "controller.h"
#include "RobotPart.h"
#include "shoppe.h"
#include "Head.h"
#include "torso.h"
#include "Arm.h"
#include "Locomotor.h"
#include "battery.h"
#include "order.h"
#include "sales_associate.h"
#include "customer.h"

#include <iostream>
#include<fstream>
#include<string>
using namespace std;

void Controller::cli() {
	int cmd = -1;
	while (cmd != 0) {
		view.show_mainmenu();
		cout << "Command? ";
		cin >> cmd;
		cin.ignore(); // consume \n
		execute_cmd(cmd);
	}
}

void Controller:: execute_cmd(int cmd) {

    if (cmd == 1) {
        view.show_pmmenu();
        cout << "Command? ";
        cin >> cmd;
        cin.ignore(); // consume \n

        if(cmd == 1){
            execute_createnewpart(cmd);
        }
        else if (cmd == 2){
            execute_createrobotmodel();
        }
        else if (cmd == 9) {
            view.show_mainmenu();
        }
        else {
            view.show_pmmenu();
        }
    }
    else if (cmd == 2) {
        view.show_bcmenu();
        cout << "Command? ";
        cin >> cmd;
        cin.ignore(); // consume \n

        if(cmd == 9){
            view.show_mainmenu();
        }
        else if(cmd == 1){
            execute_showrobotmodels();

        }
    }
    else if (cmd == 3) {
        view.show_samenu();
        cout << "Command? ";
        cin >> cmd;
        cin.ignore(); // consume \n

        if(cmd == 9){
            view.show_mainmenu();
        }
        else if (cmd == 1) {
            new_customer();
        }
        else if (cmd == 1) {
            new_customer();
        }
    }
    else if (cmd == 4) {
        view.show_pbmenu();
        cout << "Command? ";
        cin >> cmd;
        cin.ignore(); // consume \n

        if (cmd == 8) {
            shoppe.save_info();
        }
        else if(cmd == 9){
            view.show_mainmenu();
        }
    }
    else if(cmd == 5){

        cout<< "Loading my a$$\n";
        load_data();
    }
    else if (cmd == 9) {
        exit(1);
    }
    else {
        view.show_mainmenu();
    }

}

void Controller::execute_createnewpart(int cmd) {
    int type, option, part_num, power, batt_count, max_speed, energy, quantity, add_part;
    double weight, cost;
    string descrip, type_name;

    cout<< "\n(1) Create New Part\n(2) Add to Existing Part\n\n";
    cout<< "Command? ";
    cin>>option;
    cin.ignore();


    if(option == 1){
        cout << "\nFirst select the part type.\n(1) Head\n(2) Arm\n(3) Battery\n(4) Locomotor\n(5) Torso\n\n";
        cout << "Command? ";
        cin >> type;
        cin.ignore();
        cout << endl;

        if (type == 1) {
            cout << "Please enter the following details about the Head.\n";
            cout << "Part #: ";
            cin >> part_num;
            cin.ignore();
            cout << "Weight (lbs): ";
            cin >> weight;
            cin.ignore();
            cout << "Cost ($): ";
            cin >> cost;
            cin.ignore();
            cout << "Quantity: ";
            cin >> quantity;
            cin.ignore();
            cout << "Description: ";
            getline(cin, descrip);

            shoppe.create_newpart(new Head(part_num, weight, cost, descrip, quantity), 1);

            ofstream ofs;
            ofs.open("heads.txt", ofstream::out | ofstream::app);

            ofs << part_num << endl;
            ofs << weight << endl;
            ofs << cost << endl;
            ofs << quantity << endl;
            ofs << descrip << endl;

            ofs.close();


        }

        if (type == 2) {
            cout << "Please enter the following details about the Arm.\n";
            cout << "Part #: ";
            cin >> part_num;
            cin.ignore();
            cout << "Weight (lbs): ";
            cin >> weight;
            cin.ignore();
            cout << "Cost ($): ";
            cin >> cost;
            cin.ignore();
            cout << "Quantity: ";
            cin >> quantity;
            cin.ignore();
            cout << "Power (Watts): ";
            cin >> power;
            cin.ignore();
            cout << "Description: ";
            getline(cin, descrip);

            shoppe.create_newpart(new Arm(part_num, weight, cost, descrip, power, quantity), 2);

            ofstream ofs;
            ofs.open("arms.txt", ofstream::out | ofstream::app);

            ofs << part_num << endl;
            ofs << weight << endl;
            ofs << cost << endl;
            ofs << power << endl;
            ofs << quantity << endl;
			ofs << descrip << endl;

            ofs.close();
        }

        if (type == 3) {
            cout << "Please enter the following details about the Battery.\n";
            cout << "Part #: ";
            cin >> part_num;
            cin.ignore();
            cout << "Weight (lbs): ";
            cin >> weight;
            cin.ignore();
            cout << "Cost ($): ";
            cin >> cost;
            cin.ignore();
            cout << "Quantity: ";
            cin >> quantity;
            cin.ignore();
            cout << "Energy (KWHr): ";
            cin >> energy;
            cin.ignore();
            cout << "Description: ";
            getline(cin, descrip);

            shoppe.create_newpart(new Battery(part_num, weight, cost, descrip, energy, quantity), 3);

            ofstream ofs;
            ofs.open("batteries.txt", ofstream::out | ofstream::app);

            ofs << part_num << endl;
            ofs << weight << endl;
            ofs << cost << endl;
            ofs << energy << endl;
            ofs << quantity << endl;
			ofs << descrip << endl;

            ofs.close();
        }

        if (type == 4) {
            cout << "Please enter the following details about the Locomotor.\n";
            cout << "Part #: ";
            cin >> part_num;
            cin.ignore();
            cout << "Weight (lbs): ";
            cin >> weight;
            cin.ignore();
            cout << "Cost ($): ";
            cin >> cost;
            cin.ignore();
            cout << "Quantity: ";
            cin >> quantity;
            cin.ignore();
            cout << "Power (Watts): ";
            cin >> power;
            cin.ignore();
            cout << "Max Speed (MPH): ";
            cin >> max_speed;
            cin.ignore();
            cout << "Description: ";
            getline(cin, descrip);

            shoppe.create_newpart(new Locomotor(part_num,weight, cost, descrip, power, max_speed, quantity), 4);

            ofstream ofs;
            ofs.open("locomotors.txt", ofstream::out | ofstream::app);

            ofs << part_num << endl;
            ofs << weight << endl;
            ofs << cost << endl;
            ofs << power << endl;
            ofs << max_speed << endl;
            ofs << quantity << endl;
			ofs << descrip << endl;

            ofs.close();
        }

        if (type == 5) {
            cout << "Please enter the following details about the Torso.\n";
            cout << "Part #: ";
            cin >> part_num;
            cin.ignore();
            cout << "Weight (lbs): ";
            cin >> weight;
            cin.ignore();
            cout << "Cost ($): ";
            cin >> cost;
            cin.ignore();
            cout << "Quantity: ";
            cin >> quantity;
            cin.ignore();
            cout << "Battery Component Count: ";
            cin >> batt_count;
            cin.ignore();
            cout << "Description: ";
            getline(cin, descrip);

            shoppe.create_newpart(new Torso(part_num, weight, cost, descrip, batt_count, quantity), 5);

            ofstream ofs;
            ofs.open("torsos.txt", ofstream::out | ofstream::app);

            ofs << part_num << endl;
            ofs << weight << endl;
            ofs << cost << endl;
            ofs << batt_count << endl;
            ofs << quantity << endl;
			ofs << descrip << endl;

            ofs.close();
        }
    }
    else if(option == 2){

        cout << "\n\nFirst select the part type you wish to add to.\n(1) Head\n(2) Arm\n(3) Battery\n(4) Locomotor\n(5) Torso\n\n";
        cout << "Command? ";
        cin >> type;
        cin.ignore();
        cout << endl;

        if(type == 1 || type == 2 || type == 3 || type == 4 || type == 5){

            view.list_parts();
            shoppe.list_parts(type);
            cout << "\nPart Number you wish to add to: ";
            cin >> add_part;
            cin.ignore();
            cout << "Quantity: ";
            cin >> quantity;
            cin.ignore();

            shoppe.add_to_parts(type, quantity, add_part);

        }


    }

    execute_cmd(1);
}


void Controller::execute_createrobotmodel(){

    int part_type1, part_type2, part_type3, part_type4, part_type5, model_num, command;
    string model_name;
    bool makepart;

    cout << "Enter Model Name: \n";
    getline(cin, model_name);

    cout << "Enter Model Number: \n";
    cin >> model_num;
    cin.ignore();

    view.list_parts();
    cout << "Chose a Head: \n";
    shoppe.list_parts(1);
    cin >> part_type1;
    cin.ignore();

    cout << "\nChose an Arm: \n";
    shoppe.list_parts(2);
    cin >> part_type2;
    cin.ignore();

    //Maybe ask, How many batteries.. instead?
    cout << "\nChose a Battery: \n";
    shoppe.list_parts(3);
    cin >> part_type3;
    cin.ignore();

    cout << "\nChose a Locomotor: \n";
    shoppe.list_parts(4);
    cin >> part_type4;
    cin.ignore();

    cout << "\nChose a Torso: \n";
    shoppe.list_parts(5);
    cin >> part_type5;
    cin.ignore();

    makepart = shoppe.check_parts(part_type3, part_type5, part_type2);

    if(makepart){
        shoppe.make_model(part_type1-1, part_type2-1, part_type3-1, part_type4-1, part_type5-1, model_num, model_name);
        cout << "Model Created.\n";
    }
    else{

        cout << "Not enough parts to make model.\n";
        cout << "(1) Main Menu\n";
        cout << "(2) Create Menu\n";
        cout << "Command? ";
        cin >> command;
        cin.ignore();

        if(command == 1){
            cli();
        }
        else if(command == 2){
            execute_cmd(1);
        }

    }
<<<<<<< HEAD
}

void Controller::new_customer(){

    string c_name;
    int c_num;

=======
}

void Controller::new_customer(){

    string c_name;
    int c_num;

>>>>>>> origin/View
     cout << "Enter Customer Name: \n";
    getline(cin, c_name);

    cout << "Enter Customer Number: \n";
    cin >> c_num;
<<<<<<< HEAD
    cin.ignore();

    shoppe.add_customer( new Customer(c_name, c_num));

    ofstream ofs;
    ofs.open("customers.txt", ofstream::out | ofstream::app);

    ofs << c_num << endl;
    ofs << c_name << endl;

    ofs.close();

=======
    cin.ignore();

    customer(c_name, c_num);
    shoppe.add_customer(customer);

>>>>>>> origin/View
}

void Controller::execute_showrobotmodels(){

    view.list_parts();
    shoppe.show_models();



}


void Controller::load_data() {
    ifstream ifshead("heads.txt");
    int part_num;
    int weight;
    int cost;
    int quantity;
    string descrip;
    string temp;

    while(getline(ifshead, temp)){

        part_num = stoi(temp);
        getline(ifshead, temp);
        weight = stoi(temp);
        getline(ifshead, temp);
        cost = stoi(temp);
        getline(ifshead, temp);
        quantity = stoi(temp);
        getline(ifshead, descrip);

        shoppe.create_newpart(new Head(part_num, weight, cost, descrip, quantity), 1);
    }
	ifshead.close();

	ifstream ifsbatt("batteries.txt");
	int energy;

	while (getline(ifsbatt, temp)) {

		part_num = stoi(temp);
		getline(ifsbatt, temp);
		weight = stoi(temp);
		getline(ifsbatt, temp);
		cost = stoi(temp);
		getline(ifsbatt, temp);
		energy = stoi(temp);
		getline(ifsbatt, temp);
		quantity = stoi(temp);
		getline(ifsbatt, descrip);

		shoppe.create_newpart(new Battery(part_num, weight, cost, descrip, energy, quantity), 3);
	}
	ifsbatt.close();

	ifstream ifsarm("arms.txt");
	int power;

	while (getline(ifsarm, temp)) {

		part_num = stoi(temp);
		getline(ifsarm, temp);
		weight = stoi(temp);
		getline(ifsarm, temp);
		cost = stoi(temp);
		getline(ifsarm, temp);
		power = stoi(temp);
		getline(ifsarm, temp);
		quantity = stoi(temp);
		getline(ifsarm, descrip);

		shoppe.create_newpart(new Arm(part_num, weight, cost, descrip, power, quantity), 2);
	}
	ifsarm.close();

	ifstream ifsloco("locomotors.txt");
	int max_speed;

	while (getline(ifsloco, temp)) {

		part_num = stoi(temp);
		getline(ifsloco, temp);
		weight = stoi(temp);
		getline(ifsloco, temp);
		cost = stoi(temp);
		getline(ifsloco, temp);
		power = stoi(temp);
		getline(ifsloco, temp);
		max_speed = stoi(temp);
		getline(ifsloco, temp);
		quantity = stoi(temp);
		getline(ifsloco, descrip);

		shoppe.create_newpart(new Locomotor(part_num, weight, cost, descrip, power, max_speed, quantity), 4);
	}
	ifsloco.close();

	ifstream ifstorso("torsos.txt");
	int batt_count;

	while (getline(ifstorso, temp)) {

		part_num = stoi(temp);
		getline(ifstorso, temp);
		weight = stoi(temp);
		getline(ifstorso, temp);
		cost = stoi(temp);
		getline(ifstorso, temp);
		batt_count = stoi(temp);
		getline(ifstorso, temp);
		quantity = stoi(temp);
		getline(ifstorso, descrip);

		shoppe.create_newpart(new Torso(part_num, weight, cost, descrip, batt_count, quantity), 5);
	}
	ifstorso.close();

	ifstream ifscust("customers.txt");

	int c_num;
	string c_name;

	while (getline(ifscust, temp)){

        c_num = stoi(temp);
        getline(ifscust, c_name);
	}

	shoppe.add_customer( new Customer(c_name, c_num));

	ifscust.close();
}






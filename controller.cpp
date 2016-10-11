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

void Controller::execute_cmd(int cmd) {
	if (cmd == 1) { // Create new
		view.show_createmenu();
		cout << "Command? ";
		cin >> cmd;
		cin.ignore(); // consume \n
        
        if(cmd == 5){
            execute_createnewpart(cmd);
        }
	}

	else if (cmd == 2) {
		view.show_reportmenu();
	}
	else if(cmd == 9){
       		 exit(1);
    	}
	
	else {
		view.show_mainmenu();
	}
}

void Controller::execute_createnewpart(int cmd) {
	int type, part_num, power, batt_count, max_speed, energy;
	double weight, cost;
	string descrip, type_name;


		cout << "First select the part type.\n(1) Head\n(2) Arm\n(3) Battery\n(4) Locomotor\n(5) Torso\n\n";
        cout << "Command? ";
		cin >> type;
		cin.ignore();

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
			cout << "Description: ";
			getline(cin, descrip);
            
            type_name = "Head";

            shoppe.create_newpart(new Head(part_num, type_name, weight, cost, descrip), 1);

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
			cout << "Power (Watts): ";
			cin >> power;
			cin.ignore();
			cout << "Description: ";
			getline(cin, descrip);
            
            type_name = "Arm";

            shoppe.create_newpart(new Arm(part_num, type_name, weight, cost, descrip, power), 2);

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
			cout << "Energy (KWHr: ";
			cin >> energy;
			cin.ignore();
			cout << "Description: ";
			getline(cin, descrip);
            
            type_name = "Battery";
            
            shoppe.create_newpart(new Battery(part_num, type_name, weight, cost, descrip, energy), 3);


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
			cout << "Power (Watts): ";
			cin >> power;
			cin.ignore();
			cout << "Max Speed (MPH): ";
			cin >> max_speed;
			cin.ignore();
			cout << "Description: ";
			getline(cin, descrip);

            type_name = "Locomotor";
            
            shoppe.create_newpart(new Locomotor(part_num, type_name, weight, cost, descrip, power, max_speed), 4);


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
			cout << "Battery Component Count: ";
			cin >> batt_count;
			cin.ignore();
			cout << "Description: ";
			getline(cin, descrip);

            type_name = "Torso";
            
            shoppe.create_newpart(new Torso(part_num, type_name, weight, cost, descrip, batt_count), 5);

		}
	
}


//#include "std_lib_facilities.h"
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

/*void Controller::execute_cmd(int cmd) {
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
}*/

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
    }
    else if (cmd == 3) {
        view.show_samenu();
        cout << "Command? ";
        cin >> cmd;
        cin.ignore(); // consume \n
        
        if(cmd == 9){
            view.show_mainmenu();
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











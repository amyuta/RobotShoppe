#include "std_lib_facilities.h"
#include "controller.h"
#include "RobotPart.h"

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
		;

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
	string descrip;

	if (cmd == 5) {
		cout << "First select the part type.\n(1) Head\n(2) Arm\n(3) Battery\n (4) Locomotor\n(5) Torso\n\n";
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

			create_head(part_num, weight, cost, descrip);

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

			create_arm(part_num, weight, cost, power, descrip);

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

			create_battery(part_num, weight, cost, energy, descrip);

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

			create_loco(part_num, weight, cost, power, max_speed, descrip);


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

			create_battery(part_num, weight, cost, batt_count, descrip);


		}
	}
}


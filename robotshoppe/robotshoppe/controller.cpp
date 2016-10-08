#include "view.h"
#include "std_lib_facilities.h"
#include "Arm.h"
#include "Head.h"
#include "torso.h"
#include "controller.h"
#include "shoppe.h"

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

	}

	else if (cmd == 2) {
		view.show_reportmenu();
	}

	

	else {
		view.show_mainmenu();
	}
}


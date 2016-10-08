#ifndef __CONTROLLER_H
#define __CONTROLLER_H

#include "view.h"
#include "std_lib_facilities.h"
#include "Arm.h"
#include "Head.h"
#include "torso.h"'
#include "shoppe.h"

class Controller {
public:
	Controller(Shoppe& shop) : shoppe(shop), view(View(shoppe)) { }
	void cli();
	void execute_cmd(int cmd);
	void create_model();
	void new_customer();
	void place_order();
	void run_report();
private:
	Shoppe& shoppe;
	View view;
};
#endif
#pragma once

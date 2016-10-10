#ifndef __CONTROLLER_H
#define __CONTROLLER_H

#include "view.h"
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
	void execute_createnewpart(int cmd);
private:
	Shoppe& shoppe;
	View view;
};
#endif
#pragma once

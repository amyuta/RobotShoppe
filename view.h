#ifndef __VIEW_H
#define __VIEW_H 201609

#include "std_lib_facilities.h"

class View {
public:
	//View(Library& lib) : library(lib) { }
	void show_mainmenu();
	void show_createmenu();
	void show_reportmenu();
	void list_parts();
	void show_robot();
	//void list_models(); //will we use this??
private:
	//Library& library;
};
#endif

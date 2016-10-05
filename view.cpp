#include "view.h"
#include "std_lib_facilities.h"

#include <iostream>
#include <string>

using namespace std;

void View::show_mainmenu() {
	cout << endl << endl;
	cout << "===============================" << endl;
	cout << "          ROBOT SHOPPE" << endl;
	cout << "===============================" << endl;
	cout << endl;
	cout << "Shoppe Main Menu" << endl;
	cout << "------------" << endl;
	cout << "(1) Create New" << endl;
	cout << "(2) Reports" << endl;
	cout << "(3) Save" << endl;
	cout << "(9) Exit Shoppe" << endl;
	cout << endl;
	
}

void View::show_createmenu() {
	cout << endl << endl;
	cout << "===============================" << endl;
	cout << "          ROBOT SHOPPE" << endl;
	cout << "===============================" << endl;
	cout << endl;
	cout << "'Create New' Menu" << endl;
	cout << "------------" << endl;
	cout << "(1) Order" << endl;
	cout << "(2) Customer" << endl;
	cout << "(3) Sales Associate" << endl;
	cout << "(4) Robot Model" << endl;
	cout << "(5) Robot Component" << endl;
	cout << "(9) Return to Main Menu" << endl;
	cout << endl;

}

void View::show_reportmenu() {
	cout << endl << endl;
	cout << "===============================" << endl;
	cout << "          ROBOT SHOPPE" << endl;
	cout << "===============================" << endl;
	cout << endl;
	cout << "Report Menu" << endl;
	cout << "------------" << endl;
	cout << "(1) Orders" << endl;
	cout << "(2) Customers" << endl;
	cout << "(3) Sales Associates" << endl;
	cout << "(4) Robot Models" << endl;
	cout << "(5) Robot Parts" << endl;
	cout << "(9) Return to Main Menu" << endl;
	cout << endl;

}

void View::list_parts() {
	cout << endl;
	cout << "----------------------------" << endl;
	cout << "    List of Robot Parts" << endl;
	cout << "----------------------------" << endl;
//	for (int i = 0; i<library.number_of_publications(); ++i) {
	//	cout << i << ") " << //library.publication_to_string(i) << endl;
	//}
}

void View::show_robot() {
	cout << endl;
	cout << "-----------------------" << endl;
	cout << "    View Your Robot" << endl;
	cout << "-----------------------" << endl;
//	for (int i = 0; i<library.number_of_patrons(); ++i) {
//		cout << i << ") " << library.patron_to_string(i) << endl;
	//}
}


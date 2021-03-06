#include "view.h"

#include <iostream>
#include <string>

using namespace std;

void View:: show_mainmenu() {
    cout << endl << endl;
    cout << "===============================" << endl;
    cout << "          ROBOT SHOPPE" << endl;
    cout << "===============================" << endl;
    cout << endl;
    cout << "Shoppe Main Menu" << endl;
    cout << "------------" << endl;
    cout << "Please select your classifictaion." <<endl;
    cout << "(1) Product Manager" << endl;
    cout << "(2) Beloved Customer" << endl;
    cout << "(3) Sales Associate" << endl;
    cout << "(4) Pointed-haired Boss" << endl;
    cout << "------------" << endl;
    cout << "(5) Load Data" << endl;
    cout << "(6) Save Data" << endl;
    cout << "(9) Exit Shoppe" << endl;
    cout << endl;

}

void View:: show_pmmenu() {
    cout << endl << endl;
    cout << "===============================" << endl;
    cout << "          ROBOT SHOPPE" << endl;
    cout << "===============================" << endl;
    cout << endl;
    cout << "Product Manager Menu" << endl;
    cout << "------------" << endl;
    cout << "(1) Create New/Add to Robot Components" << endl;
    cout << "(2) Create New Robot Models" << endl;
    cout << "------------" << endl;
    cout << "(9) Return to Main Menu" << endl;
    cout << endl;
}

void View:: show_bcmenu() {
    cout << endl << endl;
    cout << "===============================" << endl;
    cout << "          ROBOT SHOPPE" << endl;
    cout << "===============================" << endl;
    cout << endl;
    cout << "Beloved Customer Menu" << endl;
    cout << "------------" << endl;
    cout << "(1) Browse Robot Model Catalog" << endl;
    cout << "(2) View My Orders" << endl;
    cout << "------------" << endl;
    cout << "(9) Return to Main Menu" << endl;
    cout << endl;
}

void View:: show_samenu() {
    cout << endl << endl;
    cout << "===============================" << endl;
    cout << "          ROBOT SHOPPE" << endl;
    cout << "===============================" << endl;
    cout << endl;
    cout << "Sales Associate Menu" << endl;
    cout << "------------" << endl;
    cout << "(1) Create New Customer" << endl; 
    cout << "(2) Place Order for Customer" << endl;
    cout << "(3) View Orders" << endl; //Customers attached to this sa
    cout << "(4) Ask for Raise" << endl;
    cout << "------------" << endl;
    cout << "(9) Return to Main Menu" << endl;
    cout << endl;
}

void View:: show_samenu2() {
    cout << endl << endl;
    cout << "===============================" << endl;
    cout << "          ROBOT SHOPPE" << endl;
    cout << "===============================" << endl;
    cout << endl;
    cout << "Sales Associate Menu" << endl;
    cout << "------------" << endl;
    cout << "(1) Place Order for Customer" << endl;
    cout << "------------" << endl;

}


void View:: show_pbmenu() {
    cout << endl << endl;
    cout << "===============================" << endl;
    cout << "          ROBOT SHOPPE" << endl;
    cout << "===============================" << endl;
    cout << endl;
    cout << "Pointed-haired Boss Menu" << endl;
    cout << "------------" << endl;
    cout << "(1) View All Sales Associates" << endl;
    cout << "(2) View Orders" << endl;
    cout << "(3) View Sales Report" << endl;
    cout << "(4) Add New Sales Associate" << endl;
    cout << "(5) Accept Raise" << endl;
    cout << "------------" << endl;
    cout << "(9) Return to Main Menu" << endl;
    cout << endl;
}


void View::list_parts() {
	cout << endl;
	cout << "----------------------------" << endl;
	cout << "    List of Robot Parts" << endl;
	cout << "----------------------------" << endl;
    cout << "Name    | Part#   | Quantity"<< endl;

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


#include "view.h"

#include <iostream>
#include <string>

using namespace std;

/*void View::show_mainmenu() {
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
 */

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
    cout << "(3) Pay My Bills" << endl;
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
    cout << "------------" << endl;
    cout << "(9) Return to Main Menu" << endl;
    cout << endl;
}

void View:: show_pbmenu() {
    cout << endl << endl;
    cout << "===============================" << endl;
    cout << "          ROBOT SHOPPE" << endl;
    cout << "===============================" << endl;
    cout << endl;
    cout << "Pointed-haired Boss Menu" << endl;
    cout << "------------" << endl;
    cout << "(1) View All Customers" << endl;
    cout << "(2) View All Orders" << endl;
    cout << "(3) View Sales Report" << endl;
    cout << "------------" << endl;
    cout << "(7) Load Data" << endl;
    cout << "(8) Save Data" << endl;
    cout << "(9) Return to Main Menu" << endl;
    cout << endl;
}

/*void View::show_createmenu() {
	cout << endl << endl;
	cout << "===============================" << endl;
	cout << "          ROBOT SHOPPE" << endl;
	cout << "===============================" << endl;
	cout << endl;
	cout << "'Create New/Add to existing' Menu" << endl;
	cout << "------------" << endl;
	cout << "(1) Create New Sales Associates" << endl;
	cout << "(2) View Sales Report" << endl;
    cout << "------------" << endl;
	cout << "(9) Return to Main Menu" << endl;
	cout << endl;

}*/

/*void View::show_reportmenu() {
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
 */

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


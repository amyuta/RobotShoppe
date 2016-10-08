#include "view.h"
#include "std_lib_facilities.h"
#include "Arm.h"
#include "Head.h"
#include "torso.h"
#include "controller.h"
#include "shoppe.h"

using namespace std;

int main() {
	Shoppe shoppe;
	Controller controller(shoppe);
	controller.cli();
}

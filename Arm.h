
#ifndef Arm_h
#define Arm_h
#include "view.h"
#include "std_lib_facilities.h"
#include "Head.h"
#include "torso.h"
#include "controller.h"
#include "shoppe.h"

class Arm {
public:
    Arm(int arm_val) : arm_type(arm_val) {}
    
    static const int arm1 = 1;
    static const int arm2 = 2;
    static const int arm3 = 3;
    
    static const int num_arms = 3;
    
    string arm_string() {
        switch(arm_type) {
            case(arm1):return "Arm1";
            case(arm2):return "Arm2";
            case(arm3):return "Arm3";
            default: return "IDK";
        }
    }
    
    int power_consumed(int speed);
    //Need to create .cpp file for power_consumed method
    
    
private:
    int arm_type;
    int power_consumed;
    
};
#endif /* Arm_h */

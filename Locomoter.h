
#ifndef Locomoter_h
#define Locomoter_h
#include "string"

class Locomoter {
public:
    Locomoter(int loco_val) : loco_type(loco_val) {}
    
    static const int loco1 = 1;
    static const int loco2 = 2;
    static const int loco3 = 3;
    
    static const int loco_num = 3;
    
    string loco_string() {
        switch(loco_type) {
            case(loco1):return "Loco1";
            case(loco2):return "Loco2";
            case(loco3):return "Loco3";
            default: return "IDK";
        }
    }
    
    double find_maxspeed();
    double find_powerconsumed();
    //need to create a .cpp file
    
private:
    int loco_type;
    //might need to create more variables for max speed& power consumed
    
    
};




#endif /* Locomoter_h */

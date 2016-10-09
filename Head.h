

#ifndef Head_h
#define Head_h

#include "std_lib_facilities.h"
#include "shoppe.h"

class Head{
public:
    Head(int head_val) : head_type(head_val) {}
    
    static const int head1 = 1;
    static const int head2 = 2;
    static const int head3 = 3;
    
    static const int num_heads = 3;
    
    string head_string() {
        switch(head_type) {
            case(head1):return "Head1";
            case(head2):return "Head2";
            case(head3):return "Head3";
            default: return "IDK";
        }
    }
private:
    int head_type;
};
#endif /* Head_h */

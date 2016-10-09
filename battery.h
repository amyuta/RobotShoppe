#ifndef BATTERY_H
#define BATTERY_H

class Battery {
    private:
     double energy;
     int model;

    public:
     Battery(int type) : model(type) { }

     static const int battery1 = 1;
     static const int battery2 = 2;
     static const int battery3 = 3;

       switch(model) {
         case(battery1):return "battery1";
         case(battery2):return "battery2";
         case(battery3):return "battery3";

       }

 };


#endif // BATTERY_H

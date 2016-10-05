#include <head.h>
#include <arm.h>
#include <locomotor.h>
#include <battery.h>

#ifndef TORSO_H
#define TORSO_H

class Torso {
    private:
     int model;

    public:
     Torso(int type) : model(type)) { }

     static const int torso1 = 1;
     static const int torso2 = 2;
     static const int torso3 = 3;

       switch(model) {
         case(torso1):return "torso1";
         case(torso2):return "torso2";
         case(torso3):return "torso3";

       }

 };
 #endif


#endif // TORSO_H
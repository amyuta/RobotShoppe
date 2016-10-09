#ifndef TORSO_H
#define TORSO_H

#include "std_lib_facilities.h"
#include "shoppe.h"
#include "string"

class Torso {
    private:
     int model;

    public:
     Torso(int type) : model(type)) { }

     static const int torso1 = 1;
     static const int torso2 = 2;
     static const int torso3 = 3;

     string torso_string() {
       switch(model) {
         case(torso1):return "torso1";
         case(torso2):return "torso2";
         case(torso3):return "torso3";
               default: return "IDK";

       }
    }

 };
 #endif



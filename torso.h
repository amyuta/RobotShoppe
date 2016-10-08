#ifndef TORSO_H
#define TORSO_H

#include "view.h"
#include "std_lib_facilities.h"
#include "Arm.h"
#include "Head.h"
#include "controller.h"
#include "shoppe.h"

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



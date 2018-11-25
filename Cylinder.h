//
// Created by illya on 11/2/2018.
//

#ifndef OOP_LAB3_CYLINDER_H
#define OOP_LAB3_CYLINDER_H


#include <iostream>
#include "Interface.h"

class Cylinder: public Interface {
public:
    inline Cylinder(double h, double aR): Interface(h, aR, aR) {};
    inline ~Cylinder() override {std::cout << "Cylinder deleted" << std::endl;};
    double area() override;
    double volume() override;
};


#endif //OOP_LAB3_CYLINDER_H

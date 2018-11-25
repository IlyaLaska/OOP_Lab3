//
// Created by illya on 11/2/2018.
//

#ifndef OOP_LAB3_ELLIPTICCYLINDER_H
#define OOP_LAB3_ELLIPTICCYLINDER_H

#include "Interface.h"
#include <iostream>

class EllipticCylinder: public Interface {
public:
    inline EllipticCylinder(double h, double aR, double bR): Interface(h, aR, bR) {};
    inline ~EllipticCylinder() override {std::cout << "Elliptic Cylinder deleted" << std::endl;};
    double area()override;
    double volume() override;
};


#endif //OOP_LAB3_ELLIPTICCYLINDER_H

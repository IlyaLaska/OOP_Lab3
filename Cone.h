//
// Created by illya on 11/2/2018.
//

#ifndef OOP_LAB3_CONE_H
#define OOP_LAB3_CONE_H

#include "Interface.h"
#include <iostream>

class Cone: public Interface {
public:
    inline Cone(double h, double aR): Interface(h, aR, aR) {};
    inline ~Cone() override {std::cout << "Cone deleted" << std::endl;};
    double area()override;
    double volume() override;
};


#endif //OOP_LAB3_CONE_H

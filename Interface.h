//
// Created by illya on 11/2/2018.
//

#ifndef OOP_LAB3_INTERFACE_H
#define OOP_LAB3_INTERFACE_H

#include <iostream>


class Interface {
protected:
    double h;
    double aR;
    double bR;
public:
    Interface(double height, double aRadius, double bRadius): h(height), aR(aRadius), bR(bRadius) {};
    virtual double area() = 0;
    virtual double volume() = 0;
    virtual ~Interface() {std::cout << "Virtual destructor called" << std::endl;};
};


#endif //OOP_LAB3_INTERFACE_H

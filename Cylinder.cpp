//
// Created by illya on 11/2/2018.
//

#include <math.h>

#include "Cylinder.h"

double Cylinder::area() {
    double area = 2 * (M_PI * aR * aR) + (2 * M_PI * aR * h);
    return area;
}

double Cylinder::volume() {
    double volume = M_PI * aR * aR * h;
    return volume;
}

//
// Created by illya on 11/2/2018.
//

#include <math.h>

#include "Cone.h"

double Cone::area() {
    double l = sqrt(h*h + aR*aR);
    double area = (M_PI * aR * aR) + (M_PI * aR * l);
    return area;
}

double Cone::volume() {
    double volume = ((double) 1/3) * M_PI * aR * aR * h;
    return volume;
}

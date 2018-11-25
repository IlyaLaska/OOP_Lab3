//
// Created by illya on 11/2/2018.
//

#include <math.h>
#include <iostream>

#include "EllipticCylinder.h"

double EllipticCylinder::area() {
    //Approximated
    double ellipseCircumference = M_PI * (aR + bR);
    //"exact" - 7 terms
    double n = ((aR - bR) * (aR - bR)) / ((aR + bR) * (aR + bR));
    double ellipseCircumferenceExact = 0;
    double binomialCoefficients[7] = {1, (double)1/4, (double)1/64, (double)1/256, (double)25/16384,
                                    (double)49/65536, (double)441/1048576};
    for (int i = 0; i < 7; ++i) {
        ellipseCircumferenceExact += M_PI * (aR + bR) * binomialCoefficients[i] * pow(n, i);
    }
    double area = 2 * (M_PI * aR * bR) + (ellipseCircumferenceExact * h);
    double areaApprox = 2 * (M_PI * aR * bR) + (ellipseCircumference * h);
//    return areaApprox; //uncomment to use approximated value
    return area;
}

double EllipticCylinder::volume() {
    double volume = M_PI * aR * bR * h;
    return volume;
}

//TODO Calculate ellipse circumference

#include <iostream>

#include "Interface.h"
#include "Cylinder.h"
#include "Cone.h"
#include "EllipticCylinder.h"

int main() {
    Interface* cylinder = new Cylinder(10, 5);
    std::cout << "Cylinder:" << std::endl;
    std::cout << "Area (should be 471,239):  " << cylinder->area() << std::endl;
    std::cout << "Volume (should be 785,398):  " << cylinder->volume() << std::endl;

    Interface* cone = new Cone(10, 5);
    std::cout << "Cone:" << std::endl;
    std::cout << "Area (should be 254,16):  " << cone->area() << std::endl;
    std::cout << "Volume (should be 261,799):  " << cone->volume() << std::endl;

    Interface* ellipticCylinder = new EllipticCylinder(10, 5, 3);
    std::cout << "Elliptic Cylinder:" << std::endl;
    std::cout << "Area (should be 345.5752 (approximated) ):  " << ellipticCylinder->area() << std::endl;
    std::cout << "Volume (should be 471.2389):  " << ellipticCylinder->volume() << std::endl;
    delete cylinder;
    delete cone;
    delete ellipticCylinder;
    return 0;
}
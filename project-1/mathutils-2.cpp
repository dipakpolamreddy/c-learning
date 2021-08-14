#include "mathutils.h"
double area(double length, double width) {

    return length * width;
}
double area(double length) {
    return length * length;
}

double area(Rectangle rectangle) {
    return rectangle.length * rectangle.width;
}

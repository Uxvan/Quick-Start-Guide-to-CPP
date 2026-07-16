#include "Circle.h"

Circle::Circle (double d1) {d=d1;};
double Circle::area() {
    double s=PI*d*d/4;
    return s;
}
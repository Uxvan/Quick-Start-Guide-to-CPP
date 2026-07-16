#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle: public Shape{
private:
    double PI=3.14,d;
public:
    Circle(double d);
    double area() override;
};
#endif
#include <iostream>
#include "Shape.h"
#include "Circle.h"
int main(){
    
    Circle c(2);
    std::cout<< c.area() << std::endl;
    return 0;
}
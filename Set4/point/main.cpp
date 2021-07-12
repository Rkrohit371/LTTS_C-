#include<iostream>
#include "point.h"
#include "point.cpp"

int main() {
    Point<float> p1(23, 4);
    p1.display();
    p1.distanceFromOrigin();
    Quadrant q1 = p1.quadrant();
    std::cout<<"Quadrant is: "<<q1<<std::endl;
    std::cout<<"------------------------"<<std::endl;

    Point<float> p2(-2, -4);
    p2.display();
    p2.distanceFromOrigin();
    Quadrant q2 = p2.quadrant();
    std::cout<<"Quadrant is: "<<q2<<std::endl;
    std::cout<<"------------------------"<<std::endl;

    return 0;
}
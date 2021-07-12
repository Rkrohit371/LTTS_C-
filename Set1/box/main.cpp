#include<iostream>
#include "box.h"


int main() {
    Box obj1 = Box(12, 23, 24);
    obj1.display();
    Box obj2 = Box();
    obj2.display();
    Box obj3(obj1);
    obj3.display();
    std::cout<<"Volume: "<<obj1.volume()<<std::endl;
    return 0;
}
#include"mytime.h"
#include<iostream>

int main() {
    MyTime t1 = MyTime(3, 2, 30);
    MyTime t2 = MyTime(2, 1, 50);
    MyTime t3 = t1 + t2;
    t3.display();

    MyTime t4 = MyTime(3, 2, 1);
    MyTime t5 = MyTime(2, 1, 5);
    bool t6 = t4 < t5;
    std::cout<<t6<<std::endl;

    std::cout<<t1<<std::endl;

    return 0;
}
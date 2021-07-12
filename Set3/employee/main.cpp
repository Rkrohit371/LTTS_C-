#include<iostream>
#include "employee.h"

int main() {
    Engineer e1("1", "Rohit", 100000, 1, 100);
    e1.display();

    Manager m1("11", "Kartik", 150000, 4, 101, 5);
    m1.display();

    return 0;
}
#include<iostream>
#include "complex.h"
#include "complex.cpp"

int main() {
    Complex<int> c1(22, 3);
    c1.display();
    Complex<float> c2(2.9, 23.2);
    c2.display();

    return 0;
}
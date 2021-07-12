#include<iostream>
#include "complex.h"

int main() {
    Complex c1 = Complex(2,2);
    Complex c2 = Complex(2,2);
    Complex c3 = c1 + c2;     
    c3.display();

    Complex c4 = c2 - c1;
    c4.display();

    Complex c5 = c1 * c2;
    c5.display(); 

    Complex c6 = Complex(5, 5);
    ++c6;
    c6.display();

    Complex c7 = Complex(5, 5);
    c7.display();
    c7++;
    c7.display();

    bool isSame = c1 == c2;
    std::cout<<(isSame? "Complex numbers are same." : "Complex numbers are not same.")<<std::endl;

    Complex c8(21, 4);
    std::cout<<c8<<std::endl;

    return 0;
}
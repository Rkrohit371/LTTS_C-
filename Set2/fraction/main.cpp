#include<iostream>
#include "fraction.h"

int main() {
    Fraction f1;
    f1.display();
    std::cout<<"Whether fraction is simplified? "<<(f1.isSimplest()?"True":"False")<<std::endl;
    Fraction f2 = f1.simplify();
    f2.display();

    Fraction f3(10, 12);
    f3.display();
    std::cout<<"Whether fraction is simplified? "<<(f3.isSimplest()?"True":"False")<<std::endl;
    Fraction f4 = f3.simplify();
    f4.display();

    return 0;
}
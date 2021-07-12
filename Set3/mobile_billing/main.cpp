#include<iostream>
#include "mobile.h"

int main() {
    PrepaidCustomer p1 = PrepaidCustomer("23", "Rohit", "9872342342", 30);
    p1.display();
    p1.credit(2);
    p1.makeCall(4);
    std::cout<<"Balance is: "<<p1.getBalance()<<std::endl;
    p1.display();

    PostpaidCustomer p2 = PostpaidCustomer("23", "Rahul", "9872342342", 30, 5);
    p2.display();
    p2.credit(2);
    p2.makeCall(4);
    std::cout<<"Balance is: "<<p2.getBalance()<<std::endl;
    p2.display();

    return 0;
}
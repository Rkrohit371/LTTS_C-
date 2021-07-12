#include<iostream>
#include "customer_class.h"
// #include "customer_class.cpp"

int main() {
   Customer cust1 = Customer("2334", "Rohit", "7832424234", 100);
   cust1.dispay();
   cust1.credit(2);
   std::cout<<"Available balance is: "<<cust1.getBalance()<<std::endl;
   std::cout<<"------------------------------"<<std::endl;
   cust1.makeCall(3);
   cust1.dispay();
    return 0;
}
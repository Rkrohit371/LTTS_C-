#include<iostream>
#include "banking.h"

int main() {
    SavingsAccount s1 = SavingsAccount("Rohit", "232434234", 100);
    s1.display();
    s1.credit(100);
    s1.debit(50);
    s1.display();

    CreditAccount c1 = CreditAccount("Mohit", "21435456", 1000);
    c1.display();
    c1.credit(100);
    c1.debit(50);
    c1.display();

    return 0;
}
#include<iostream>
#include "account_class.h"

int main() {
    Account acc1 = Account("123456789", "Rohit", 100);
    acc1.display();
    acc1.debit(2);
    acc1.credit(10);
    acc1.debit(2);
    acc1.display();
    Account acc2 = Account("323234324", "Raj");
    acc2.display();
    acc2.debit(2);
    acc2.credit(20);
    acc2.debit(2);
    acc2.display();
    Account acc3(acc1);
    acc3.display();
    acc3.debit(2);
    acc3.credit(10);
    acc3.debit(2);
    acc3.display();
    return 0;
}
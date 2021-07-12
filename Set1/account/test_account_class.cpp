#include "account_class.h"
#include<gtest/gtest.h>

TEST(Account, EmptyConstructor) {
    Account a1;
    ASSERT_EQ("N/A", a1.getAccName());
    ASSERT_EQ("N/A", a1.getAccNumber());
    ASSERT_EQ(0, a1.getBalance());
}

TEST(Account, ParamConstructor) {
    Account a1("234234","Rohit", 100000);
    ASSERT_EQ("Rohit", a1.getAccName());
    ASSERT_EQ("234234", a1.getAccNumber());
    ASSERT_EQ(100000, a1.getBalance());

    Account a2(a1);
    ASSERT_EQ("Rohit", a2.getAccName());
    ASSERT_EQ("234234", a2.getAccNumber());
    ASSERT_EQ(100000, a2.getBalance());
}

    
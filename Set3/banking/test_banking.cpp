#include "banking.h"
#include<gtest/gtest.h>

TEST(SavingsAccount, ParamConstructorSaving) {
    SavingsAccount e1( "Rohit","1000000", 100);
    ASSERT_EQ("1000000", e1.getaccNumber());
    ASSERT_EQ("Rohit", e1.getaccName());
    ASSERT_EQ(100, e1.getBalance());
}

TEST(CreditAccount, ParamConstructorCredit) {
    CreditAccount e1( "Rohit","1000000", 100);
    ASSERT_EQ("1000000", e1.getaccNumber());
    ASSERT_EQ("Rohit", e1.getaccName());
    ASSERT_EQ(100, e1.getBalance());
}
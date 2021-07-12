#include "customer_class.h"
#include<gtest/gtest.h>

TEST(Customer, EmptyConstructor) {
    Customer cust1 = Customer("2334", "Rohit", "7832424234", 100);;
    ASSERT_EQ("2334", cust1.getID());
    ASSERT_EQ("Rohit", cust1.getName());
    ASSERT_EQ("7832424234", cust1.getPhone());
    ASSERT_EQ(100, cust1.getType());
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
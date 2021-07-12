#include "ip_address.h"
#include<gtest/gtest.h>

TEST(IPAddress, EmptyConstructor) {
    IPAddress c1;
    ASSERT_EQ(2130706433, c1.getIpValue());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
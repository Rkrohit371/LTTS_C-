#include "mytime.h"
#include<gtest/gtest.h>

TEST(MyTime, EmptyParameter) {
    MyTime c1;
    ASSERT_EQ(0, c1.getHours());
    ASSERT_EQ(0, c1.getMinutes());
    ASSERT_EQ(1, c1.getSeconds());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
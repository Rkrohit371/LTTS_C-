#include "box.h"
#include<gtest/gtest.h>

TEST(Box, EmptyConstructor) {
    Box b1;
    ASSERT_EQ(2, b1.breadth());
    ASSERT_EQ(3, b1.height());
    ASSERT_EQ(12, b1.length());
    ASSERT_EQ(72, b1.volume());
}

TEST(Box, ParamAllConstructor) {
    Box b2 = Box(2,3,4);
    ASSERT_EQ(2, b2.length());
    ASSERT_EQ(3, b2.breadth());
    ASSERT_EQ(4, b2.height());
    ASSERT_EQ(24, b2.volume());
}

TEST(Box, ParamConstructor) {
    Box b3 = Box(2);
    ASSERT_EQ(2, b3.length());
    ASSERT_EQ(2, b3.breadth());
    ASSERT_EQ(3, b3.height());
    ASSERT_EQ(12, b3.volume());

    Box b4 = Box(b3);
    ASSERT_EQ(2, b4.length());
    ASSERT_EQ(2, b4.breadth());
    ASSERT_EQ(3, b4.height());
    ASSERT_EQ(12, b4.volume());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
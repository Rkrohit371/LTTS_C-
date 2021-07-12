#include "point_class.h"
#include<gtest/gtest.h>

TEST(Point, EmptyConstructor) {
    Point c1;
    ASSERT_EQ(0, c1.getmx());
    ASSERT_EQ(0, c1.getmy());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
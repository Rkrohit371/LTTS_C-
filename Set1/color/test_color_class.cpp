#include "color_class.h"
#include<gtest/gtest.h>

TEST(Color, EmptyConstructor) {
    Color c1;
    ASSERT_EQ(0xFF0000, c1.getmr());
    ASSERT_EQ(0x00FF00, c1.getmg());
    ASSERT_EQ(0x0000FF, c1.getmb());
    ASSERT_EQ(BLUE, c1.getColortype());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
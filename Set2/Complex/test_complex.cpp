#include "complex.h"
#include<gtest/gtest.h>

TEST(Complex, EmptyParameter) {
    Complex c1;
    ASSERT_EQ(0, c1.real());
    ASSERT_EQ(0, c1.image());
}

TEST(Complex, ParameterConstructor) {
    Complex c1(10, 10);
    ASSERT_EQ(10, c1.real());
    ASSERT_EQ(10, c1.image());

    Complex c2(10);
    ASSERT_EQ(10, c2.real());
    ASSERT_EQ(0, c2.image());

    Complex c3(10, 20);
    ASSERT_EQ(10, c3.real());
    ASSERT_EQ(20, c3.image());
}

TEST(Complex, plus) {
    Complex c1(10, 10);
    Complex c2(10, 10);
    Complex c3 = c1 + c2;
    ASSERT_EQ(20, c3.real());
    ASSERT_EQ(20, c3.image());
}

TEST(Complex, minus) {
    Complex c1(20, 20);
    Complex c2(10, 10);
    Complex c3 = c1 - c2;
    ASSERT_EQ(10, c3.real());
    ASSERT_EQ(10, c3.image());
}

TEST(Complex, multiply) {
    Complex c1(1, 3);
    Complex c2(5, 2);
    Complex c3 = c1 * c2;
    ASSERT_EQ(-1, c3.real());
    ASSERT_EQ(17, c3.image());
}

TEST(Complex, preplusplus) {
    Complex c1(1, 3);
    ++c1;
    ASSERT_EQ(2, c1.real());
    ASSERT_EQ(4, c1.image());
}

TEST(Complex, postplusplus) {
    Complex c1(1, 3);
    c1++;
    ASSERT_EQ(2, c1.real());
    ASSERT_EQ(4, c1.image());
}

int main(int argc, char ** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include "fraction.h"
#include<gtest/gtest.h>

TEST(Fraction, NoParam) {
    Fraction c1;
    ASSERT_EQ(0, c1.getNumerator());
    ASSERT_EQ(1, c1.getDenominator());
}

TEST(Fraction, ParamConstructor) {
    Fraction c1(12,34);
    ASSERT_EQ(12, c1.getNumerator());
    ASSERT_EQ(34, c1.getDenominator());

    Fraction c2(12);
    ASSERT_EQ(12, c2.getNumerator());
    ASSERT_EQ(1, c2.getDenominator());
}

TEST(Fraction, plus) {
    Fraction c1(12, 10);
    Fraction c2(10, 12);
    Fraction c3 = c1 + c2;
    ASSERT_EQ(22, c3.getNumerator());
    ASSERT_EQ(22, c3.getDenominator());
}

TEST(Fraction, minus) {
    Fraction c1(2, 10);
    Fraction c2(10, 2);
    Fraction c3 = c1 - c2;
    ASSERT_EQ(-8, c3.getNumerator());
    ASSERT_EQ(8, c3.getDenominator());
}

TEST(Fraction, multiply) {
    Fraction c1(2, 10);
    Fraction c2(10, 2);
    Fraction c3 = c1 * c2;
    ASSERT_EQ(20, c3.getNumerator());
    ASSERT_EQ(20, c3.getDenominator());
}
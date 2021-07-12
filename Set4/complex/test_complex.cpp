#include"complex.cpp"
#include<iostream>
#include<gtest/gtest.h>

TEST(Complex,DefaultConstructor){
    Complex<int> C1;
    ASSERT_EQ(0,C1.getReal());
    ASSERT_EQ(0,C1.getImage());
}

TEST(Complex,paramConstructor){
    Complex<int> C1(4,5);
    ASSERT_EQ(4,C1.getReal());
    ASSERT_EQ(5,C1.getImage());
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include"point.cpp"
#include<iostream>
#include<gtest/gtest.h>

TEST(Point, DefaultConstructor){
    Point<int> C1;
    ASSERT_EQ(0,C1.getmx());
    ASSERT_EQ(0,C1.getmy());
}

TEST(Point,paramConstructor){
    Point<int> C1(4,5);
    ASSERT_EQ(4,C1.getmx());
    ASSERT_EQ(5,C1.getmy());
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
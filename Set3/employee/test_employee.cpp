#include "employee.h"
#include<gtest/gtest.h>

TEST(Engineer, ParamConstructor) {
    Engineer e1("1","Rohit",1000000, 1, 100);
    ASSERT_EQ("1", e1.getid());
    ASSERT_EQ("Rohit", e1.getName());
    ASSERT_EQ(1000000, e1.getSalary());
    ASSERT_EQ(100, e1.getprojectcode());
    ASSERT_EQ(1, e1.getExp());
}

TEST(Manager, ParamConstructorManager) {
    Manager e1("100","Kartik",1500000, 10, 101, 10);
    ASSERT_EQ("100", e1.getid());
    ASSERT_EQ("Kartik", e1.getName());
    ASSERT_EQ(1500000, e1.getSalary());
    ASSERT_EQ(101, e1.getprojectcode());
    ASSERT_EQ(10, e1.getExp());
    ASSERT_EQ(10, e1.getreportees());
}
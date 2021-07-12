#include "complex.h"
#include<gtest/gtest.h>

// template<typename T>
TEST(Complex, ParamConstructor) {
    Complex<int> obj(1, 1);
    ASSERT_EQ(1, obj.getReal());
}
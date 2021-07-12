#include "complex.h"
#include<gtest/gtest.h>

using testing::Types;
typedef Types<int, float> Implementations;

TYPED_TEST(Complex, test1)
{
    Complex<TypeParam> object(1.0,1.0); // not Foo<T>
    // object.m_real = 1.0 ;

    ASSERT_FLOAT_EQ(object.m_real, 1.0) ;
} 
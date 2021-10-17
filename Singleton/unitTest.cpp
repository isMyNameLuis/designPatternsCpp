#include <gtest/gtest.h>
#include "Singleton.h"

// Demonstrate some basic assertions.
TEST(SingletonTest, BasicAssertions) 
{
    Singleton* singleton_test1 = Singleton::GetInstance("Test 1 Singleton");
    Singleton* singleton_test2 = Singleton::GetInstance("Test 2 Singleton");
    // Expect equality.
    EXPECT_EQ(singleton_test1->sValue, singleton_test2->sValue);
}
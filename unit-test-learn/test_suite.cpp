//
//  test_suite.cpp
//  unit-test-learn
//
//  Created by HENRY BERGIN on 10/1/17.
//  Copyright © 2017 Henry Bergin. All rights reserved.
//

#include <stdio.h>
#include "gtest/gtest.h"

int addNumbers(int a, int b); // forward declaration for adding from test_funcs

TEST(a_suite_testing, fail_test)
{ // fails on purpose
    EXPECT_TRUE(0);
    ASSERT_EQ(1.0, 0.0);
}

TEST(a_suite_testing, check_addition)
{
    ASSERT_EQ(addNumbers(10, 10), 20);
    ASSERT_EQ(addNumbers(-10, 10), 0);
    ASSERT_EQ(addNumbers(0, 0), 0);
    ASSERT_EQ(addNumbers(10, 0), 10);
    ASSERT_EQ(addNumbers(0, 10), 10);
}
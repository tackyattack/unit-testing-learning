//
//  main.cpp
//  unit-test-learn
//
//  Created by HENRY BERGIN on 10/1/17.
//  Copyright © 2017 Henry Bergin. All rights reserved.

// How you can organize unit tests: maybe each class has a unit test class? Keep all the unit tests in a separate
// location, all together. That way it makes it easier for packaging.

#include <iostream>
#include <stdio.h>
#include "gtest/gtest.h"

int main(int argc, char **argv) {
    
    ::testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    
    std::cout << "Hello, World!\n";
    
    return 0;
}

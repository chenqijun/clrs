//
//  main.cpp
//  sorting-implementation
//
//  Created by qijun chen on 3/15/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include <iostream>
#include "insertionsort.hpp"
#include "insertionsort-nonincreasing.hpp"
#include "mergesort.hpp"
#include "insertionsort-recursion.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    testInsertionSort();
    testInsertionSortNonIncreasing();
    testMergeSort();
    insertionSortRecursion a;
    a.test();
    return 0;
}

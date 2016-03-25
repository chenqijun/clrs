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
#include "twosum.hpp"
#include "mergesort-with-insertionsort.hpp"
#include "bubblesort.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    testInsertionSort();
    testInsertionSortNonIncreasing();
    testMergeSort();
    insertionSortRecursion a;
    a.test();
    twoSum ts;
    ts.test();

    MergesortWithInsertionSort mwis;
    mwis.test();
    
    BubbleSort bs;
    bs.test();
    return 0;
}

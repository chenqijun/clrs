//
//  main.cpp
//  insertionSort
//
//  Created by qijun chen on 3/15/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include <iostream>
#include "CInsertionSortHandler.hpp"

template <typename Compare>
void test(Compare comp) {
    std::cout << comp(3,2);
}

bool comp2(int x, int y) {
    return (x > y);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    testInsertionSort();
    return 0;
}

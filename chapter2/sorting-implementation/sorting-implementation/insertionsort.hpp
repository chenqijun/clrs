//
//  insertionsort.hpp
//  sorting-implementation
//
//  Created by qijun chen on 3/15/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#ifndef insertionsort_hpp
#define insertionsort_hpp

#include <stdio.h>



#include <stdio.h>
#include <vector>
#include <iostream>

template<typename T, typename Compare>
std::vector<T> insertionSort(std::vector<T> &arr, Compare comp);

bool testInsertionSortCompare(int x, int y);

void testInsertionSort();

#endif /* insertionsort_hpp */

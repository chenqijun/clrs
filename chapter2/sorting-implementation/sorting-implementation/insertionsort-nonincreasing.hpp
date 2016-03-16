//
//  insertionsort-nonincreasing.hpp
//  sorting-implementation
//
//  Created by qijun chen on 3/15/16.
//  Copyright © 2016 cqj. All rights reserved.
//

/** 2.1-2 **/

#ifndef insertionsort_nonincreasing_hpp
#define insertionsort_nonincreasing_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;
template<typename T, typename Compare>
vector<T> insertionSortNonIncreasing(vector<T> input, Compare comp);

bool insertionSortNonIncreasingTestCompare(int x, int y);

void testInsertionSortNonIncreasing();
#endif /* insertionsort_nonincreasing_hpp */

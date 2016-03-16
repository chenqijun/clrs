//
//  CInsertionSortHandler.hpp
//  insertionSort
//
//  Created by qijun chen on 3/15/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#ifndef CInsertionSortHandler_hpp
#define CInsertionSortHandler_hpp


#include <stdio.h>
#include <vector>
#include <iostream>

template<typename T, typename Compare>
std::vector<T> insertionSort(std::vector<T> &arr, Compare comp);

bool isGreater(int x, int y);

void testInsertionSort();

#endif /* CInsertionSortHandler_hpp */

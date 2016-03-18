//
//  mergesort.hpp
//  sorting-implementation
//
//  Created by Qijun Chen on 3/17/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#ifndef mergesort_hpp
#define mergesort_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

template <typename T, typename Compare>
vector<T> mergesort(vector<T> &arr, Compare comp);

template <typename T, typename Compare>
vector<T> msSort(vector<T> &arr, int left, int right, Compare comp);

template <typename T, typename Compare>
vector<T> msMerge(vector<T> &arrA, vector<T> &arrB, Compare comp);

bool testMergeSortCompare(int x, int y);
void testMergeSort();

#endif /* mergesort_hpp */

//
//  mergesort-with-insertionsort.hpp
//  sorting-implementation
//
//  Created by qijun chen on 3/19/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#ifndef mergesort_with_insertionsort_hpp
#define mergesort_with_insertionsort_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include "basic.hpp"
#include "math.h"

using namespace std;

class MergesortWithInsertionSort {
public:
    void test();
    vector<int> mergeSortWithInsertionSort(vector<int> &arr, int left, int right);
    vector<int> insertionSort(vector<int> &arr, int start, int end);
    vector<int> merge(vector<int> arr1, vector<int> arr2);
    
private:
    
    
};
#endif /* mergesort_with_insertionsort_hpp */

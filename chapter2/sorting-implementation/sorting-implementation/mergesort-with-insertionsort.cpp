//
//  mergesort-with-insertionsort.cpp
//  sorting-implementation
//
//  Created by qijun chen on 3/19/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "mergesort-with-insertionsort.hpp"

void MergesortWithInsertionSort::test() {
    vector<int> testCase = {
        1, 2, 3, 5, 4, 0
    };
    string s = "input";
    Basic::printVector(testCase, s);
    
    vector<int> result = mergeSortWithInsertionSort(testCase, 0, testCase.size() - 1);
    Basic::printVector(result, "result");
}

vector<int> MergesortWithInsertionSort::mergeSortWithInsertionSort(vector<int> &arr, int left, int right) {
    int insertionSortMax = log2()
    vector<int> result;
    if (left == right) {
        result.push_back(
    }
}

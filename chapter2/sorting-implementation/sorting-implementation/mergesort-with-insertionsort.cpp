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
    int insertionSortMax = log2(arr.size());
    if (right - left <= insertionSortMax) {
        return insertionSort(arr, left, right);
    }
    vector<int> result;
    if (left == right) {
        result.push_back(result[left]);
        return result;
    } else if (left > right) {
        return result;
    }
    
    int mid = (left + right) / 2;
    vector<int> sortedLeftSide = mergeSortWithInsertionSort(arr, left, mid);
    vector<int> sortedRightSide = mergeSortWithInsertionSort(arr, mid + 1, right);
    return merge(sortedLeftSide, sortedRightSide);
}

vector<int> MergesortWithInsertionSort::insertionSort(vector<int> &arr, int start, int end) {
    vector<int> result;
    if (start > end) {
        return result;
    }
    result.resize(end - start + 1);
    result[start - start] = arr[start];
    for (int i = start + 1; i <= end; i++) {
        int key = arr[i];
        int j = i - start;
        while (j > 0 && result[j - 1] > key) {
            result[j] = result[j - 1];
            j --;
        }
        result[j] = key;
    }
    return result;
}

vector<int> MergesortWithInsertionSort::merge(vector<int> arr1, vector<int> arr2) {
    vector<int> result;
    int i1 = 0;
    int i2 = 0;
    while (i1 != arr1.size() - 1 && i2 != arr2.size()) {
        if (arr1[i1] <= arr2[i2]) {
            result.push_back(arr1[i1]);
            i1 ++;
        } else {
            result.push_back(arr2[i2]);
            i2++;
        }
    }
    while (i1 != arr1.size()) {
        result.push_back(arr1[i1]);
        i1++;
    }
    while (i2 != arr2.size()) {
        result.push_back(arr2[i2]);
        i2++;
    }
    return result;
}
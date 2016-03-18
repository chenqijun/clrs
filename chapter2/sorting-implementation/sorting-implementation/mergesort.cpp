//
//  mergesort.cpp
//  sorting-implementation
//
//  Created by Qijun Chen on 3/17/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "mergesort.hpp"


template <typename T, typename Compare>
vector<T> mergesort(vector<T> &arr, Compare comp) {
    return msSort(arr, 0, arr.size() - 1, comp);
}

template <typename T, typename Compare>
vector<T> msSort(vector<T> &arr, int left, int right, Compare comp) {
    vector<T> result;
    if (right - left < 0) {
        return result;
    } else if (right - left == 0) {
        result.push_back(arr[left]);
        return result;
    }
    
    int mid = (left + right) / 2;
    vector<T> arrA = msSort(arr, left, mid, comp);
    vector<T> arrB = msSort(arr, mid + 1, right, comp);
    return msMerge(arrA, arrB, comp);
}

template <typename T, typename Compare>
vector<T> msMerge(vector<T> &arrA, vector<T> &arrB, Compare comp) {
    vector<T> result;
    int indexA = 0;
    int indexB = 0;
    while (indexA < arrA.size() && indexB < arrB.size()) {
        if (comp(arrA[indexA], arrB[indexB]) == true) {
            result.push_back(arrA[indexA]);
            indexA ++;
        } else {
            result.push_back(arrB[indexB]);
            indexB ++;
        }
    }
    while (indexA < arrA.size()) {
        result.push_back(arrA[indexA]);
        indexA++;
    }
    while (indexB < arrB.size()) {
        result.push_back(arrB[indexB]);
        indexB++;
    }
    return result;
}

bool testMergeSortCompare(int x, int y) {
    return (x > y);
}

void testMergeSort() {
    vector<int> testCase = {
        0, 1, 0, 1, 0
    };
    cout << "test case:" << endl;
    for (int i = 0; i < testCase.size(); i++) {
        cout << testCase[i] << " ";
    }
    cout << "result :" << endl;
    vector<int> result = mergesort(testCase, testMergeSortCompare);
    for (int i = 0; i < result.size(); i++) {
        printf("%d ", result[i]);
    }
    cout << endl;
}
//
//  insertionsort-recursion.cpp
//  sorting-implementation
//
//  Created by Qijun Chen on 3/17/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "insertionsort-recursion.hpp"
template <typename T, typename Compare>
void insertionSortRecursion::sort(vector<T> &arr, Compare comp) {
    if (arr.size() < 2) {
        return;
    }
    insertionSort(arr, 1, comp);
}

template<typename T, typename Compare>
void insertionSortRecursion::insertionSort(vector<T> &arr, int curIndex, Compare comp) {
    if (curIndex == arr.size()) {
        return;
    }
    int key = arr[curIndex];
    int index = curIndex;
    while (index > 0 && comp(arr[index - 1], key)) {
        arr[index] = arr[index - 1];
        index--;
    }
    arr[index] = key;
    insertionSort(arr, curIndex + 1, comp);
}

bool insertionSortRecursion::fComp(int x, int y) {
    return (x > y);
}

void insertionSortRecursion::test() {
    vector<int> testCase = {
        0, 1, 1, 0, 1, -1
    };
    printf("insertion sort recursioni \n");
    
    sort(testCase, &insertionSortRecursion::fComp);
    for (int i = 0; i < testCase.size(); i++) {
        cout << testCase[i] << " ";
    }
    cout << endl;
}
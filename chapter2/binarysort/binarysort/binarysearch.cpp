//
//  binarysort.cpp
//  binarysort
//
//  Created by qijun chen on 3/18/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "binarysearch.hpp"

template <typename T, typename Compare>
int binarySearch::search(vector<T> &arr, Compare comp, int target) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (comp(target, mid)) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1;
}

bool binarySearch::compare(int x, int y) {
    return (x > y);
}

void binarySearch::test() {
    vector<int> testCase = {
        0, 1, 2, 4, 8
    };
    
    printf("test binary search\nindex: %d", search(testCase, &binarySearch::compare, 1));
}
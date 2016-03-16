//
//  linearsearch.cpp
//  linearSearch
//
//  Created by Qijun Chen on 3/16/16.
//  Copyright © 2016 Qijun Chen. All rights reserved.
//

#include "linearsearch.hpp"

int linearSearch(vector<int> &arr, int target) {
    if (arr.size() == 0) {
        return -1;
    }
    int result = 0;
    int lastElement = arr[arr.size() - 1];
    arr[arr.size() - 1] = target;
    while (arr[result] != target) {
        result ++;
    }
    if (result == (arr.size() - 1)) {
        if (target != lastElement) {
            result = -1;
        }
    }
    return result;
}

void testLinearSearch() {
    vector<int> testCase = {
        
    };
    int target = 1;
    cout << linearSearch(testCase, target) << endl;
}
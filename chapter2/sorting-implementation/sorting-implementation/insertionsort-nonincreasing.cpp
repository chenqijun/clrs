//
//  insertionsort-nonincreasing.cpp
//  sorting-implementation
//
//  Created by qijun chen on 3/15/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "insertionsort-nonincreasing.hpp"

template<typename T, typename Compare>
vector<T> insertionSortNonIncreasing(vector<T> input, Compare comp) {
    vector<T> result(input.size());
    if (input.size() == 0) {
        return result;
    }
    result[0] = input[0];
    
    for (int i = 1; i < input.size(); i++) {
        T key = input[i];
        int j = i - 1;
        while (j >= 0 && comp(key, result[j]) == true) {
            result[j + 1] = result[j];
            j--;
        }
        result[j + 1] = key;
    }
    
    return result;
}

bool insertionSortNonIncreasingTestCompare(int x, int y) {
    return (x > y);
}

void testInsertionSortNonIncreasing() {
    vector<int> testCase = {
        1, 942, 43, 31, 1, 0
    };
    cout << "testing insertion sort non increasing, clrs exercise 2.1-2" << endl;
    cout << "test case " << endl;
    for (int i = 0; i < testCase.size(); i++) {
        cout << testCase[i] << " ";
    }
    cout << endl;
    cout << "result " << endl;
    vector<int> result = insertionSortNonIncreasing(testCase, insertionSortNonIncreasingTestCompare);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}


//
//  bubblesort.cpp
//  sorting-implementation
//
//  Created by Qijun Chen on 3/25/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "bubblesort.hpp"

void BubbleSort::test() {
    vector<int> testCase = {
        0, 9, 1, 3, 0
    };
    cout << "bubble sort test " << endl;
    cout << "input" << endl;
    for (int i = 0; i < testCase.size(); i++) {
        cout << testCase[i] << " ";
    }
    cout << endl;
    vector<int> result = sort(testCase, &BubbleSort::testCompareForBubbleSort);
    cout << "result " << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

bool BubbleSort::testCompareForBubbleSort(int x, int y) {
    return (x > y);
}

template <typename T, typename Compare>
vector<T> BubbleSort::sort(vector<T> arr, Compare comp) {
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = arr.size() - 1; j > i; j--) {
            if (comp(arr[j - 1], arr[j])) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    return arr;
}
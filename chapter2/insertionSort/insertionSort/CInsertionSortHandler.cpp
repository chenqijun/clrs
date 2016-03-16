//
//  CInsertionSortHandler.cpp
//  insertionSort
//
//  Created by qijun chen on 3/15/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "CInsertionSortHandler.hpp"


template<typename T, typename Compare>
std::vector<T> insertionSort(std::vector<T> &arr, Compare comp) {
    std::vector<T> result(arr.size());
    if (arr.size() == 0) {
        return result;
    }
    result[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        int j = i;
        T key = arr[i];
        while (j > 0 && comp(result[j - 1], key) == true) {
            result[j] = result[j - 1];
            j--;
        }
        result[j] = key;
    }
    return result;
}


bool isGreater(int x, int y) {
    return (x > y);
}

void testInsertionSort() {
    std::vector<int> test = {
        
    };
    std::vector<int> testResult = insertionSort(test, isGreater);
    std::cout << "test case: ";
    for (int i = 0; i < test.size(); i++) {
        std::cout << test[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "result: " << std::endl;
    for (int i = 0; i < testResult.size(); i++) {
        std::cout << testResult[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

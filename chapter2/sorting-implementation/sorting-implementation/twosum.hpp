//
//  twosum.hpp
//  sorting-implementation
//
//  Created by qijun chen on 3/18/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#ifndef twosum_hpp
#define twosum_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class twoSum {
public:
    template<typename T, typename Compare>
    bool hasNumber(vector<T> &arr, Compare comp);
    
    template<typename T, typename Compare>
    vector<T> mergeSort(vector<T> &arr, Compare comp, int left, int right);
    
    template<typename T, typename Compare>
    vector<T> merge(vector<T> &arr1, vector<T> &arr2, Compare comp);
    
    template<typename T, typename Compare>
    int binarySearch(vector<T> &arr, Compare comp, int target);
    
    static bool isGreater(int x, int y);
    void test();
private:
    
};
#endif /* twosum_hpp */

//
//  twosum.cpp
//  sorting-implementation
//
//  Created by qijun chen on 3/18/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "twosum.hpp"

template<typename T, typename Compare>
bool twoSum::hasNumber(vector<T> &arr, Compare comp) {
    vector<T> sortedArr = mergeSort(arr, comp, 0, arr.size() - 1);
    //cout << "arr" << endl;
    for (int i = 0; i < sortedArr
         .size(); i++) {
        //cout << sortedArr[i] << " ";
    }
    //cout << endl;
    for (int i = 0; i < sortedArr.size(); i++) {
        int numNeed = 0 - sortedArr[i];
        int indexOfNumNeed = binarySearch(sortedArr, comp, numNeed);
        if (indexOfNumNeed != -1) {
            return true;
        }
    }
    return false;
}
template<typename T, typename Compare>
vector<T> twoSum::mergeSort(vector<T> &arr, Compare comp, int left, int right) {
    vector<T> result;
    if (right < left) {
        return result;
    } else if (right == left) {
        result.push_back(arr[left]);
        return result;
    }
    
    int mid = (left + right) / 2;
    vector<T> sortedLeft = mergeSort(arr, comp, left, mid);
    vector<T> sortedRight = mergeSort(arr, comp, mid + 1, right);
    result = merge(sortedLeft, sortedRight, comp);
    return result;
}

template<typename T, typename Compare>
vector<T> twoSum::merge(vector<T> &arr1, vector<T> &arr2, Compare comp) {
    vector<T> result;
    int indexOfArr1 = 0;
    int indexOfArr2 = 0;
    while (indexOfArr1 < arr1.size() && indexOfArr2 < arr2.size()) {
        if (comp(arr2[indexOfArr2], arr1[indexOfArr1])) {
            result.push_back(arr1[indexOfArr1]);
            indexOfArr1++;
        } else {
            result.push_back(arr2[indexOfArr2]);
            indexOfArr2++;
        }
    }
    while (indexOfArr1 < arr1.size()) {
        result.push_back(arr1[indexOfArr1]);
        indexOfArr1++;
    }
    while (indexOfArr2 < arr2.size()) {
        result.push_back(arr2[indexOfArr2]);
        indexOfArr2++;
    }
    return result;
}

template<typename T, typename Compare>
int twoSum::binarySearch(vector<T> &arr, Compare comp, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (comp(arr[mid], target)) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

bool twoSum::isGreater(int x, int y) {
    return (x > y);
}

void twoSum::test() {
    vector<int> testCase1 = {
        891, 4189, 90, -90, 1, 3, 9, -4, -89
    };
    printf("test two sum\n");
    if (hasNumber(testCase1, &twoSum::isGreater)) {
        cout << "yes";
    } else {
        cout << "no";
    }
    
    vector<int> testCase2 = {
        891, 4189, 90, -900, 1, 3, 9, -4, -89
    };
    if (hasNumber(testCase2, &twoSum::isGreater)) {
        cout << "eys";
    } else {
        cout << "no";
    }
}
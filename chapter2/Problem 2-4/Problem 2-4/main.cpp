//
//  main.cpp
//  Problem 2-4
//
//  Created by Qijun Chen on 3/30/16.
//  Copyright © 2016 Qijun Chen. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

// inversion
// for array A[1...n]
// if i < j and A[j] > A[i], then pair(i, j) is inversion of A
//
// Question a.
//      (2,1) (3,1) (8,1) (8,6) (6,1)
// Question b.
//      sorted n, n-1, n-2, ..., 1
//      it has n * (n - 1) / 2
// Question c.
//      if we want to do insertion sort in descending order,
//      the number of swaps we need equals to the
//      number of inversions in the input array


template<typename T, typename Compare>
int mergeInversion(vector<T> &array, int p, int r, Compare comp) {
    int q = (p + r) / 2;
    vector<T> mergedArray;
    int numOfInversions = 0;
    int leftIndex = p;
    int rightIndex = q + 1;
    
    while (leftIndex <= q && rightIndex <= r) {
        if (comp(array[leftIndex], array[rightIndex]) == true) {
            mergedArray.push_back(array[rightIndex]);
            rightIndex ++;
            numOfInversions += (q - leftIndex + 1);
        } else {
            mergedArray.push_back(array[leftIndex]);
            leftIndex ++;
        }
    }
    while (leftIndex <= q) {
        mergedArray.push_back(array[leftIndex]);
        leftIndex ++;
    }
    while (rightIndex <= r) {
        mergedArray.push_back(array[rightIndex]);
        rightIndex ++;
    }
    for (int i = p; i <= r; i++) {
        array[i] = mergedArray[i - p];
    }
    return numOfInversions;
}

template<typename T, typename Compare>
int splitAndSortAndCountInversions(vector<T> &array, int p, int r, Compare comp){
    if (p == r) {
        return 0;
    } else if (p > r) {
        return 0;
    }
    
    int numOfInversions = 0;
    int q = (p + r) / 2;
    int leftCount = splitAndSortAndCountInversions(array, p, q, comp);
    int rightCount = splitAndSortAndCountInversions(array, q + 1, r, comp);
    int inversionsInMerge = mergeInversion(array, p, r, comp);
    numOfInversions = leftCount + rightCount + inversionsInMerge;
    
    return numOfInversions;
}

bool isGreater(int x, int y) {
    return (x > y);
}

void test() {
    vector<int> testCase = {2, 3, 8, 6, 1};
    cout << splitAndSortAndCountInversions(testCase, 0, 4, isGreater) << endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    test();
    return 0;
}

//
//  insertionsort-recursion.hpp
//  sorting-implementation
//
//  Created by Qijun Chen on 3/17/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#ifndef insertionsort_recursion_hpp
#define insertionsort_recursion_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class insertionSortRecursion {
public:
    template <typename T, typename Compare>
    void sort(vector<T> &arr, Compare comp);
    template <typename T, typename Compare>
    void insertionSort(vector<T> &arr, int curIndex, Compare comp);
    static bool fComp(int x , int y);
    void test();
private:
    
};
#endif /* insertionsort_recursion_hpp */

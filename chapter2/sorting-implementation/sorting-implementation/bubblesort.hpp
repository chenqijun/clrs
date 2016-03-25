//
//  bubblesort.hpp
//  sorting-implementation
//
//  Created by Qijun Chen on 3/25/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#ifndef bubblesort_hpp
#define bubblesort_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class BubbleSort {
public:
    template <typename T, typename Compare>
    vector<T> sort(vector<T> arr, Compare comp);
    
    static bool testCompareForBubbleSort(int x, int y);
    
    void test();
    
};
#endif /* bubblesort_hpp */

//
//  binarysort.hpp
//  binarysort
//
//  Created by qijun chen on 3/18/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#ifndef binarysort_hpp
#define binarysort_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class binarySearch {
public:
    template <typename T, typename Compare>
    int search(vector<T> &arr, Compare comp, int target);
    static bool compare(int x, int y);
    void test();
private:
    
};
#endif /* binarysort_hpp */

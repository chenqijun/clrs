//
//  Section1_Maximum_Subarray_Problem.hpp
//  Chapter4
//
//  Created by qijun chen on 4/7/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#ifndef Section1_Maximum_Subarray_Problem_hpp
#define Section1_Maximum_Subarray_Problem_hpp

#include <stdio.h>
#include <vector>
#include <tuple>
#include <utility>
#include <iostream>

using namespace std;

class Section1_Maximum_Subarray_Problem {
public:
    
    
    pair<int, int> solution_bruteForce(vector<int> &arr);
    
    pair<int, int> solution_divideConquer(vector<int> &arr);
    
    tuple<int, int, int> divideConquer(vector<int> &arr, int low, int high);
    
    void test();
};
#endif /* Section1_Maximum_Subarray_Problem_hpp */

//
//  Section1_Maximum_Subarray_Problem.cpp
//  Chapter4
//
//  Created by qijun chen on 4/7/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "Section1_Maximum_Subarray_Problem.hpp"

vector<int> Section1_Maximum_Subarray_Problem::solution_bruteForce(vector<int> &arr) {
    // result will be stored in result[0] & result[1]
    vector<int> result(2);
    if (arr.size() < 2) {
        return result;
    }
    
    int maxProfit = arr[1] - arr[0];
    result[0] = 0;
    result[1] = 1;
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 1; j < arr.size(); j++) {
            int profit = arr[j] - arr[i];
            if (profit > maxProfit) {
                maxProfit = profit;
                arr[0] = i;
                arr[1] = j;
            }
        }
    }
    return result;
}
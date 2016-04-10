//
//  Section1_Maximum_Subarray_Problem.cpp
//  Chapter4
//
//  Created by qijun chen on 4/7/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "Section1_Maximum_Subarray_Problem.hpp"

pair<int, int> Section1_Maximum_Subarray_Problem::solution_bruteForce(vector<int> &arr) {
    // result will be stored in result[0] & result[1]
    pair<int, int> result(0, 0);
    if (arr.size() < 2) {
        return result;
    }
    
    int maxProfit = arr[1] - arr[0];
    result.first = 0;
    result.second = 1;
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            int profit = arr[j] - arr[i];
            if (profit > maxProfit) {
                maxProfit = profit;
                result.first = i;
                result.second = j;
            }
        }
    }
    return result;
}

pair<int, int> Section1_Maximum_Subarray_Problem::solution_divideConquer(vector<int> &arr) {
    pair<int, int> result(0, 0);
    if (arr.size() < 2) {
        return result;
    }
    // process the array
    vector<int> arrOfPriceChanges;
    
    for (int i = 1; i < arr.size(); i++) {
        arrOfPriceChanges.push_back(arr[i] - arr[i - 1]);
    }
    
    auto resultFromDivideConquer = divideConquer(arrOfPriceChanges, 0, arrOfPriceChanges.size() - 1);
    
    result.first = get<0>(resultFromDivideConquer);
    result.second = get<1>(resultFromDivideConquer) + 1;
    return result;
}

tuple<int, int, int> Section1_Maximum_Subarray_Problem::divideConquer(vector<int> &arr, int low, int high) {
    tuple<int, int, int> result;
    if (low == high) {
        return {low, high, arr[low]};
    }
    
    int mid = (low + high) / 2;
    auto result_leftHalf = divideConquer(arr, low, mid);
    auto result_rightHalf = divideConquer(arr, mid + 1, high);
    
    // calculate result_crossMiddle
    tuple<int, int, int> result_crossMiddle;
    int maxLeftSum = 0x80000000;
    int maxRightSum = 0x80000000;
    int maxRightIndex, maxLeftIndex;
    get<0>(result_crossMiddle) = mid;
    get<1>(result_crossMiddle) = mid;
    get<2>(result_crossMiddle) = arr[mid];
    if (mid - 1 >= low) {
        int leftSum = 0;
        for (int i = mid; i >= low; i--) {
            leftSum += arr[i];
            if (leftSum >= maxLeftSum) {
                maxLeftSum = leftSum;
                maxLeftIndex = i;
            }
        }
    }
    if (mid + 1 <= high) {
        int rightSum = 0;
        for (int i = mid + 1; i <= high; i++) {
            rightSum += arr[i];
            if (rightSum >= maxRightSum) {
                maxRightSum = rightSum;
                maxRightIndex = i;
            }
        }
    }
    if (maxLeftSum > 0) {
        get<2>(result_crossMiddle) += maxLeftSum;
        get<0>(result_crossMiddle) = maxLeftIndex;
    }
    if (maxRightSum > 0) {
        get<2>(result_crossMiddle) += maxRightSum;
        get<1>(result_crossMiddle) = maxRightIndex;
    }
    
    // return the best case
    if (get<2>(result_leftHalf) >= get<2>(result_rightHalf)) {
        if (get<2>(result_leftHalf) >= get<2>(result_crossMiddle)) {
            result = result_leftHalf;
        } else {
            result = result_crossMiddle;
        }
    } else {
        if (get<2>(result_rightHalf) >= get<2>(result_crossMiddle)) {
            result = result_rightHalf;
        } else {
            result = result_crossMiddle;
        }
    }
    
    return result;
}


void Section1_Maximum_Subarray_Problem::test() {
    // test case 1
    vector<int> testCase1 = {100, 113, 110, 85, 105, 102, 86, 63, 81, 101, 94, 106, 101, 79, 94, 90, 97};
    auto result1_bf = solution_bruteForce(testCase1);
    auto result1_dc = solution_divideConquer(testCase1);
    cout << "result 1" << endl;
    cout << result1_bf.first << " " << result1_bf.second << endl;
    cout << result1_dc.first << " " << result1_dc.second << endl;
    
     // test case 2
    vector<int> testCase2 = {10, 11, 7, 10, 6};
    auto result2_bf = solution_bruteForce(testCase2);
    auto result2_dc = solution_divideConquer(testCase2);
    cout << "result 2" << endl;
    printf("%d %d \n", result2_bf.first, result2_bf.second);
    printf("%d %d \n", result2_dc.first, result2_dc.second);

}
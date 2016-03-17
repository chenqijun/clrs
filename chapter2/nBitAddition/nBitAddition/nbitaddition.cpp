//
//  nbitaddition.cpp
//  nBitAddition
//
//  Created by Qijun Chen on 3/16/16.
//  Copyright © 2016 Qijun Chen. All rights reserved.
//

#include "nbitaddition.hpp"

int* nBitAddition(int* A, int* B, int n) {
    int *result = new int[n + 1];
    int carryIn = 0;
    for (int i = n - 1; i >= 0; i--) {
        int sum = A[i] + B[i] + carryIn;
        if (sum > 1) {
            carryIn  = 1;
            sum = sum - 2;
        } else {
            carryIn = 0;
        }
        result[i + 1] = sum;
    }
    result[0] = carryIn;
    return result;
}

void testNBitAddition() {
    int testA[] = {
        1, 1, 0, 1, 1
    };
    int testB[] = {
        1, 1, 0, 1, 1
    };
    int size = sizeof(testA) / sizeof(int);
    int *result = nBitAddition(testA, testB, size);
    int sizeOfResult = sizeof(result) / sizeof(int);
    cout << "test case size: " << size << endl;
    cout << "result size: " << sizeOfResult << endl;
    cout << "test case A & B & result:" << endl;
    cout << " ";
    for (int i = 0; i < size; i++) {
        cout << testA[i];
    }
    cout << endl;
    cout << " ";
    for (int i = 0; i < size; i++) {
        cout << testB[i];
    }
    cout << endl;
    
    for (int i = 0; i < size + 1; i++) {
        cout << result[i];
    }
    cout << endl;
}
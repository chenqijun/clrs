//
//  main.cpp
//  Problem 2-3
//
//  Created by Qijun Chen on 3/29/16.
//  Copyright © 2016 Qijun Chen. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
// horner's rule for evaluating polynomial
//
// sum of <Ai>*<X^i> (from 0 to n)
/*
 (1) step 1:
        y = 0
 (2) step 2:
        for i = n to 0
            y = Ai + x * y = y * x + Ai
 (3) at the end:
        y = ((((0 * x + An) * x + An-1) * x + An-2) ... + A1) * x + A0
          = An * x^n + An-1 * x^n-1 + ... + A1 * x + A0
 
 */

int evaluatingPolynomial(vector<int> As, int x) {
    int y = 0;
    for (int i = As.size() - 1; i >= 0; i--) {
        y = As[i] + x * y;
    }
    return y;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "test x^2 + 2x + 1";
    vector<int> testCase = {1, 2, 1};
    cout << evaluatingPolynomial(testCase, 0) << endl;
    cout << evaluatingPolynomial(testCase, 1) << endl;
    cout << evaluatingPolynomial(testCase, 2) << endl;
    return 0;
}

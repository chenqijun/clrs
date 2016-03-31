//
//  main.cpp
//  Problem 2-4
//
//  Created by Qijun Chen on 3/30/16.
//  Copyright © 2016 Qijun Chen. All rights reserved.
//

#include <iostream>

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
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

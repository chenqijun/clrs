//
//  basic.cpp
//  sorting-implementation
//
//  Created by qijun chen on 3/20/16.
//  Copyright © 2016 cqj. All rights reserved.
//

#include "basic.hpp"

//template <typename T>
void Basic::printVector(vector<int> &arr, string s) {
    cout << "printing " << s << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Basic::wth() {
    cout << "wtf";
}
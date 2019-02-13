//
//  main.cpp
//  bitRate
//
//  Created by Adrian Smith on 07/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    long i = 0;
    long k = -1;
    int a = INT_MAX;
    int b = INT_MIN;
    while (i >= -64) {// 64-bit signed integer
        cout << i << " " << k << endl;
        k = k * 2;
        i -=1;
    }
    i = 0;
    k = 1;
    while (i <= 64) {// 64-bit signed integer
        cout << i << " " << k << endl;
        k = k * 2;
        i +=1;
    }
    
    cout << a << " " << b << endl;
    return 0;
}

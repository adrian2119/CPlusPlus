//
//  main.cpp
//  FizzBuzz
//
//  Created by Adrian Smith on 21/10/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...

    int total {0};
    for (int i = 1; i <= 1000; i++) {
        if(i % 3 == 0 || i % 5 == 0 || i % 15 == 0) {
            total += i;
            cout << i
            << " "
            << total
            << endl;
        }
    }
    return 0;
}

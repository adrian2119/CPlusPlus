//
//  main.cpp
//  BubbleSort
//
//  Created by Adrian Smith on 12/02/2019.
//  Copyright © 2019 Adrian Smith. All rights reserved.
//

#include <iostream>
#include <random>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    int sizeOfArray = 0;
    vector<int> num {7,6,5,4,3,2,1,0};
    for (int i {0}; i < num.size(); i++) {
//        num[i] = i;
        cout << num[i];
    }
    cout << endl << endl;
    
    for (int i = 0; i < num.size() - 1; i++) {
        for (int j = i + 1; j < num.size(); j++) {
            if (num[i] > num[j]) {
                int temp = num[i]; // hold value of first variable to swap
                num[i] = num[j]; // reassign first variable to value of second variable
                num[j] = temp; // reassign second variable to value of first variable
//                swap(num[i], num[j]); // builtin method to swap values
            }
        }
    }
    
    for (int i = 0; i < num.size(); i++) {
        cout << num[i];
    }
    cout << endl << endl;
    
    cout << "Press any key...";
    cin.ignore();
    return 0;
}

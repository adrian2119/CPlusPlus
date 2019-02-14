//
//  main.cpp
//  SortVector
//
//  Created by Adrian Smith on 25/10/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//5 1 6 10 8 4

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n {};
    cout << "Please enter how many numbers: ";
    cin >> n;
    vector <int> v {n};
    cout << "Please enter your numbers separated by spaces: ";
    for (int i =0; i < v.size(); i++) {
        int x {};
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}


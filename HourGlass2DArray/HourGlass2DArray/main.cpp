//
//  main.cpp
//  HourGlass2DArray
//
//  Created by Adrian Smith on 22/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<vector<int>> arr {

        {-9, -9, -9, 1, 1, 1},
        {0, -9, 0, 4, 3, 2},
        {-9, -9, -9, 1, 2, 3},
        {0, 0, 8, 6, 6, 0},
        {0, 0, 0, -2, 0, 0},
        {0, 0, 1, 2, 4, 0}
    };
    int total {-20000000};
    for (size_t i = 0; i < arr.size() - 2; i++) {
        int current {};
        for (size_t j = 0; j < arr[i].size() - 2; j++) {
            current = 0;
            int row1 {arr.at(i).at(j) + arr.at(i).at(j + 1) + arr.at(i).at(j + 2)};
            int row2 {arr.at(i + 1).at(j + 1)};
            int row3 {arr.at(i + 2).at(j) + arr.at(i + 2).at(j + 1) + arr.at(i + 2).at(j + 2)};
            current = row1 + row2 + row3;
            if (total < current) {
                total = current;
            }
             cout << total << "---" << endl;
        }
    }
    
    return 0;
}

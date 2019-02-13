//
//  main.cpp
//  FindTheUniqueNumber
//
//  Created by Adrian Smith on 17/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> nums {17,12,5,-6,12,4,17,-5,2,-3,2,4,5,16,-3,56,-4,15,15,-4,-5,-6,16};
    sort(nums.begin(), nums.end());
    int outPut {};
    bool found {false};
    if (nums.size() == 1) {
        outPut = nums.at(0);
        found = true;
    }
    else if (nums.size() > 1) {
        if (nums.at(0) != nums.at(1)) {
            outPut = nums.at(0);
            found = true;
        }
        else if (nums.at(nums.size() - 1) != nums.at(nums.size() - 2)) {
            outPut = nums.at(nums.size() - 1);
            found = true;
        }
        if (found == false) {
            for (size_t i {1}; i < nums.size() - 1; i++) {
                if (nums.at(i - 1) != nums.at(i) && nums.at(i) != nums.at(i + 1)) {
                    outPut = nums.at(i);
                    break;
                }
            }
        }
    }
    
    cout << outPut << endl;
    return 0;
}

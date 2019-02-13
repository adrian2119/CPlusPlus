//
//  main.cpp
//  findSubString
//
//  Created by Adrian Smith on 07/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string haystack {"hello"};
    string needle {"ll"};
    int pos {};
    for (int i = 0; i < haystack.size() - needle.size(); i++) {
        int count {};
        for (int j = 0; j < needle.size(); j++) {
            if (haystack.at(i + j) == needle.at(j)) {
                count++;
            }
        }
        if (count == needle.size()) {
            pos = i;
        }
    }
    cout << pos;
    return 0;
}

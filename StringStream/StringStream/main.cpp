//
//  main.cpp
//  StringStream
//
//  Created by Adrian Smith on 29/10/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

// 23,4,56

vector<int> parseInts(string str) {
    // Complete this function
    vector<int> characters {};
    
    int i {};
    while (i < str.length()) {
        string value {};
        bool found {false};
        while (found == false && i < str.length()) {
            if (str.at(i) != ',') {
                value += str.at(i);
            }
            else if (str.at(i) == ',') {
                found = true;
            }
            i++;
        }
        int num {};
        istringstream(value) >> num;
        characters.push_back(num);
    }
    return characters;
}

int main() {
//    cout << "Enter a value:";
    string str {"23,4,56"};
//    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

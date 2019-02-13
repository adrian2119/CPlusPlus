//
//  main.cpp
//  LengthOfLastWord
//
//  Created by Adrian Smith on 16/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    string s {"    Hello World   Forgotten has "};
    int word {};
    if (s.size() > 0) {
        size_t i {s.size() - 1};
//         && s.at(i) != ' '
        bool lastSpace {false};
        do {
            if (s.at(i) != ' ' && lastSpace == false) {
                word++;
            }
            else if (s.at(i) == ' ' && word > 0) {
                lastSpace = true;
            }
            i--;
         } while (i > 0);
    }
    cout << word << endl;
    return 0;
}

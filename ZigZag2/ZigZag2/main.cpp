//
//  main.cpp
//  ZIgZagConversation
//
//  Created by Adrian Smith on 16/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

/*
 The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
 
 P   A   H   N
 A P L S I I G
 Y   I   R
 And then read line by line: "PAHNAPLSIIGYIR"
 
 Write the code that will take a string and make this conversion given a number of rows:
 
 string convert(string s, int numRows);
 Example 1:
 
 Input: s = "PAYPALISHIRING", numRows = 3
 Output: "PAHNAPLSIIGYIR"
 Example 2:
 
 Input: s = "PAYPALISHIRING", numRows = 4
 Output: "PINALSIGYAHRPI"
 Explanation:
 
 P     I    N
 A   L S  I G
 Y A   H R
 P     I

*/

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
string s {"PAYPALISHIRING"};
size_t numberOfRows = 4;
size_t numberOfColumns = 27;

int a {};
vector<vector<char>> grid;
grid.resize(numberOfRows);
for (size_t i {0}; i < numberOfRows; i++) {
grid.at(i).resize(numberOfColumns);
}

size_t i {};

size_t j {};
do {
do {
grid[j][i] = s.at(a);
a++;
j++;
if (a == s.size()) {
break;
}
} while (j < numberOfRows);
if (a == s.size()) {
break;
}
j -= 2;
i += 2;
do {
grid[j][i] = s.at(a);
a++;
j--;
i += 2;
if (a == s.size()) {
break;
}
} while (j > 0);
//            i += 2;
//            if (numberOfColumns > grid.at(j).size()) {
//                grid.at(j).push_back(' ');
//            }
if (a == s.size()) {
break;
}
} while (a < s.size());

for (size_t i {}; i < numberOfRows; i++) {
for (size_t j {}; j < numberOfColumns; j++) {
cout << grid[i][j] << ' ';
}
cout << endl;
}
return 0;
}


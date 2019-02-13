//
//  main.cpp
//  LetterPyramid
//
//  Created by Adrian Smith on 03/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

/*
 Write a C++ program that displays a Letter Pyramid from a user-provided std::string.
 
 Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:
 
 It's much easier to understand the Letter Pyramid given examples.
 
 If the user enters the string "ABC", then your program should display:
 
   A
  ABA
 ABCBA
 
 
 If the user enters the string, "12345", then your program should display:
 
 
 
 1
 121
 12321
 1234321
 123454321
 
 
 If the user enters 'ABCDEFG', then your program should display:
 
 
 
 A
 ABA
 ABCBA
 ABCDCBA
 ABCDEDCBA
 ABCDEFEDCBA
 ABCDEFGFEDCBA
 If the user enters 'ABCDEFGHIJKLMNOPQRSTUVWXYZ', then your program should display:
 
 A
 ABA
 ABCBA
 ABCDCBA
 ABCDEDCBA
 ABCDEFEDCBA
 ABCDEFGFEDCBA
 ABCDEFGHGFEDCBA
 ABCDEFGHIHGFEDCBA
 ABCDEFGHIJIHGFEDCBA
 ABCDEFGHIJKJIHGFEDCBA
 ABCDEFGHIJKLKJIHGFEDCBA
 ABCDEFGHIJKLMLKJIHGFEDCBA
 ABCDEFGHIJKLMNMLKJIHGFEDCBA
 ABCDEFGHIJKLMNONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQRQPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQRSRQPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQRSTSRQPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQRSTUTSRQPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQRSTUVUTSRQPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQRSTUVWVUTSRQPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQRSTUVWXWVUTSRQPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQRSTUVWXYXWVUTSRQPONMLKJIHGFEDCBA
 ABCDEFGHIJKLMNOPQRSTUVWXYZYXWVUTSRQPONMLKJIHGFEDCBA
 If the user enters "C++isFun!", then your program should display:
 
 
 
 C
 C+C
 C+++C
 C++i++C
 C++isi++C
 C++isFsi++C
 C++isFuFsi++C
 C++isFunuFsi++C
 C++isFun!nuFsi++C
 
 
 Think about the problem before you begin and break it down into steps.
 
 This can be a very challenging problem to solve!
 
 Have fun!
 
 Questions for this Assignment
 Which C++ loop(s) did you use and why?
 
 How did you handle displaying the leading spaces in each row of the pyramid?
 
 Now that you completed the assignment, how might approach the problem differently if you had to solve it again?
 */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string word{};
    size_t height {};
    cout << "Enter your letters: ";
    getline(cin, word); //height of the pyramid
    height = word.size();
    vector<vector<char>> pyramid {};
    vector<char> letters {};

    for (size_t i = 0; i < height; i++) {
        letters.clear();
        
        for (size_t j = 0; j < height - i; j++) {
            letters.push_back('-');
        }
        for (size_t j = 0; j <= i; j++) {
            letters.push_back(word.at(j));
        }
        for (size_t j = height - 1; j > 0; j--) {
            letters.push_back(letters.at(j));
        }
        letters.erase(begin(letters));
        pyramid.push_back(letters);
    }

    for (size_t i = 0; i < height; i++) {
        for (size_t j = 0; j < pyramid[i].size(); j++) {
            cout << pyramid.at(i).at(j);
        }
        cout << endl;
    }
    
    return 0;
}

//
//  main.cpp
//  ClassesAndObjects
//
//  Created by Adrian Smith on 05/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student {
    vector<int> studentScores {};
    int total {};
    public :
    void input() {
        for (int i = 0; i < 5; i++) {
            int x {};
            cin >> x;
            studentScores.push_back(x);
        }
    }
    int calculateTotalScore() {
        cout << endl;
        for (int i = 0; i < studentScores.size(); i++) {
            total += studentScores.at(i);
            cout << studentScores.at(i) << " ";
        }
        cout << endl;
        return total;
    }
};
int main() {
    int n; // number of students
    cout << "Enter number of students: " << endl;
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }
    
    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();
    
    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }
    
    // print result
    cout << "Number of better students: " << count << endl;
    
    return 0;
}

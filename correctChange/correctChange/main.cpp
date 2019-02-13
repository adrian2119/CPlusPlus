//
//  main.cpp
//  correctChange
//
//  Created by Adrian Smith on 21/10/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    const int pound {100};
    const int fifty {50};
    const int twenty {20};
    const int ten {10};
    const int five {5};
    const int two {2};
    cout << "Enter an amount in pennys: ";
    int pennys {0};
    cin >> pennys;
    
    int poundChange {pennys / pound};
    if (poundChange > 0) {
        cout << "Number of pounds: "
        << poundChange;
//        pennys -= (poundChange * pound);
        pennys %= pound; // same as previous statement
        cout << " Total left: " << pennys << endl;
    }
    int fiftyChange {pennys / fifty};
    if (fiftyChange > 0) {
        cout << "Number of 50p: "
        << fiftyChange;
//        pennys -= (fifty * fiftyChange);
        pennys %= fifty; // same as previous statement
        cout << " Total left: " << pennys << endl;
    }
    int twentyChange {pennys / twenty};
    if (twentyChange > 0) {
        cout << "Nunber of 20p: "
        << twentyChange;
//        pennys %= twenty;
        pennys -= (twentyChange * twenty); // same as previous statement
        cout << " Total left: " << pennys << endl;
    }
    int tenChange {pennys / ten};
    if (tenChange > 0) {
        cout << "Number of 10p: "
        << tenChange;
//        pennys -= (tenChange * ten);
        pennys %= ten; // same as previous statement
        cout << " Total left: " << pennys << endl;
    }
    int fiveChange {pennys / five};
    if (fiveChange > 0) {
        cout << "Number of 5p: "
        << fiveChange;
//        pennys -= (fiveChange * five);
        pennys %= five; // same as previous statement
        cout << " Total left: " << pennys << endl;

    }
    int twoChange {pennys / two};
    if (twoChange > 0) {
        cout << "Number of 2p: "
        << twoChange;
//        pennys -= (twoChange * two);
        pennys %= two; // same as previous statement
        cout << " Total left: " << pennys << endl;

    }
    return 0;
}

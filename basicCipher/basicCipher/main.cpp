//
//  main.cpp
//  basicCipher
//
//  Created by Adrian Smith on 03/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<char> alphabet {};

//    This loop creates the alphabet vector
    for (int i = 33; i < 128; i++) {
        alphabet.push_back(i);
    }
    
//    The next block creates the cipher vector
    vector<char> temp {alphabet};
    vector<char> cipher {};
    int i {};
    while (temp.size() > 1) {
        unsigned random = rand() % temp.size();
        cipher.push_back(temp.at(random));
        temp.erase(temp.begin() + random);
        i++;
    }
    cipher.push_back(temp.at(0));
    
//    The next 2 loops print out the alphabet & corresponding cipher
    for (int i = 0; i < alphabet.size(); i++) {
        cout << alphabet.at(i) << " " << i << endl;
    }
    cout << endl;
//    for (int i = 0; i < cipher.size(); i++) {
//        cout << cipher.at(i);
//    }
    
//    Get the line to be encrypted
    cout << endl << endl;
    string notEncrypted {};
    cout << "Enter what you want to encrypt: ";
    getline(cin, notEncrypted);
    
//    Encrypt what the user entered
    string encryptedString {};
    for (int i = 0; i < notEncrypted.size(); i++) {
        for (int j = 0; j < alphabet.size(); j++) {
            if (notEncrypted.at(i) == alphabet.at(j)) {
                encryptedString.push_back(cipher.at(j));
            }
            else if (j == alphabet.size()) {
                encryptedString.push_back(notEncrypted.at(i));
            }
        }
    }
    
//    Decrypt the encrypted string made from what the user entered
    string deCrypted {};
    for (int i = 0; i < encryptedString.size(); i++) {
        for (int j = 0; j < cipher.size(); j++) {
            if (encryptedString.at(i) == cipher.at(j)) {
                deCrypted.push_back(alphabet.at(j));
            }
            else if (j == cipher.size()) {
                deCrypted.push_back(encryptedString.at(i));
            }
        }
    }
    
//    3 blocks to prove that it works
    cout << endl << "Not encrypted: ";
    for (int i = 0; i < notEncrypted.size(); i++) {
        cout << notEncrypted.at(i);
    }
    cout  << endl << "Encrypted: ";
    for (int i = 0; i < encryptedString.size(); i++) {
        cout << encryptedString.at(i);
    }
    cout << endl << "Decrypted: ";
    for (int i = 0; i < deCrypted.size(); i++) {
        cout << deCrypted.at(i);
    }
    cout << endl << endl;
    
    return 0;
}

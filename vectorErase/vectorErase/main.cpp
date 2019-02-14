//
//  main.cpp
//  vectorErase
//
//  Created by Adrian Smith on 02/11/2018.
//  Copyright © 2018 Adrian Smith. All rights reserved.
//

/*Input Format
The first line of the input contains an integer .The next line contains space separated integers(1-
based index).The third line contains a single integer ,denoting the position of an element that should be
removed from the vector.The fourth line contains two integers and denoting the range that should be
erased from the vector inclusive of a and exclusive of b.

Constraints
1 <= N<= 10000
1 <= x <= N
1 <= a < b <= N
 
Output Format
Print the size of the vector in the first line and the elements of the vector after the two erase operations in
the second line separated by space.
 
Sample Input
6
1 4 6 2 8 9
2
2 4
 
Sample Output
3
1 8 9
 
Explanation
The first query is to erase the 2nd element in the vector, which is 4. Then, modifed vector is {1 6 2 8 9},
we want to remove the range of 2~4, which means the 2nd and 3rd elements should be removed. Then 6
and 2 in the modified vector are removed and we finally get {1 8 9}*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t {};
    cin >> t;
    vector<int> v {};
    int n {0};
//    fill up the vector
    for (int i = 0; i < t; i++) {
        cin >> n;
        v.push_back(n);
    }
//    erase the value a single index
    cin >> n;
    v.erase(v.begin() + (n - 1));
    
//    erase the values in a given range
    int x {};
    cin >> n >> x;
    v.erase(v.begin() + (n - 1), v.begin() + (x - 1));
    
//    Output
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v.at(i) << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

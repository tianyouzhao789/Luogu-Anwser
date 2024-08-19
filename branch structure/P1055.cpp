//
// Created by 赵天佑 on 2024/8/19.
//
#include <bits/stdc++.h>
using namespace std ;
int main () {
    string ISBN;
    cin >> ISBN;
    int k = 0, a[11];
    for(int i = 0, j = 0; i < ISBN.size(); i++) {
        if(ISBN[i] != '-') {
            if((ISBN[i] - '0') != 40) {
                a[j] = ISBN[i] - '0';
            }
            else {
                a[j] = 10;
            }
            j++;
        }
    }
    for(int i = 0; i < 9; i++) {
        k += a[i] * (i + 1);
    }
    if (a[9] != (k % 11)) {
        if ((k % 11) == 10) {
            cout << a[0] << "-" << a[1] << a[2] << a[3] << "-" << a[4] << a[5] << a[6] << a[7] << a[8] << "-" << "X" << endl;
        }
        else {
            cout << a[0] << "-" << a[1] << a[2] << a[3] << "-" << a[4] << a[5] << a[6] << a[7] << a[8] << "-" << (k % 11) << endl;
        }
    }
    else {
        cout << "Right" << endl;
    }
    return 0;
}
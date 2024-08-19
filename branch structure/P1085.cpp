//
// Created by 赵天佑 on 2024/8/19.
//
#include <bits/stdc++.h>
using namespace std ;
int main () {
    int a[7][2];
    int flag[7] = {0, 0, 0, 0, 0, 0, 0};
    int n = 0;
    for (int i = 0; i < 7; i++) {
        cin >> a[i][0] >> a[i][1] ;
        if ((a[i][0] + a[i][1]) > 8) {
            flag[i] = a[i][0] + a[i][1];
            if (flag[i] > n) {
                n = flag[i] ;
            }
        }
    }
    if (n != 0) {
        for (int j = 0; j < 7; j++) {
            if (flag[j] == n) {
                cout << (j + 1) << endl ;
                return 0;
            }
        }
    }

    cout << 0 << endl ;
    return 0;
}
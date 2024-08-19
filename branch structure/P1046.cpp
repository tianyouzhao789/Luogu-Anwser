//
// Created by 赵天佑 on 2024/8/19.
//
#include<bits/stdc++.h>
using namespace std ;
int main () {
    int h[11], M, sum = 0;
    for (int i = 0; i < 10; i++)
        cin >> h[i] ;
    cin >> M;
    M += 30;
    for (int i = 0; i < 10; i++) {
        if(h[i] <= M) {
            sum ++;
        }
    }
    cout << sum << endl;

    return 0;
}
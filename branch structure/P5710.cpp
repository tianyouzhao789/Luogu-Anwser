//
// Created by 赵天佑 on 2024/8/19.
//
#include <bits/stdc++.h>
using namespace std ;
int main() {
    int n ;
    cin >> n ;
    bool one, tow;
    bool A, uim, B, Z;
    if (n % 2 == 0) {
        one = true ;
        if (n > 4 && n <= 12) {
            tow = true ;
        }
        else {
            tow = false ;
        }
    }
    else {
        one = false ;
        if (n > 4 && n <= 12) {
            tow = true ;
        }
        else {
            tow = false ;
        }
    }
    if (one && tow)
        A = true ;
    else
        A = false ;
    if (one || tow)
        uim = true ;
    else
        uim = false ;
    if (uim && (one != tow))
        B = true ;
    else
        B = false ;
    if (!one && !tow)
        Z = true ;
    else
        Z = false ;
    cout << A << " " << uim << " " << B << " " << Z << endl ;
    return 0;
}
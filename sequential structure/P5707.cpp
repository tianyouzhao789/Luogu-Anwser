//
// Created by 赵天佑 on 2024/8/17.
//
#include <bits/stdc++.h>
using namespace std ;
int main() {
    int a, b, hours, minutes ;
    cin >> a >> b ;
    int n = ceil(1.0 * a / b) + 10 ;
    int d = 24*60 + 8*60 ;
    int times = d - n ;
    if (times >= 24*60) {
        times -= 24*60 ;
    }
    hours = times / 60 ;
    minutes = times % 60 ;
    if (hours < 10) {
        if (minutes < 10) {
            cout << 0 << hours << ':' << 0 <<minutes << endl ;
        }
        else {
            cout << 0 << hours << ':' << minutes <<endl ;
        }
    }
    else{
        if (minutes < 10) {
            cout << hours << ':' << 0 <<minutes << endl;
        }
        else {
            cout << hours <<  ':' << minutes << endl ;
        }

    }
    return 0;
}
//
// Created by 赵天佑 on 2024/8/17.
//
#include <bits/stdc++.h>
using namespace std ;
int main() {
    float a, b, c;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2 ;
    cout << setprecision(1) << fixed << sqrt(p * (p - a) * (p - b) * (p - c)) << endl ;
    return 0;
}
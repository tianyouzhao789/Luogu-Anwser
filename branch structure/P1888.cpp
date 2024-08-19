//
// Created by 赵天佑 on 2024/8/19.
//
#include<bits/stdc++.h>
using namespace std;
//辗转相除法求最大公约数
int gcd(int a, int b) {
    return a % b ? gcd(b, a % b) : b;
}
int main() {
    int a[4];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    int g = gcd(a[0], a[2]);
    cout << a[0] / g << '/' << a[2] / g << endl;
    return 0;
}
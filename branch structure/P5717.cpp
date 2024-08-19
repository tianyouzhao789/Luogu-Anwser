//
// Created by 赵天佑 on 2024/8/19.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    if ((a[0] + a[1]) <= a[2]) {
        cout << "Not triangle" << endl;
        return 0;
    }
    if (pow(a[0], 2) + pow(a[1], 2) - pow(a[2], 2) == 0) {
        cout << "Right triangle" << endl;
    }
    if (pow(a[0], 2) + pow(a[1], 2) - pow(a[2], 2) > 0) {
        cout << "Acute triangle" << endl;
    }
    if (pow(a[0], 2) + pow(a[1], 2) - pow(a[2], 2) < 0) {
        cout << "Obtuse triangle" << endl;
    }
    if ((a[0] == a[1]) || (a[1] == a[2])) {
        cout << "Isosceles triangle" << endl;
    }
    if ((a[0] == a[1]) && (a[1] == a[2])) {
        cout << "Equilateral triangle" << endl;
    }
    return 0;
}
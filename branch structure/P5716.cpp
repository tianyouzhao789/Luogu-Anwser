//
// Created by 赵天佑 on 2024/8/19.
//
//
// Created by 赵天佑 on 2024/8/19.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    bool flg = false;
    int arr1[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int arr2[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) {
        flg = true;
    }
    if (flg) {
        cout << arr2[m - 1] << endl;
    }
    else {
        cout << arr1[m - 1] << endl;
    }
    return 0;
}
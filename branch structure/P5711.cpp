//
// Created by 赵天佑 on 2024/8/19.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool flg = false;
    if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) {
        flg = true;
    }
    cout << flg << endl;
    return 0;
}
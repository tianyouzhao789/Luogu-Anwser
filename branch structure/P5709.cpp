//
// Created by 赵天佑 on 2024/8/19.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, t, s;
    cin >> m >> t >> s;
    if (t == 0)
        cout << 0 << endl;
    else {
        int num = ceil(1.0 * s / t);
        if (num >= m)
            cout << 0 << endl;
        else {
            cout << m - num << endl;
        }

    }

    return 0;
}
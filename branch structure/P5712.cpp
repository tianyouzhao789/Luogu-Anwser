//
// Created by 赵天佑 on 2024/8/19.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n >= 2)
        cout << "Today, I ate " << n << " apples." << endl;
    else {
        cout << "Today, I ate " << n << " apple." << endl;
    }
    return 0;
}
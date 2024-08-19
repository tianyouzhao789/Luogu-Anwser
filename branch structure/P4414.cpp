//
// Created by 赵天佑 on 2024/8/19.
//
#include<bits/stdc++.h>
using namespace std ;
int main() {
    int a[3];
    string s;
    int q[3];
    cin >> a[0] >> a[1] >> a[2];
    cin >> s;
    sort(a, a + 3);
    for (int i = 0; i < 3; i++) {
        if(s[i] == 'A') {
            q[i] = 0;
        }
        else if(s[i] == 'B') {
            q[i] = 1;
        }
        else {
            q[i] = 2;
        }
    }
    cout << a[q[0]] << " " << a[q[1]] << " " << a[q[2]] << endl;
    return 0;
}
//
// Created by 赵天佑 on 2024/8/19.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    int today, day;
    long long int sum = 0;
    cin >> today >> day;
    for(int i = 1; i <= day; i++) {
        if (today == 7 || today == 6) {
            if (today == 7) {
                today = 1;
            }
            else {
                today++;
            }
        }
        else {
            sum += 250;
            today++;
        }
    }
    cout << sum << endl;
    return 0;
}
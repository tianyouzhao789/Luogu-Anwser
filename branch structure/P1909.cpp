//
// Created by 赵天佑 on 2024/8/19.
//
#include <bits/stdc++.h>
using namespace std;
int main () {
    //n表示需要购买的数量、数组a表示产品信息
    int n, a[3][2];
    int sum[3];
    cin >> n;
    for (int i = 0; i < 3; i++) {
        cin >> a[i][0] >> a[i][1];
        sum[i] = ceil(1.0 * n / a[i][0]) * a[i][1];
    }
    cout << min(sum[0], min(sum[1], sum[2])) << endl;
    return 0;
}
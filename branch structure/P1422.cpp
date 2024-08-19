//
// Created by 赵天佑 on 2024/8/19.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n<=150) cout << fixed << setprecision(1) << n * 0.4463<<endl;
    else if(n > 150 && n <= 400) cout << fixed << setprecision(1) << 150 * 0.4463 + (n - 150) * 0.4663 << endl;
    else if(n > 400) cout << fixed << setprecision(1) << 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663 << endl;
    return 0;
}
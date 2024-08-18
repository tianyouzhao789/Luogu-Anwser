//
// Created by 赵天佑 on 2024/8/17.
//
#include <bits/stdc++.h>
using namespace std ;
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int times = (c * 60 + d) - (a * 60 + b);
  int hours = times / 60;
  int minutes = times % 60;
  cout << hours << " " << minutes << endl ;
}
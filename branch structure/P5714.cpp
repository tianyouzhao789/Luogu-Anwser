//
// Created by 赵天佑 on 2024/8/19.
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    double m, h;
    cin >> m >> h;
    double BMI = m / (h * h);
    if (BMI < 18.5) {
        cout << "Underweight" << endl;
    }
    else if (BMI < 24 && BMI >= 18.5) {
        cout << "Normal" << endl;
    }
    else {

        cout << setprecision(6 ) << BMI << endl << "Overweight" << endl;
    }
    return 0;
}

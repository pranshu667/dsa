#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    //cout << k2 << " " << k5 << " " << k6;

    int sum = 0;
    int a = min(k2, min(k5, k6));
    k2 -= min(k2, min(k5, k6));
    k2 = k2 > 0 ? k2 : 0;
    int b = min(k2, k3);
    sum += a * 256 + b * 32;
    cout << sum << endl;
}
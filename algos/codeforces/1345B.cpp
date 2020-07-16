#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        int num = 0;
        while (n > 1)
        {
            int b = floor((-1 + sqrt(1 + 24 * n)) / 6);
            n = n - ((b) * (3 * b + 1)) / 2;
            num++;
        }
        cout << num << endl;
    }
}
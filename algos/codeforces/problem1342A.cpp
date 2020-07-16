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
        ll x, y;
        cin >> x >> y;
        ll a, b;
        cin >> a >> b;

        if (b >= 2 * a)
        {
            cout << (x + y) * a;
        }
        else
        {
            ll sum = 0;
            sum += min(x, y) * b;
            sum += ((max(x, y) - min(x, y))) * a;
            cout << sum;
        }
        cout << endl;
    }
}
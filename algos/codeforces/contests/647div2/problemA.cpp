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
        ll a, b;
        cin >> a >> b;
        int ops = 0;

        ll m = min(a, b);
        ll n = max(a, b);

        while (m * 8 <= n)
        {
            m = m * 8;
            ops++;
        }
        while (m * 4 <= n)
        {
            m = m * 4;
            ops++;
        }
        while (m * 2 <= n)
        {
            m = m * 2;
            ops++;
        }
        if (m != n)
        {
            cout << -1;
        }
        else
        {
            cout << ops;
        }
        cout << endl;

    }
}

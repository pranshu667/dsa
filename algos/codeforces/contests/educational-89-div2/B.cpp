#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool intersecting(ll a, ll b, ll c, ll d)
{
    if (b < c || a > d)
    {
        return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, x, m;
        cin >> n >> x >> m;

        // int *arr = new int[n];
        // for (int i = 0; i < n; i++)
        // {
        //     arr[i] = 0;
        // }
        // arr[x - 1] = 1;
        ll prevl, prevr;
        prevl = x;
        prevr = x;
        for (int i = 0; i < m; i++)
        {
            ll l, r;
            cin >> l >> r;
            if (intersecting(prevl, prevr, l, r))
            {
                prevl = min(prevl, l);
                prevr = max(prevr, r);
            }
        }
        cout << prevr - prevl + 1 << endl;
    }
}
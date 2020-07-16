#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll a, b;

    if (n == 1)
    {
        cout << v[0] << " ";
    }
    else if (n == 2)
    {
        cout << 2 * (v[0] + v[1]) << " ";
    }
    else
    {
        ll ans = 0;
        int multiple = 2;
        for (int i = 0; i < n - 2; i++)
        {
            a = v[i];
            b = multiple;
            ans += (a * b);
            multiple++;
        }
        a = (v[n - 2] + v[n - 1]);
        b = multiple;
        ans += (a * b);
        cout << ans << " ";
    }
}
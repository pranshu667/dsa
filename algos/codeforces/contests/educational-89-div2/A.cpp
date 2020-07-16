#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll sum = (a + b);
        ll ans = min(min(a, b), (sum / 3));
        cout << ans << endl;
    }
}
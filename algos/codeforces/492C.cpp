#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{

    long long n, avg, r;
    ll total = 0;

    cin >> n >> r >> avg;
    ll i = 0;
    vector<pair<ll, ll>> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i].second >> a[i].first;
        total += a[i].second;
    }
    sort(a.begin(), a.end());
    ll essays = 0;
    i = 0;
    while (total < avg * n && (i < n))
    {
        long long tmp = min(avg * n - total, r - a[i].second);
        essays += tmp * a[i].first;
        total += tmp;
        i++;
    }
    cout << essays << endl;
    return 0;
}
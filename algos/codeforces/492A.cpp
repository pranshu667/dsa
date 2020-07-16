#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

bool compare(pair<ll, int> a, pair<ll, int> b)
{
    return a.second < b.second;
}

int main()
{
    ll n;
    cin >> n;
    ll r;
    cin >> r;

    ll avg;
    cin >> avg;

    vector<pair<ll, int>> v;
    ll total = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        int y;
        cin >> x;
        cin >> y;
        v.push_back(make_pair(x, y));
        total += x;
    }
    sort(v.begin(), v.end(), compare);

    int i = 0;
    long long int add;
    long long int essays = 0;
    while (i < n && (total < avg * n))
    {
        add = min(avg * n - total, r - v[i].first);
        essays += add * v[i].second;
        total += add;
        i++;
    }
    cout << essays << endl;
}
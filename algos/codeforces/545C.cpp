#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    ll occupied = v[0].first;
    int ans = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i].first - v[i].second > occupied)
        {
            occupied = v[i].first;
            ans++;
        }
        else if (v[i].first + v[i].second < v[i + 1].first)
        {
            occupied = v[i].first + v[i].second;
            ans++;
        }
        else
        {
            occupied = v[i].first;
        }
    }
    if(n>=2) {
        ans += 2;
    }
    else if(n==1) {
        ans += 1;
    }
    cout << ans << endl;
}
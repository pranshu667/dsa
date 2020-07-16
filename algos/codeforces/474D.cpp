#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007;

int main()
{
    int t, k;
    cin >> t >> k;
    vector<pair<int, int>> v(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());
    int start = v[0].first;
    int end = v[t - 1].second;

    int n = end - start + 1;
    ll ps[n + 1];
    ps[0] = 0;
    for (int i = start; i <= end; i++)
    {
        if (i < k)
        {
            ps[i] = 1;
        }
        else if (i == k)
        {
            ps[i] = 2;
        }
        else
        {
            
        }
    }
}
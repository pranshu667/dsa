#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    int sumTime;
    cin >> d >> sumTime;
    int minSum = 0;
    int maxSum = 0;

    vector<pair<int, int>> v(d);
    for (int i = 0; i < d; i++)
    {
        cin >> v[i].first >> v[i].second;
        minSum += v[i].first;
        maxSum += v[i].second;
    }

    if (sumTime >= minSum && sumTime <= maxSum)
    {
        cout << "YES" << endl;
        int ans = 0;
        for (int i = 0; i < d; i++)
        {
            ans = min(v[i].second, sumTime - minSum + v[i].first);
            minSum -= v[i].first;
            maxSum -= v[i].second;
            sumTime -= ans;
            cout << ans << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
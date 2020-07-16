#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if(v[i-1]>=v[i]) {
            int diff = v[i - 1] - v[i] + 1;
            v[i] += diff;
            ans += diff;
        }
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int pos[n + 1];
    pos[0] = -1;
    for (int i = 0; i < n; i++)
    {
        pos[a[i]] = i;
    }
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[(pos[b[i]] - i + n) % n]++;
    }
    int ans = 0;
    for (auto it : m)
    {
        ans = max(ans, it.second);
    }
    cout << ans << endl;
}
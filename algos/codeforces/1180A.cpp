#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    ll ans = 0;

    ans = ans + 2 * n - 1;
    for (int i = 1; i < n; i++)
    {
        ans += 2 * (2 * i - 1);
    }
    cout << ans << endl;
}
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        int dp[n + 1];
        dp[0] = 1;
        for (int i = 2; i <= n; i += 2)
        {
            dp[i] = dp[i - 2] * 2;
        }
        cout << dp[n] << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}
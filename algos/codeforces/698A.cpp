#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int dp[n][3] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            dp[i][j] = 0;
        }
    }

    dp[0][0] = 0;
    if (arr[0] == 1 || arr[0] == 3)
    {
        dp[0][1] = 1;
    }
    if (arr[0] == 2 || arr[0] == 3)
    {
        dp[0][2] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));

        if (arr[i] == 1 || arr[i] == 3)
        {
            dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + 1;
        }
        if (arr[i] == 2 || arr[i] == 3)
        {
            dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + 1;
        }
    }
    int ans = n - max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));
    cout << ans << endl;
}
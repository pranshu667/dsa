#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int solve(int *arr, int n, int amount)
{

    int dp[amount];
    memset(dp, 0, sizeof(dp));

    dp[0] = 0;
    for (int i = 1; i <= amount; i++)
    {
        dp[i] = INT_MAX;
    }

    for (int i = 1; i <= amount; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] <= i)
            {
                int subRes = dp[i - arr[j]];
                if (subRes != INT_MAX && subRes + 1 < dp[i])
                {
                    dp[i] = subRes + 1;
                }
            }
        }
    }
    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, amount;
        cin >> n >> amount;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = solve(arr, n, amount);
        cout << ans << endl;
    }
}
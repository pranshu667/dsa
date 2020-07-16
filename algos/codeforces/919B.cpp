#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

void print(int total[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << total[i] << " ";
    }
    cout << endl;
}

ll count(int n, int sum, int k)
{
    ll dp[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= sum; i++)
    {
        dp[0][i] = 0;
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            dp[i][j] = 0;
            for (int k = 0; k <= 9; k++)
            {
                if (i == 1 && k == 0)
                {
                    continue;
                }

                if (j >= k)
                {
                    dp[i][j] += dp[i - 1][j - k];
                }
            }
        }
    }
    int arr[n + 1];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = dp[i][sum];
    }
    print(arr, n + 1);

    if (binary_search(arr, arr + n + 1, k))
    {
    }
    else
    {
    }
}

int main()
{
    ll k;
    cin >> k;

    ll ans = count(30, 10, k);
    cout << ans << endl;
}
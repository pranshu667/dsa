#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int solve(int n, int a, int b, int c)
{
    int dp[n + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i] = INT_MIN;
    }

    dp[0] = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i + a <= n)
        {
            dp[i + a] = max(dp[i + a], dp[i] + 1);
        }
        if (i + b <= n)
        {
            dp[i + b] = max(dp[i + b], dp[i] + 1);
        }
        if (i + c <= n)
        {
            dp[i + c] = max(dp[i + c], dp[i] + 1);
        }
    }
    return dp[n];
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = solve(n, a, b, c);
    cout << ans << endl;
}
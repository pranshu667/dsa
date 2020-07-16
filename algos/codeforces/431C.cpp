#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007;

// ll solve(int n, int k, int d, bool temp)
// {
//     if (n < 0)
//     {
//         return 0;
//     }
//     if (n == 0 && temp == false)
//     {
//         return 0;
//     }
//     if (n == 0 && temp == true)
//     {
//         return 1;
//     }

//     ll ans = 0;
//     for (int i = 1; i <= k; i++)
//     {
//         if (i >= d)
//         {
//             ans += solve(n - i, k, d, true);
//         }
//         else
//         {
//             ans += solve(n - i, k, d, temp);
//         }
//     }
//     return ans;
// }

ll solve(int n, int k, int d)
{
    ll dp[n + 1][2];
    dp[0][0] = 1;
    dp[0][1] = 0;

    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = 0;
        dp[i][1] = 0;
        for (int j = 1; j <= k; j++)
        {
            if (i >= j)
            {
                if (j >= d)
                {
                    dp[i][1] += dp[i - j][0] + dp[i - j][1];
                    dp[i][1] = dp[i][1] % M;
                }
                else
                {
                    //dp[i][1] += dp[i - j][1];
                    dp[i][1] += dp[i - j][1];
                    dp[i][1] %= M;
                    dp[i][0] += dp[i - j][0];
                    dp[i][0] %= M;
                }
            }
        }
    }
    return dp[n][1] % M;
}

int main()
{
    int n, k, d;
    cin >> n >> k >> d;

    ll ans = solve(n, k, d);
    ans = ans % M;
    cout << ans << endl;
}
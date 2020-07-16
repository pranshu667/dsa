#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int **arr = new int *[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = new int[n];
        }
        int dp[n][n];
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                arr[i][j] = s[j] - 48;
                dp[i][j] = false;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i][n - 1] == 1)
            {
                dp[i][n - 1] = true;
            }
            if (arr[n - 1][i] == 1)
            {
                dp[n - 1][i] = true;
            }
        }

        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = n - 2; j >= 0; j--)
            {
                if (arr[i][j] == 1)
                {
                    dp[i][j] = dp[i + 1][j] || dp[i][j + 1];
                }
            }
        }
        bool valid = true;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 1 && !dp[i][j])
                {
                    valid = false;
                    break;
                }
            }
        }
        if (valid)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
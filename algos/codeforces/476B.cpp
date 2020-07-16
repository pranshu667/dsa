#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int C(int n, int r)
{
    int dp[r + 1];
    dp[0] = 1;
    for (int i = 1; i <= r; i++)
    {
        dp[i] = dp[i - 1] * (n - i + 1) / (i);
    }
    return dp[r];
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int val1 = 0;
    for (int i = 0; s1[i]; i++)
    {
        if (s1[i] == '+')
        {
            val1++;
        }
        else
        {
            val1--;
        }
    }

    int val2 = 0;
    int plus = 0;
    int neg = 0;
    int ques = 0;
    for (int i = 0; i < s2[i]; i++)
    {
        if (s2[i] == '+')
        {
            plus++;
            val2++;
        }
        else if (s2[i] == '?')
        {
            ques++;
        }
        else
        {
            neg++;
            val2--;
        }
    }

    int diff = val1 - val2;
    if (ques >= abs(diff))
    {
        int positive = (diff + ques) / 2;
        int negative = (ques - diff) / 2;

        int total = pow(2, ques);
        int favourable = C(ques, positive) * C(ques - positive, negative);
        float probability = float(favourable) / float(total);
        cout << fixed << setprecision(12) << probability << endl;
    }
    else
    {
        double ans = double(0);
        cout << fixed << setprecision(12) << ans << endl;
    }
}
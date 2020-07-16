#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin >> n;

    ll *cnt = new ll[n];
    for (int i = 0; i < n; i++)
    {
        cnt[i] = 0;
    }

    ll *arr = new ll[n];
    ll sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % 3 == 0)
    {

        sum = sum / 3;
        ll ss = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            ss += arr[i];
            if (ss == sum)
            {
                cnt[i] = 1;
            }
        }

        for (int i = n - 2; i >= 0; --i)
        {
            cnt[i] += cnt[i + 1];
        }

        ss = 0;
        long long ans = 0;
        for (int i = 0; i + 2 < n; ++i)
        {
            ss += arr[i];
            if (ss == sum)
            {
                ans += cnt[i + 2];
            }
        }
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

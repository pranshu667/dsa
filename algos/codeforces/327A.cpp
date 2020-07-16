#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //this solution is O(n^3)
    int ans = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int res = 0;
    //         for (int start = 0; start < i; start++)
    //         {
    //             res += arr[start];
    //         }
    //         for (int it = i; it <= j; it++)
    //         {
    //             res += (1 - arr[it]);
    //         }
    //         for (int end = j + 1; end < n; end++)
    //         {
    //             res += arr[end];
    //         }
    //         ans = max(res, ans);
    //     }
    // }
    // cout << ans << endl;

    //this is O(n) in time

    ans = -1;
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            c1++;
            c2 = (c2 == 0) ? c2 : c2 - 1;
        }
        else
        {
            c2++;
            ans = max(ans, c2);
        }
    }
    cout << c1 + ans << endl;
}
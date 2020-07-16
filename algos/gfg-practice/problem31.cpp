#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int solve(int *arr, int n, int k)
{

    sort(arr, arr + n);
    int small = arr[0] + k;
    int big = arr[n - 1] - k;
    int ans = arr[n - 1] - arr[0];

    if (small > big)
    {
        swap(small, big);
    }

    for (int i = 1; i < n - 1; i++)
    {
        int substract = arr[i] - k;
        int add = arr[i] + k;

        if (substract >= small || add <= big)
        {
            continue;
        }

        if (add - small > big - substract)
        {
            small = substract;
        }
        else
        {
            big = add;
        }
    }
    return min(ans, big - small);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k, n;
        cin >> k >> n;

        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = solve(arr, n, k);
        cout << ans << endl;
    }
}
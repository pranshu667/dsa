#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int solve(int *arr, int n, int k)
{

    int res = INT_MAX;
    int leftSum = 0;
    int rightSum = 0;
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        leftSum += i < 1 ? 0 : arr[i - 1];
        rightSum = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] > k)
            {
                rightSum += (arr[j] - arr[i] - k);
            }
        }
        res = min(res, leftSum + rightSum);
    }
    return res;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = solve(arr, n, k);
        cout << ans << endl;
    }
}
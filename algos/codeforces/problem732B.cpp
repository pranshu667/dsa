#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n, k;
    cin >> n >> k;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] + arr[i] < k)
        {
            ans += k - (arr[i] + arr[i - 1]);
            arr[i] = k - arr[i - 1];
        }
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
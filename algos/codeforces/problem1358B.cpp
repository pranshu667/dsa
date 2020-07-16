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

        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int cnt = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] <= i + 1)
            {
                cnt = i + 1;
                break;
            }
        }
        cout << cnt + 1 << endl;
    }
}
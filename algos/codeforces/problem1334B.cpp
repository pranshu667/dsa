#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll x;
        cin >> x;

        ll *arr = new ll[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<int>());
        ll total = 0;
        int i = 0;

        for (i = 0; i < n; i++)
        {
            total += arr[i];
            if (total / (i + 1) < x)
            {
                break;
            }
        }
        cout << i << endl;
    }
}
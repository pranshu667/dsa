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

        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int diff = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[i - 1] < diff)
            {
                diff = arr[i] - arr[i - 1];
            }
        }
        diff = (n == 1) ? -1 : diff;
        cout << diff << endl;
    }
}
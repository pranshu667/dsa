#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int *arr = new int[n];
        ll sum = 0;
        int l = -1;
        int r = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (l == -1 && arr[i] % x != 0)
            {
                l = i;
            }
            if (arr[i] % x != 0)
            {
                r = i;
            }
        }
        if (sum % x != 0)
        {
            cout << n << endl;
        }
        else
        {
            if (l == -1 && r == -1)
            {
                cout << -1 << endl;
                continue;
            }
            if (l > n - 1 - r)
            {
                cout << r << endl;
            }
            else
            {
                cout << n - l - 1 << endl;
            }
        }
    }
}
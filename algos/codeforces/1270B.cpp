#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll *arr = new ll[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool res = false;
        int l = 0;
        int r = 0;
        for (int i = 1; i < n; i++)
        {
            if (abs(arr[i - 1] - arr[i]) > 1)
            {
                res = true;
                cout << "YES " << endl
                     << i << " " << i + 1 << endl;
                break;
            }
        }

        if (!res)
        {
            cout << "NO" << endl;
        }
    }
}
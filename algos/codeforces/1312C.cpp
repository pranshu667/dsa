#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        ll *arr = new ll[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll maximum = 0;
        for (int i = 0; i < n; i++)
        {
            maximum = max(maximum, arr[i]);
        }
        ll num = 1;
        while (num * k <= maximum)
        {
            num = num * k;
        }

        while (num > 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] >= num)
                {
                    arr[i] -= num;

                    break;
                }
            }
            num = num / k;
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {

                flag = true;
            }
        }
        if (!flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
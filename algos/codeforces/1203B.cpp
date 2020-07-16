#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        int *arr = new int[4 * n];
        for (int i = 0; i < 4 * n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + 4 * n);
        bool flag = true;
        ll a = arr[0];
        ll b = arr[4 * n - 1];
        ll area = a * b;

        for (int i = 0; i < 2 * n; i += 2)
        {
            a = arr[i];
            b = arr[4 * n - 2 - i];
            if (arr[i] == arr[i + 1] && arr[4 * n - 2 - i] == arr[4 * n - 1 - i] && area == a * b)
            {
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
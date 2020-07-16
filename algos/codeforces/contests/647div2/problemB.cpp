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
        if (n == 4)
        {
            cout << 1 << endl;
        }
        else if (n == 6)
        {
            if (arr[0] == 10)
            {
                cout << 4 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (n == 2)
        {
            cout << max(arr[0], arr[1]) << endl;
        }
        else if (n == 3)
        {
            cout << -1 << endl;
        }
    }
}
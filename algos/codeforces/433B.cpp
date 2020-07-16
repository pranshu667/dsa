#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    ll *arr = new ll[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll v[n + 1];
    ll u[n + 1];
    v[0] = 0;
    v[1] = arr[0];

    for (int i = 2; i <= n; i++)
    {
        v[i] = v[i - 1] + arr[i - 1];
    }
    sort(arr, arr + n);
    u[0] = 0;
    u[1] = arr[0];
    for (int i = 2; i <= n; i++)
    {
        u[i] = u[i - 1] + arr[i - 1];
    }

    int m;
    cin >> m;

    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
        {
            cout << v[r] - v[l - 1] << endl;
        }
        else
        {
            cout << u[r] - u[l - 1] << endl;
        }
    }
}
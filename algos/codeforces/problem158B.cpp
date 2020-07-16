#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    int a[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        a[arr[i]]++;
    }

    cout << a[4] + a[3] + (max(a[1] - a[3], 0) + 2 * a[2] + 3) / 4;
}
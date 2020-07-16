#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int *arr2 = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    sort(arr, arr + n);
    sort(arr2, arr2 + m);

    int i = 0;
    int j = 0;
    int pairs = 0;
    while (i < n && j < m)
    {
        if (abs(arr[i] - arr2[j]) <= 1)
        {

            i++;
            j++;
            pairs++;
        }
        else
        {
            if (arr[i] < arr2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
    }
    cout << pairs << endl;
}

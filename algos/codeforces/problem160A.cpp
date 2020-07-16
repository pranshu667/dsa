#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    int remains = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        remains += arr[i];
    }

    int sum = 0;
    int result = 0;
    sort(arr, arr + n);
    int i = n - 1;
    while (i >= 0 && (sum <= remains))
    {
        sum += arr[i];
        remains -= arr[i];
        result++;
        i--;
    }
    cout << result << endl;
}
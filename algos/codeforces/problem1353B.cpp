#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int summation(int *arr,int n) {
    int sum = 0;
    for (int i = 0; i < n;i++) {
        sum += arr[i];
        
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int *b = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);

        int j = n - 1;
        int i = 0;
        while (i < n && j >= 0 && k > 0&&(a[i]<b[j]))
        {
            swap(a[i], b[j]);
            i++;
            j--;
            k--;
        }

        int sum = summation(a, n);
        cout << sum << endl;
    }
}
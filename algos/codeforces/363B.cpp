#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n, k;
    cin >> n >> k;

    int *h = new int[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        if (i < k)
        {
            sum += h[i];
        }
    }

    int start = 0;
    int end = k;
    int minSum = sum;
    int index = 1;
    while (end < n)
    {
        sum = sum - h[start] + h[end];
        if (sum < minSum)
        {
            minSum = sum;
            index = start + 2;
        }
        start++;
        end++;
    }
    cout << index << endl;
}

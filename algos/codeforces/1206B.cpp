#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    ll *arr = new ll[n];
    int neg = 0;
    int zeroes = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            neg++;
        }
        if (arr[i] == 0)
        {
            zeroes++;
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += abs((abs(arr[i]) - 1));
    }
    if (neg % 2 != 0)
    {
        if (zeroes == 0)
        {
            ans += 2;
        }
    }
    cout << ans << endl;
}
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int k;
    cin >> k;

    int *a = new int[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }

    sort(a, a + 12);
    int cnt = 0;
    int i = 11;

    while (k > 0 && (i >= 0))
    {
        k -= a[i];
        cnt++;
        i--;
    }
    if (k > 0)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << cnt << endl;
}
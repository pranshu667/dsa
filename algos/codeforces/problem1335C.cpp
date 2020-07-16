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
        map<int, int> m;
        int maxSame = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
            maxSame = max(maxSame, m[arr[i]]);
        }
        int distinct = m.size();
        cout << max(min(distinct - 1, maxSame), min(maxSame - 1, distinct)) << endl;
    }
}
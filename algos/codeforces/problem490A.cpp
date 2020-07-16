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

    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    vector<pair<int, pair<int, int>>> v;
    int count = 0;

    while (i1 < n && i2 < n && i3 < n)
    {
        while (arr[i1] != 1 && (i1 < n))
        {
            i1++;
        }
        while (arr[i2] != 2 && (i2 < n))
        {
            i2++;
        }
        while (arr[i3] != 3 && (i3 < n))
        {
            i3++;
        }

        if (i1 < n && i2 < n && i3 < n)
        {
            v.push_back(make_pair(i1 + 1, make_pair(i2 + 1, i3 + 1)));
        }
        i1++;
        i2++;
        i3++;
    }
    int size = v.size();
    cout << size << endl;
    for (int i = 0; i < size;i++) {
        cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
    }
}

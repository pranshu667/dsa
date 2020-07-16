#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void print(vector<int> v)
{
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int start = 0;
    int end = n - 1;

    int diff = INT_MAX;

    int size = v.size();

    while (end < size)
    {
        diff = min(diff, v[end] - v[start]);
        start++;
        end++;
    }
    cout << diff << endl;
}
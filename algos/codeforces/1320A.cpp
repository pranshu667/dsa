#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] - (i + 1);
    }
    unordered_map<int, ll> m;
    for (int i = 0; i < n; i++)
    {
        if (m.find(arr[i]) != m.end())
        {
            m[arr[i]] += (arr[i] + i + 1);
        }
        else
        {
            m.insert(make_pair(arr[i], arr[i] + i + 1));
        }
    }
    int size = m.size();
    ll maximum = 0;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if (it->second > maximum)
        {
            maximum = it->second;
        }
    }
    cout << maximum << endl;
}
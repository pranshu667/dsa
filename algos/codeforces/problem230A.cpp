#include <iostream>
using namespace std;
#include <bits/stdc++.h>

bool compare(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

void print(vector<pair<int, int>> v)
{
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}

int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), compare);
    //print(v);
    int size = v.size();

    for (int i = 0; i < size; i++)
    {
        if (s <= v[i].first)
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            s = s + v[i].second;
        }
    }
    cout << "YES" << endl;
}
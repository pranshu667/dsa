#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    string s;
    cin >> s;

    vector<char> v;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] != '+')
        {
            v.push_back(s[i]);
        }
    }
    sort(v.begin(), v.end());
    string str = "";
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        str += (v[i]);
        str += '+';
    }
    str += v[size - 1];
    cout << str << endl;
}
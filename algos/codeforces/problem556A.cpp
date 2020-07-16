#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int zeroes = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zeroes++;
        }
    }
    cout << n - 2 * min(zeroes, n - zeroes) << endl;
}
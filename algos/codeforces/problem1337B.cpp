#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, v, l;
        cin >> h >> v >> l;

        while (h > 20 && (v > 0))
        {
            h = h / 2 + 10;
            v--;
        }
        if (h - 10 * l > 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }
}
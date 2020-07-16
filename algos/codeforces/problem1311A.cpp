#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0;
        }
        else if (a < b)
        {
            int diff = b - a;
            if (diff % 2)
            {
                cout << 1;
            }
            else
            {
                cout << 2;
            }
        }
        else
        {
            int diff = a - b;
            if (diff % 2 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 2;
            }
        }
        cout << endl;
    }
}
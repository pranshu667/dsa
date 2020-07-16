#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int t = 1;

    while (t--)
    {
        int v;
        cin >> v;

        int arr[9];
        for (int i = 0; i < 9; i++)
        {
            cin >> arr[i];
        }

        int minimum = INT_MAX;
        int digit;
        for (int i = 0; i < 9; i++)
        {
            if (arr[i] <= minimum)
            {
                minimum = arr[i];
                digit = i + 1;
            }
        }
        int freq = v / minimum;
        string s = "";
        char a = digit + 48;
        for (int i = 0; i < freq; i++)
        {
            s += a;
        }
        s = (s.length() == 0) ? "-1" : s;
        cout << s << endl;
    }
}
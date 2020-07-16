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
        string s;
        cin >> s;
        int f = 0;

        int i = 0;
        string a = "";
        string b = "";
        while (s[i])
        {
            if (s[i] == '2')
            {
                if (f == 0)
                {
                    a += '1';
                    b += '1';
                                }
                else
                {
                    a += '0';
                    b += '2';
                }
            }
            else if (s[i] == '1')
            {
                if (f == 0)
                {
                    a += '1';
                    b += '0';
                    f = 1;
                }
                else
                {
                    a += '0';
                    b += '1';
                }
            }
            else
            {
                a += '0';
                b += '0';
            }
            i++;
        }
        cout << a << endl
             << b << endl;
    }
}
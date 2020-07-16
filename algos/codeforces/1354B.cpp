#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int a = -1;
        int b = -1;
        int c = -1;
        int minLength = INT_MAX;
        for (int i = 0; s[i]; i++)
        {

            if (s[i] == '1')
            {
                a = i;
            }
            else if (s[i] == '2')
            {
                b = i;
            }
            else
            {
                c = i;
            }

            if (a != -1 && b != -1 && c != -1)
            {
                minLength = min(minLength, max(a, max(b, c)) - min(a, min(b, c)) + 1);
            }
        }
        minLength = (minLength == INT_MAX) ? 0 : minLength;
        cout << minLength << endl;
    }
}
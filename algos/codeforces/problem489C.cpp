#include <iostream>
using namespace std;
#include <bits/stdc++.h>

void print(int min[], int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << min[i];
    }
}

int main()
{

    int m, s;
    cin >> m >> s;
    int sum = s;
    if (m == 1 && s == 0)
    {
        cout << 0 << " " << 0 << endl;
        return 0;
    }
    if (s == 0 || s > 9 * m)
    {
        cout << -1 << " " << -1 << endl;
        return 0;
    }

    int min[m];
    for (int i = 0; i < m; i++)
    {
        min[i] = 0;
    }

    int l = m;
    while (l--)
    {
        if (s > 9)
        {
            min[l] = 9;
            s = s - 9;
        }
        else
        {
            if (l == 0)
            {
                min[l] = s;
                s = 0;
            }
            else
            {
                min[l] = s - 1;
                s = 1;
            }
        }
    }
    if (s != 0)
    {
        min[0] = s;
    }
    print(min, m);
    cout << " ";

    int max[m];
    for (int i = 0; i < m; i++)
    {
        max[0] = 0;
    }

    l = 0;
    s = sum;
    while (l < m)
    {
        if (s > 9)
        {
            max[l] = 9;
            s = s - 9;
        }
        else
        {
            max[l] = s;
            s = 0;
        }
        l++;
    }
    print(max, m);
    cout << endl;
}
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        char **square = new char *[n];
        for (int i = 0; i < n; i++)
        {
            square[i] = new char[m];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> square[i][j];
            }
        }
        int price = 0;
        for (int i = 0; i < n; i++)
        {
            int prev = 0;
            for (int j = 0; j < m; j++)
            {
                if (x * 2 <= y)
                {
                    if (square[i][j] == '.')
                    {
                        price += (x);
                    }
                }
                else
                {
                    if (square[i][j] == '*')
                    {
                        price += (prev / 2) * y;
                        if (prev % 2)
                        {
                            price += x;
                        }
                        prev = 0;
                    }
                    else
                    {
                        prev++;
                    }
                }
            }

            if (prev != 0)
            {

                price += (prev / 2) * y;
                if (prev % 2)
                {
                    price += x;
                }
            }
        }
        cout << price << endl;
    }
}
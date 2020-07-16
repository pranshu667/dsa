#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if ((n > m + 1) || (m > 2 * n + 2))
    {
        cout << -1 << endl;
        return 0;
    }

    int digit = 1;
    int k = 0;
    while (n || m)
    {
        if (m > n && k < 2 || digit == 0)
        {
            digit = 1;
            k++;
            m--;
        }
        else
        {
            digit = 0;
            k = 0;
            n--;
        }
        cout << digit;
    }
}
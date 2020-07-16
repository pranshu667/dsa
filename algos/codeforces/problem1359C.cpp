
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int h, c, t;
        cin >> h >> c >> t;

        if (h + c - 2 * t >= 0)
        {
            cout << 2 << endl;
        }
        else
        {
            int k = (h - t) / (2 * t - (h + c));
            long long int a = abs(k * (h + c) + h - t * (2 * k + 1)) * (2 * k + 3);
            long long int b = abs((k + 1) * (h + c) + h - t * (2 * k + 3)) * (2 * k + 1);
            if (a <= b)
            {
            }
            else
            {
                k++;
            }
            cout << 2 * k + 1 << endl;
        }
    }
}
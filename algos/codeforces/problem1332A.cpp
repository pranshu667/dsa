using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x, y, x1, x2, y1, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        x += (b - a);
        y += (d - c);

        if (x <= x2 && x >= x1 && y <= y2 && y >= y1 && (x1 < x2 || a + b == 0) && (y1 < y2 || c + d == 0))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
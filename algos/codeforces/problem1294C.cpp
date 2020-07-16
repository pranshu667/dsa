using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        int i = 2;
        int a, b, c;
        a = 0;
        b = 0;
        c = 0;
        int root = sqrt(n);
        while (i < root)
        {
            if (n % i == 0)
            {
                n = n / i;
                a = i;
                break;
            }
            i++;
        }
        i++;
        root = sqrt(n);
        while (i <= root)
        {
            if (n % i == 0)
            {
                n = n / i;
                b = i;
                break;
            }
            i++;
        }

                c = n;

        if (a >= 2 && b > a && c > b && a != b && a != c && b != c)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
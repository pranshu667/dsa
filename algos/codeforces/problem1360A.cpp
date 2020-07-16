#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b;
        cin >> a >> b;

        ll side = 0;

        side = max(min(a, b) * 2, max(a, b));
        ll area = side * side;
        cout << area << endl;
    }
}
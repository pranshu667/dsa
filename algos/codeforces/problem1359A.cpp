#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int cards = n / k;
        int x = min(cards, m);
        m = m - x;
        k--;
        int y = m % k ? (m / k + 1) : m / k;
        cout << (x - y) << endl;
    }
}
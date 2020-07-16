#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    int *x = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int q;
    cin >> q;
    int *m = new int[q];
    for (int i = 0; i < q; i++)
    {
        cin >> m[i];
    }

    sort(x, x + n);
    ll ans = 0;
    for (int i = 0; i < q; i++)
    {
        cout << upper_bound(x, x + n, m[i]) - x << endl;
    }
}
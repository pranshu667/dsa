#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

ll C(ll n)
{
    return (n) * (n - 1) / 2;
}

int main()
{
    ll n, m;
    cin >> n >> m;

    ll maxPlayers = n - m + 1;

    ll maxPairs = (maxPlayers) * (maxPlayers - 1) / 2;

    ll minPairs = (m - n % m) * (C(n / m)) + (n % m) * (C(n / m + 1));
    cout << minPairs << " " << maxPairs << endl;

}
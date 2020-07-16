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
        int n;
        cin >> n;

        
        map<ll, int> m;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            m[a]++;
        }

        cout << m.size() << endl;
    }
}
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
        ll n;
        cin >> n;
        int i = 1;
        ll start = 0;
        ll end = n - 1;
        ll unf = 0;
        ll add;

        while (i)
        {
            start = pow(2, i - 1) - 1;
            if (start >= n)
            {
                break;
            }
            if ((end - start + 1) % ((start + 1) * 2) == 0)
            {
                add = (end - start + 1) / ((start + 1) * 2);
            }
            else
            {
                add = (end - start + 1) / ((start + 1) * 2) + 1;
            }
            unf += i * (add);
            i++;
        }
        cout << unf << endl;
    }
}
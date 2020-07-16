#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int a, b, c;
    while (n--)
    {
        cin >> a >> b >> c;
        if (a + b + c > 1)
        {
            sum++;
        }
    }
    cout << sum << endl;
}
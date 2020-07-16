#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;

    int twos = 0;
    int threes = 0;
    if (n % 2 == 0)
    {
        twos = (n / 2);
    }
    else
    {
        threes = 1;
        n -= 3;
        twos = (n / 2);
    }
    cout << twos + threes << endl;
    for (int i = 0; i < twos; i++)
    {
        cout << 2 << " ";
    }
    for (int i = 0; i < threes; i++)
    {
        cout << 3;
    }
    cout << endl;
}
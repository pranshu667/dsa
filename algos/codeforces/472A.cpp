#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2)
    {
        cout << n - 9 << " " << 9 << endl;
    }
    else
    {
        cout << n - 8 << " " << 8 << endl;
    }
}
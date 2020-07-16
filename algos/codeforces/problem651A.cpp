using namespace std;
#include <bits/stdc++.h>

int main()
{
    int a, b;
    cin >> a >> b;
    int res = 0;
    if (abs(a - b) % 3 == 0)
    {
        res = a + b - 3;
    }
    else
    {
        res = a + b - 2;
    }
    res = (a + b < 3) ? 0 : res;
    cout << res << endl;
}
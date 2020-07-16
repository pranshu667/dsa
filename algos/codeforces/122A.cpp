#include <bits/stdc++.h>
using namespace std;

bool checkLucky(int n)
{
    while (n != 0)
    {
        if (n % 10 != 4 && n % 10 != 7)
        {
            return false;
        }
        n = n / 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    bool ans = false;

    for (int i = 4; i <= n; i++)
    {
        if ((n % i == 0) && (checkLucky(i)))
        {
            ans = true;
        }
    }
    if (ans)
    {

        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
}
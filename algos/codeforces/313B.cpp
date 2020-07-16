#include <bits/stdc++.h>
using namespace std;

void print(int ps[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ps[i] << " ";
    }
    cout << endl;
}

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    int ps[n];
    for (int i = 0; i < n; i++)
    {
        ps[i] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        int res = (s[i] == s[i - 1]) ? 1 : 0;
        ps[i] = ps[i - 1] + res;
    }
    //print(ps, n);

    int m;
    cin >> m;
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        cout << ps[r - 1] - ps[l - 1] << endl;
    }
}
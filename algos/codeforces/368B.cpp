#include <iostream>
using namespace std;
#include <bits/stdc++.h>

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
    int n, m;
    cin >> n >> m;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ps[n];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        ps[i] = 0;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        s.insert(a[i]);
        ps[i] = s.size();
    }

    while (m--)
    {
        int x;
        cin >> x;
        cout << ps[x - 1] << endl;
    }
}
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int money = 0;
    for (int i = 0; i < n; i++)
    {
        if (money < arr[i] - 25)
        {
            cout << "NO" << endl;
            return 0;
        }
        money += 25;
        money -= (arr[i] - 25);
    }
    cout << "YES" << endl;
}
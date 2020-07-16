#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    long long int n;
    cin >> n;
    long long int coins = 0;

    coins += (n / 100);
    n %= 100;
    coins += (n / 20);
    n %= 20;
    coins += (n / 10);
    n %= 10;
    coins += (n / 5);
    n %= 5;
    coins += (n);
    cout << coins << endl;
}
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    string s;
    cin >> s;

    int a, b;
    a = s.find("AB");
    b = s.find("BA");

    if (a != -1 && s.find("BA", a + 2) != -1 || b != -1 && s.find("AB", b + 2) != -1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
}
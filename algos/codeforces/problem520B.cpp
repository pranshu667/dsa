#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    while (n < m)
    {
        if(m%2==1) {
            m++;
        }
        else {
            m /= 2;
        }
        count++;
    }
    count += (n - m);
    cout << count << endl;
}
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    ll *arr = new ll[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];  
    }

    int length = 1;
    int maxLength = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            length++;
            maxLength = max(maxLength, length);
        }
        else
        {
            length = 1;
        }
    }
    cout << maxLength << endl;
}
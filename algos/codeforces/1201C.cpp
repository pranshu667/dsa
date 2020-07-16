#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    ll k;
    cin >> k;

    ll *arr = new ll[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = n / 2;
    int add = 0;
    while (k > 0 && (i < n - 1))
    {
        
        add = min(k, arr[i + 1] - arr[i]);
        arr[i] += add;
        k -= add;
        if(i==n-1) {
            
        }
    }
}
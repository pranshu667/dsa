#include <bits/stdc++.h>
using namespace std;
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

    ll ans = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        ans += abs(arr[i] - i - 1);
    }
    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n, k;
    cin >> n >> k;

    ll *arr = new ll[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> v;
    for (int i = 1; i < n; i++)
    {
        v.push_back(arr[i - 1] - arr[i]);
    }
    sort(v.begin(), v.end());

    int res = arr[n - 1] - arr[0];
    for (int i = 0; i < k - 1; i++)
    {
        res += v[i];
    }
    cout << res << endl;
}

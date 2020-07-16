#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }
        int temp[n + 1];
        int ans = n + 1;
        memset(temp, -1, sizeof(temp));
        for (int i = 0; i < n; i++)
        {
            if (temp[arr[i]] == -1)
            {
                temp[arr[i]] = i;
            }
            else
            {
                ans = min(i - temp[arr[i]] + 1, ans);
                temp[arr[i]] = i;
            }
        }
        if (ans == n + 1)
        {
            cout << -1;
        }
        else
        {
            cout << ans;
        }
        cout << endl;
    }
}
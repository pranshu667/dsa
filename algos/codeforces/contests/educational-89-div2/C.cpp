#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int size = m + n - 1;
        int **arr = new int *[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = new int[2];
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                arr[i][j] = 0;
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int b;
                cin >> b;
                arr[i + j][b]++;
            }
        }

        int i = 0;
        int j = m + n - 2;
        while (i < j)
        {
            ans += min(arr[i][0] + arr[j][0], arr[i][1] + arr[j][1]);
            i++;
            j--;
        }
        cout << ans << endl;
    }
}
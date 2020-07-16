using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll *arr = new ll[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int p = 0;
        for (int i = 1; i < k - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                p++;
            }
        }

        int max = p;
        int minleft = 1;
        int start = 1;
        int end = k;
        while (end < n)
        {
            if (arr[start] > arr[start - 1] && arr[start] > arr[start + 1])
            {
                p--;
            }
            if (arr[end - 1] > arr[end - 2] && arr[end - 1] > arr[end])
            {
                p++;
            }
            if (p > max)
            {
                max = p;
                minleft = start + 1;
            }
            start++;
            end++;
        }
        cout << max + 1 << " " << minleft << endl;
    }
}
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll *arr = new ll[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int time = 0;
        for (int i = 1; i < n; i++)
        {
            int diff = arr[i - 1] - arr[i];
            if (diff > 0)
            {
                time = max(time, int(log2(diff)) + 1);
                arr[i] += pow(2, int(log2(diff)));
            }
        }
        cout << time << endl;
    }
}
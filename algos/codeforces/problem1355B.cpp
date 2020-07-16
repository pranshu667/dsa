using namespace std;
#include <bits/stdc++.h>

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

        sort(arr, arr + n);
        int groups = 0;
        int size = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == size)
            {
                groups++;
                size = 1;
            }
            else if (arr[i] > size)
            {
                size++;
            }
        }
        cout << groups << endl;
    }
}
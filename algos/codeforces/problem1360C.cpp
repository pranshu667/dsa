#include <iostream>
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
        int oddCount = 0;
        int evenCount = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
            {
                oddCount++;
            }
            else
            {
                evenCount++;
            }
        }
        sort(arr, arr + n);

        if (evenCount % 2 == 0 && oddCount % 2 == 0)
        {
            cout << "YES";
        }
        else if ((evenCount % 2 == 0 && oddCount % 2 != 0) || (evenCount % 2 != 0 && oddCount % 2 == 0))
        {
            cout << "NO";
        }
        else
        {
            int i = 0;

            while (i < n - 1)
            {
                if (arr[i + 1] - arr[i] == 1)
                {
                    cout << "YES";
                    break;
                }
                else
                {
                    if (i == n - 2)
                    {
                        cout << "NO";
                    }
                }
                i++;
            }
        }
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

void shift(int *arr, int pos, int shiftTo)
{
    int temp = arr[pos];
    for (int i = pos; i > shiftTo; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[shiftTo] = temp;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int *a = new int[n];
        int *b = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = 0;
        }

        int k = n - 1;
        for (int i = 0; i < k; i++)
        {
            for (int j = n - 2; j >= 0; j--)
            {
                if (a[j] > a[j + 1] && (b[j] == 0))
                {
                    swap(a[j], a[j + 1]);
                    b[j] = 1;
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
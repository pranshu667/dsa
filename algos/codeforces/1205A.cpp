#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    int *arr = new int[2 * n];
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            arr[i] = 2 * i + 2;
            arr[i + n] = 2 * i + 1;
        }
        else
        {
            arr[i] = (2 * i + 1);
            arr[i + n] = 2 * i + 2;
        }
    }

    print(arr, 2 * n);
    cout << endl;
}
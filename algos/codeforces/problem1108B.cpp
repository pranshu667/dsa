using namespace std;
#include <bits/stdc++.h>

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //cout << endl;
    sort(arr, arr + n);
    //print(arr, n);

    int x = arr[n - 1];
    int y = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] == arr[i + 1])
        {
            y = arr[i];
            break;
        }
        else if (x % arr[i] != 0)
        {
            y = arr[i];
            break;
        }
    }
    cout << x << " " << y << endl;
}
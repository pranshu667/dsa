using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

void print(ll *arr, int n)
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
    ll *arr = new ll[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    //print(arr, n);
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= sum)
        {
            cnt++;
            sum += arr[i];
        }
    }
    cout << cnt << endl;
}
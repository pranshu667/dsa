#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;
    ll freq[200001];
    for (int i = 0; i <= 200000; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x] += x;
    }
    freq[0] = 0;
    for (int i = 2; i <= 200000; i++)
    {
        freq[i] = max(freq[i - 1], freq[i - 2] + freq[i]);
    }
    cout << freq[200000] << endl;
}
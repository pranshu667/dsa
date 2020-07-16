        #include <bits/stdc++.h>
        using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[x]++;
        }
        sort(v.begin(), v.end());
        int ans = v[n];
        int last = v[n];
        for (int i = n - 1; i > 0; i--)
        {
            if (last == 0)
            {
                break;
            }
            if (v[i] >= last)
            {
                ans += (last - 1);
                last--;
            }
            else
            {
                ans += v[i];
                last = v[i];
            }
        }
        cout << ans << endl;
    }
}
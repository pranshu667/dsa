    using namespace std;
    #include <bits/stdc++.h>

int main()
{
    int n, m;
    cin >> n >> m;
    int a = min(m, n);
    int b = max(m, n);
    int ans = min(a, (a + b) / 3);
    cout << ans << endl;
}
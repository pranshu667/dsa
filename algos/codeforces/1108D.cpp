#include <bits/stdc++.h>
using namespace std;
char returnDiff(char a, char b)
{
    char set[3] = {'R', 'G', 'B'};
    for (int i = 0; i < 3; i++)
    {
        if (set[i] != a && set[i] != b)
        {
            return set[i];
        }
    }
}

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;
    int cnt = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            cnt++;
            s[i] = returnDiff(s[i - 1], s[i + 1]);
        }
    }
    cout << cnt << endl
         << s << endl;
}
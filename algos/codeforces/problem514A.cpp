using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    string s;
    cin >> s;

    int i = 0;
    while (s[i])
    {
        if (s[i] == '9' && i == 0)
        {
        }
        else if (s[i] <= '4')
        {
        }
        else
        {
            int x = s[i] - 48;
            x = 9 - x;
            s[i] = x + 48;
        }
        i++;
    }
    cout << s << endl;
}
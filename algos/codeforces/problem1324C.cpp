using namespace std;
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int index = 0;
        int i = 1;
        int mostDiff = 0;

        while (s[i - 1])
        {
            if (s[i - 1] == 'R')
            {
                if (i - index >= mostDiff)
                {
                    mostDiff = i - index;
                }
                index = i;
            }
            i++;
        }
        mostDiff = max(mostDiff, i - index);
        cout << mostDiff << endl;
    }
}
using namespace std;
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<bool> v(n + 1, false);
        int princess = -1;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            bool found = 0;

            for (int j = 0; j < k; j++)
            {
                int p;
                cin >> p;
                if (!v[p] && !found)
                {
                    v[p] = true;
                    found = 1;
                }
            }
            if (!found && princess == -1)
            {
                princess = i + 1;
            }
        }

        bool found = false;
        for (int i = 1; i <= n; i++)
        {
            if (!v[i])
            {
                cout << "IMPROVE" << endl;
                cout << princess << ' ' << i << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "OPTIMAL" << endl;
        }
    }
}
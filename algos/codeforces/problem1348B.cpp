using namespace std;
#include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            st.insert(a);
        }

        if (st.size() > k)
        {
            cout << -1 << endl;
            continue;
        }
        cout << n * k << endl;
        for (int i = 0; i < n; i++)
        {
            for (auto it = st.begin(); it != st.end(); it++)
            {
                cout << *it << " ";
            }

            int size = st.size();
            for (int j = 0; j < k - size; j++)
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
}
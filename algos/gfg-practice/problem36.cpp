#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int solve(vector<int> v, int n, int k)
{
    vector<int> queue;

    int count = 0;
    vector<int>::iterator it;

    for (int i = 0; i < n; i++)
    {
        it = find(queue.begin(), queue.end(), v[i]);
        if (it == queue.end() && queue.size() < k)
        {
            count++;
            queue.push_back(v[i]);
        }
        else if (it != queue.end())
        {
            queue.erase(it);
            queue.push_back(v[i]);
            continue;
        }
        else if (it == queue.end() && queue.size() == k)
        {
            count++;
            queue.erase(queue.begin());
            queue.push_back(v[i]);
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int k;
        cin >> k;

        int ans = solve(v, n, k);
        cout << ans << endl;
    }
}
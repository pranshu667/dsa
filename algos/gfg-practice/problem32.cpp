#include <iostream>
using namespace std;
#include <bits/stdc++.h>
bool comparator(const pair<int, int> &a, const pair<int, int> &b)
{

    return a.second > b.second;
}

void print(vector<pair<int, int>> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

void maxProfit(vector<pair<int, int>> v)
{
    sort(v.begin(), v.end(), comparator);
    int n = v.size();

    //print(v);

    bool slot[n];
    memset(slot, false, sizeof(slot));
    int profit = 0;
    int jobs = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, v[i].first) - 1; j >= 0; j--)
        {
            if (!slot[j])
            {
                slot[j] = true;
                profit += v[i].second;
                jobs++;
                break;
            }
        }
    }
    cout << jobs << " " << profit << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int size = 3 * n;

        vector<pair<int, int>> v;
        int *arr = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < size; i += 3)
        {
            v.push_back(make_pair(arr[i + 1], arr[i + 2]));
        }

        maxProfit(v);
    }
}
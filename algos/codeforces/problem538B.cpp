#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;
void print(vector<int> v)
{
    int l = v.size();
    for (int i = 0; i < l; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int t = 1;

    while (t--)
    {
        ll n;
        cin >> n;

        stack<int> s;
        int maximum = INT_MIN;
        while (n)
        {
            s.push(n % 10);
            if (n % 10 > maximum)
            {
                maximum = n % 10;
            }
            n /= 10;
        }
        int col = s.size();
        int row = maximum;

        int **arr = new int *[row];
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[col];
        }
        int num;
        for (int j = 0; j < col; j++)
        {
            num = s.top();
            s.pop();
            for (int i = 0; i < num; i++)
            {

                arr[i][j] = 1;
            }
            for (int i = num; i < maximum; i++)
            {
                arr[i][j] = 0;
            }
        }
        cout << row << endl;

        //print array
        vector<int> v;
        num = 0;
        for (int i = 0; i < row; i++)
        {
            num = 0;
            for (int j = 0; j < col; j++)
            {
                num = num * 10 + arr[i][j];
            }
            v.push_back(num);
        }
        print(v);
        cout << endl;
    }
}
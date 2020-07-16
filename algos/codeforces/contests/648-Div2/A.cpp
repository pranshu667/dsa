#include <bits/stdc++.h>
using namespace std;

bool isRowSafe(int i, int **mat, int m)
{
    for (int j = 0; j < m; j++)
    {
        if (mat[i][j] == 1)
        {
            return false;
        }
    }
    return true;
}

bool isColSafe(int j, int **mat, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (mat[i][j] == 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int **mat = new int *[n];
        for (int i = 0; i < n; i++)
        {
            mat[i] = new int[m];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }

        bool ashish = false;

        for (int i = 0; i < n; i++)
        {
            if (isRowSafe(i, mat, m))
            {
                for (int j = 0; j < m; j++)
                {
                    if (isColSafe(j, mat, n) && isRowSafe(i, mat, m))
                    {
                        mat[i][j] = 1;
                        ashish = !ashish;
                    }
                }
            }
        }
        if (ashish)
        {
            cout << "Ashish" << endl;
        }
        else
        {
            cout << "Vivek" << endl;
        }
    }
}
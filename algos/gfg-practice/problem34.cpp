#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int solve(int *a, int *b, int m, int n)
{
    int maximumSum = 0;
    int i1 = 0;
    int i2 = 0;
    int aSum = 0;
    int bSum = 0;
    int maxSum = 0;

    while (i1 < m && i2 < n)
    {
        if (a[i1] < b[i2])
        {
            aSum += a[i1];
            i1++;
        }
        else if (a[i1] > b[i2])
        {
            bSum += b[i2];
            i2++;
        }
        else
        {

            int temp = a[i1];
            while (a[i1] == temp && (i1 < m))
            {
                aSum += a[i1];
                i1++;
            }
            while (b[i2] == temp && (i2 < n))
            {
                bSum += b[i2];
                i2++;
            }
            maxSum += max(aSum, bSum);
            aSum = 0;
            bSum = 0;
        }
    }
    while (i1 < m)
    {
        aSum += a[i1];
        i1++;
    }
    while (i2 < n)
    {
        bSum += b[i2];
        i2++;
    }

    if (aSum > bSum)
    {
        maxSum += aSum;
    }
    else
    {
        maxSum += bSum;
    }

    return maxSum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n1, n2;
        cin >> n1 >> n2;

        int *a = new int[n1];
        int *b = new int[n2];

        for (int i = 0; i < n1; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n2; i++)
        {
            cin >> b[i];
        }

        int ans = solve(a, b, n1, n2);
        cout << ans << endl;
    }
}
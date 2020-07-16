#include <iostream>
using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        ll *arr = new ll[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int cnt = 0;
        int i = 0;
        int posIndex = -1;
        int negIndex = -1;
        ll maxPos = 0;
        ll maxNeg = -1000000001;
        ll sum = 0;

        while (i < n)
        {
            maxPos = 0;
            maxNeg = -1000000001;
            posIndex = -1;
            negIndex = -1;
            while (i < n && arr[i] > 0)
            {
                if (arr[i] > maxPos)
                {
                    maxPos = arr[i];
                    posIndex = i;
                }
                i++;
            }
            //cout << "PosIndex:" << posIndex << endl;

            if (posIndex != -1)
            {
                sum += arr[posIndex];
            }

            while (i < n && arr[i] < 0)
            {
                if (arr[i] > maxNeg)
                {
                    maxNeg = arr[i];
                    negIndex = i;
                }
                i++;
            }
            //cout << "negIndex:" << negIndex << endl;

            if (negIndex != -1)
            {
                sum += arr[negIndex];
            }
        }
        cout << sum - 1 + 1 << endl;
    }
}
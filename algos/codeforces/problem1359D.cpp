using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int singleMax = INT_MIN;
    int curSum = 0;
    int curSumExcluded = 0;
    int maxSumExcluded = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > singleMax)
        {
            singleMax = arr[i];
        }
        curSum += arr[i];
        curSumExcluded = curSum - singleMax;
        if (curSumExcluded < 0)
        {
            curSum = 0;
            singleMax = INT_MIN;
        }
        if(curSumExcluded>maxSumExcluded) {
            maxSumExcluded = curSumExcluded;
        }
    }
    cout << maxSumExcluded << endl;
}

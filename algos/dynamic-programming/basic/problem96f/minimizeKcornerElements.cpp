#include<bits/stdc++.h>
using namespace std;

int summation(int *arr,int n) {
    int sum = 0;
    for (int i = 0; i < n;i++) {
        sum += arr[i];
    }
    return sum;
}

int solve(int *arr,int start,int end,int k) {
    if(k==1) {
        return min(arr[start], arr[end]);
    }
    return min(arr[start] + solve(arr, start + 1, end, k - 1), arr[end] + solve(arr, start, end - 1, k - 1));
}

int solveb(int *arr,int n,int k) {
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 0; i < k;i++) {
        leftSum+=arr[i];
        rightSum += arr[n - i - 1];
    }
    

    
    int res = 0;
    int start = 0;
    int end = n - 1;

    while (k != 0)
    {
        if(leftSum<rightSum) {
            res += arr[start];
            leftSum -= arr[start];
            rightSum -= arr[end - k + 1];
            start++;
        }
        else {
            res += arr[end];
            rightSum -= arr[end];
            leftSum -= (arr[start + k - 1]);
            end--;
        }
    }
    return res;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int *arr = new int[n];
        for (int i = 0; i < n;i++) {
            cin >> arr[i];
        }

        int ans = solve(arr, 0, n - 1, k);
        int sum = summation(arr, n);
        cout << ans << endl;
    }
}
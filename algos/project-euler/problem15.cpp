#include<bits/stdc++.h>
using namespace std;

long long int C(int n,int r) {
    long long int dp[r + 1];
    dp[0] = 1;
    for (int i = 1; i <= r;i++) {
        dp[i] = dp[i - 1] * (n - i + 1) / i;
    }
    return dp[r];
}

int main() {
    cout << C(40, 20) << endl;
}
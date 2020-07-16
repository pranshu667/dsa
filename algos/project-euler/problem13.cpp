#include<bits/stdc++.h>
using namespace std;

char *firstTenDigits(char **str,int n,int m) {
    //char *ans = new char[10];
    string ans = "";
    int sum = 0;
    int carry = 0;

    for (int j = m-1; j >= 0;j--) {
        sum = carry;
        for (int i = 0; i < n; i++)
        {
            sum += (str[i][j] - 48);
        }
        ans += (sum % 10) + 48;
        carry = sum / 10;
    }
    int num;
    while (carry)
    {
        num = carry % 10;
        ans += (num + 48);
        carry = carry / 10;
    }
    reverse(ans.begin(), ans.end());
    cout << ans.substr(0,10) << endl;
}

int main() {
    int n,m;
    cin >> n >> m;
    char **str = new char *[n];
    for (int i = 0; i < n;i++) {
        str[i] = new char[m];
    }

    for (int i = 0; i < n;i++) {
        for (int j = 0; j < m;j++) {
            cin >> str[i][j];
        }
    }

    

    //char *ans = new char[10];
    firstTenDigits(str,n,m);
    // for (int i = 0; i < 10;i++) {
    //     cout << ans[i];
    // }
    // cout << endl;
    // int b = 9;
    // ans[0] = b + 48;
    // cout << ans[0] << endl;

    
}
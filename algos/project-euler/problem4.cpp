#include<bits/stdc++.h>
using namespace std;

bool checkPallindrome(int n) {
    int num=0;
    int originalNum = n;
    while (n != 0)
    {
        num=num*10+n%10;
        n = n / 10;
    }
    return originalNum == num;
}

int main() {
    int res = 0;

    for (int i = 990; i >= 100;i=i-11) {
        for (int j = 999; j >= 100;j--) {
            int prod = i * j;
            if(prod>res&&checkPallindrome(prod)) {
                res = prod;
            }
            else if(prod<=res) {
                break;
            }
        }
    }

    cout << res << endl;
}
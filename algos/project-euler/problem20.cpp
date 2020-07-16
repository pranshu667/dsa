#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    queue<int> q;
    q.push(1);
    int carry = 0;
    queue<int> q2;
    int unit;
    int prod;
    int num;

    for (int i = 2; i <= 100;i++) {
        
        while(!q.empty()) {
            unit = q.front();
            q.pop();
            prod = unit * i;
            num = prod + carry;
            q2.push(num % 10);
            carry = num / 10;

        }
        while(carry!=0) {
            q2.push(carry % 10);
            carry /= 10;
        }
        swap(q, q2);
    }
    int sum = 0;
    while (!q.empty())
    {
        sum += q.front();
        q.pop();
    }
    cout << sum << endl;
}
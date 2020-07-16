using namespace std; 
#include<bits/stdc++.h>


int main() {
    
    queue<int> q;
    q.push(2);
    queue<int> q2;

    for (int i = 2; i <= 1000;i++) {
        
        int carry = 0;
        while (!q.empty())
        {
            int first = q.front();
            q.pop();
            int digit = (first * 2 + carry) % 10;
            carry = (first*2) / 10;
            q2.push(digit);
        }
        if(carry!=0) {
            q2.push(carry);
        }
        swap(q, q2);
    }

    int sum = 0;
    while(!q.empty()) {
        sum += q.front();
        q.pop();
    }
    cout << sum << endl;
}
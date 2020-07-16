#include<bits/stdc++.h>
using namespace std;

int noOfDivisors(long long int n) {
    map<long long int, long long int> m;

    
    while (n % 2 == 0)
    {
        m[2] = m[2] + 1;
        n = n / 2;
    }
    long long int root = sqrt(n);

    for (int i = 3; i <=sqrt(n);i+=2) {
        while(n%i==0) {
            m[i]++;
            n = n / i;
        }
        
    }

    if(n>2) {
        m[n]++;
    }
    long long int ans = 1;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        ans *= (it->second + 1);
        }
    
    return ans;
}

int main() {

    int i = 2;
    while(true) {
        cout << i * (i + 1)/2 << endl;
        if (noOfDivisors(i * (i + 1)/2) > 500)
        {
            cout << i * (i + 1)/2 << endl;
            break;
        }
        i++;
    }
    
}

int main() {
    int cnt = 0;
    int dn1 = 2;
    int dn2 = 2;
    int i=
    while(cnt<=500) {
        if()
    }
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin>>n;

    long long int maxPrime=-1;
    long long int limit=floor(sqrt(n));

    while(n%2==0) {
        maxPrime=2;
        n=n/2;
    }

    for(int i=3;i<=sqrt(n);i+=2) {
        while(n%i==0) {
            maxPrime=i;
            n=n/i;
            
        }
    }

    if(n>2) {
        maxPrime=n;
    }
    cout<<maxPrime;
}
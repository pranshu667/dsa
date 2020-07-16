#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 1000000

void NthPrime(vector<int> &primes) {
    bool isPrime[MAX_SIZE];
    memset(isPrime, true, sizeof(isPrime));

    for (int p = 2; p * p < MAX_SIZE;p++) {
        if(isPrime[p]==true) {
            for (int i = p * p; i < MAX_SIZE;i+=p) {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p < MAX_SIZE;p++) {
        if(isPrime[p]) {
            primes.push_back(p);
        }
    }
}

int main() {
    
    vector<int> primes;
    NthPrime(primes);

    cout << primes[10000];
}
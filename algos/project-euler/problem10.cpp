#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 2000001

int main() {
    bool isPrime[MAX_SIZE+1];
    memset(isPrime, true, sizeof(isPrime));

    for (int p = 2; p * p <= MAX_SIZE;p++) {
        if(isPrime[p]==true) {
            for (int i = p * p; i <= MAX_SIZE;i+=p) {
                isPrime[i] = false;
            }
        }
    }

    long long int sum = 0;
    for (int p = 2; p <= MAX_SIZE; p++)
    {
        if(isPrime[p]) {
            sum += p;
        }
    }
    cout << sum << endl;

}
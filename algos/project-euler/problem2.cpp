#include<bits/stdc++.h>
using namespace std;

int main() {
    int a=1;
    int b=2;
    long long int sum=3;
    long long int evenSum=2;
    while(sum<=4000000) {
        if(sum%2) {
            evenSum+=sum;
        }
        a=b;
        b=sum;
        sum=a+b;



    }
    cout<<evenSum<<endl;
}
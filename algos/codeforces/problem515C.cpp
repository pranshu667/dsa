using namespace std;
#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;
    long long int a;
    cin >> a;
    string arr[10];
    arr[0] = "0";
    arr[1] = "1";
    arr[2] = "2";
    arr[3] = "3";
    arr[4] = "322";
    arr[5] = "5";
    arr[6] = "53";
    arr[7] = "7";
    arr[8] = "7222";
    arr[9] = "7332";

    string str="";

    while(a) {
        if(a%10>1) {
            str+=arr[a%10];
            
        }
        a/=10;

    }
    sort(str.begin(),str.end(),greater<char>());
    cout<<str<<endl;


}
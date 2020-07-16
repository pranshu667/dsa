#include<bits/stdc++.h>
using namespace std;

int main() {

    int ans = 0;

    for (int a = 0; a <= 1000;a++) {
        for (int b = a + 1; b <= 1000;b++) {
            if(a+b>=1000) {
                break;
            }
            for (int c = b + 1; c <= 1000;c++) {
                if(a+b+c==1000&&(a*a+b*b==c*c)) {
                    cout << a * b * c;
                    return 0;
                }
                else if(a+b+c>1000) {
                    break;
                }
            }
        }
    }
}
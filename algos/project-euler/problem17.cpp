#include <iostream>
using namespace std;
#include<bits/stdc++.h>
map<int, int> m;

int main() {
    m[1] = 3;
    m[2] = 3;
    m[3] = 5;
    m[4] = 4;
    m[5] = 4;
    m[6] = 3;
    m[7] = 5;
    m[8] = 5;
    m[9] = 4;
    m[10] = 3;
    m[11] = 6;
    m[12] = 6;
    m[13] = 8;
    m[14] = 8;
    m[15] = 7;
    m[16] = 7;
    m[17] = 9;
    m[18] = 8;
    m[19] = 8;
    m[20] = 6;
    m[30] = 6;
    m[40] = 5;
    m[50] = 5;
    m[60] = 5;
    m[70] = 7;
    m[80] = 6;
    m[90] = 6;
    m[100] = 7;
    m[1000] = 8;

    int count = 0;
    int a, b, c;

    for (int i = 1; i < 100;i++) {
        if(m.find(i)==m.end()) {
            a = i % 10;
            b = i / 10;
            m[i] = m[b * 10] + m[a];
        }
    }

    for (int i = 101; i <= 999;i++) {
        if(i%100==0) {
            m[i] = m[i / 100] + m[100];
        }
        else {
            m[i] = m[i / 100] + m[100] + m[i % 100] + 3;
        }
    }

    for (auto it = m.begin(); it != m.end();it++) {
        count += it->second;
    }
    int k;
    cin >> k;
    cout << m[k] << endl;
    cout << count+6 << endl;
}
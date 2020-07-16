#include<bits/stdc++.h>
using namespace std;




int main() {
    const int number = 1000000;
    int length;
    long sequence;
    int maximum = 0;
    int cache[number];
    for (int i = 0; i < number;i++) {
        cache[i] = -1;
    }
    cache[1] = 1;
    int k;
    for (int i = 2; i < number; i++)
    {
        
        k = 0;
        sequence = i;
        while(sequence!=1&&sequence>=i) {
            if(sequence%2 == 0) {
                sequence = sequence / 2;
            }
            else {
                sequence = 3 * sequence + 1;
            }
            k++;
        }
        cache[i] = k + cache[sequence];
        if (cache[i] > maximum)
        {
            maximum = cache[i];
        }
    }
    
    cout << maximum << endl;
}
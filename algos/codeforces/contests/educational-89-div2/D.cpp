#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i = 10;
    int *p1 = &i;
    int **p2 = &p1;
    int ***p3 = &p2;
    cout << p3 << endl;
}
    #include <iostream>
    using namespace std;
    #include <bits/stdc++.h>

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long int end = pow(2, n);
        long long int start = 2;
        long long int globalSum = 2 * end - 2;
        long long int sum = 0;
        end /= 2;

        int length = n / 2;
        int i = 0;
        while (i < length)
        {
            sum += end;
            end /= 2;
            i++;
        }
        long long int a = sum;
        long long int b = globalSum - a;
        cout << abs(a - b) << endl;
    }
}
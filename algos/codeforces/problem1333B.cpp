using namespace std;
#include <bits/stdc++.h>
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int *a = new int[n];
        ll *b = new ll[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int neg = 0;
        int pos = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {

                if (pos == 0)
                {
                    cout << "NO" << endl;
                    break;
                }
                else
                {
                    if (i == n - 1)
                    {
                        cout << "YES" << endl;
                    }
                }
            }
            else if (a[i] == b[i])
            {
                if (i == n - 1)
                {
                    cout << "YES" << endl;
                }
            }
            else
            {

                if (neg == 0)
                {
                    cout << "NO" << endl;
                    break;
                }
                else
                {
                    if (i == n - 1)
                    {
                        cout << "YES" << endl;
                    }
                }
            }

            if (a[i] < 0)
            {
                neg++;
            }
            else if (a[i] > 0)
            {
                pos++;
            }
        }
    }
}
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    string s;
    cin >> s;
    int num = 0;
    bool flag = false;
    int a, b, c;
    for (int i = 0; s[i]; i++)
    {
        if (flag)
        {
            break;
        }
        else
        {
            a = s[i] - 48;
            if (a % 8 == 0)
            {
                cout << "YES" << endl;
                cout << a << endl;
                flag = true;
                break;
            }
        }

        for (int j = i + 1; s[j]; j++)
        {
            if (flag)
            {
                break;
            }
            else
            {
                b = a * 10 + (s[j] - 48);
                if (b % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << b << endl;
                    flag = true;
                    break;
                }
            }

            for (int k = j + 1; s[k]; k++)
            {
                if (flag)
                {
                    break;
                }
                else
                {
                    c = b * 10 + (s[k] - 48);
                    if (c % 8 == 0)
                    {
                        cout << "YES" << endl;
                        cout << c << endl;
                        flag = true;
                        break;
                    }
                }
            }
        }
    }

    if (!flag)
    {
        cout << "NO" << endl;
    }
}
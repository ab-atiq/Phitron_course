#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1 || n == 0)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n + 0.5); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int T;
    cin >> T;
    int Case = 1;
    while (T--)
    {
        string s;
        cin >> s;

        int a[62];
        memset(a, 0, sizeof(a));

        for (int i = 0; i != s.size(); ++i)
        {
            if (isdigit(s[i]))
            {
                ++a[s[i] - '0'];
            }
            else if (isalpha(s[i]))
            {
                if (isupper(s[i]))
                {
                    ++a[s[i] - 'A' + 10];
                }
                if (islower(s[i]))
                {
                    ++a[s[i] - 'a' + 36];
                }
            }
        }

        cout << "Case " << Case++ << ": ";
        int num = 0;
        for (int i = 0; i != 62; ++i)
        {
            if (isPrime(a[i]))
            {
                if (i <= 9)
                {
                    cout << char(i + '0');
                    num++;
                }
                else if (i <= 35)
                {
                    cout << char('A' + i - 10);
                    num++;
                }
                else
                {
                    cout << char('a' + i - 36);
                    num++;
                }
            }
        }

        if (num == 0)
        {
            cout << "empty" << endl;
        }
        else
        {
            cout << endl;
        }
    }

    return 0;
}

/*
----------------------
|                    |
| Abul Bashar Atiq   |
|                    |
----------------------
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int TC;
    cin >> TC;

    while (TC--)
    {
        string str;
        cin >> str;
        ll fst, sec, trd, frth, five;
        ll eFst, eSec, eTrd, eFrth, eFive;
        if (str.size() < 5)
        {
            fst = 0;
            eFst = 0;
        }
        else if (str[str.size() - 5] == '?')
        {
            fst = 0;
            eFst = 9;
        }
        else
        {
            fst = str[str.size() - 5] - '0';
            eFst = str[str.size() - 5] - '0';
        }

        if (str.size() < 4)
        {
            sec = 0;
            eSec = 0;
        }
        else if (str[str.size() - 4] == '?')
        {
            sec = 0;
            eSec = 9;
        }
        else
        {
            sec = str[str.size() - 4] - '0';
            eSec = str[str.size() - 4] - '0';
        }

        if (str.size() < 3)
        {
            trd = 0;
            eTrd = 0;
        }
        else if (str[str.size() - 3] == '?')
        {
            trd = 0;
            eTrd = 9;
        }
        else
        {
            trd = str[str.size() - 3] - '0';
            eTrd = str[str.size() - 3] - '0';
        }

        if (str.size() < 2)
        {
            frth = 0;
            eFrth = 0;
        }
        else if (str[str.size() - 2] == '?')
        {
            frth = 0;
            eFrth = 9;
        }
        else
        {
            frth = str[str.size() - 2] - '0';
            eFrth = str[str.size() - 2] - '0';
        }

        if (str[str.size() - 1] == '?')
        {
            five = 0;
            eFive = 9;
        }
        else
        {
            five = str[str.size() - 1] - '0';
            eFive = str[str.size() - 1] - '0';
        }

        ll finalAns = 0, cntOne = 0;
        for (ll i = fst; i <= eFst; i++)
        {
            for (ll j = sec; j <= eSec; j++)
            {
                for (ll k = trd; k <= eTrd; k++)
                {
                    for (ll l = frth; l <= eFrth; l++)
                    {
                        for (ll m = five; m <= eFive; m++)
                        {
                            ll num = i * 10000 + j * 1000 + k * 100 + l * 10 + m * 1;
                            ll temCnt = __builtin_popcount(num);
                            if (temCnt > cntOne)
                            {
                                finalAns = num;
                                cntOne = temCnt;
                            }
                            else if (temCnt == cntOne)
                            {
                                finalAns = max(finalAns, num);
                            }
                        }
                    }
                }
            }
        }
        cout << finalAns << endl;
    }

    return 0;
}

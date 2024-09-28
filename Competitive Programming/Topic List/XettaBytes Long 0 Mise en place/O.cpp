#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ch;
    cin >> ch;
    int len, chk = 0, count = 0;
    len = ch.length();
    cout << len << endl;

    for (int i = 0; i < len - 1; i++)
    {
        if (ch[i] > ch[i + 1])
        {
            chk = 1;
        }
    }
    
    if (chk != 0)
    {
        cout << 0 << endl;
        return 0;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

char s[90000][6];
char t[6];
int num;

void dfs(int c, int index, int n)
{
    if (c == n)
    {
        t[c] = 0;
        strcpy(s[num++], t);
        return;
    }
    int i;
    for (i = index + 1; i < 26; i++)
    {
        t[c] = i + 'a';
        dfs(c + 1, i, n);
    }
}

int main()
{
    char c[6];
    int i, len1, len;
    for (i = 1; i <= 5; i++)
    {
        dfs(0, -1, i);
    }
    while (gets(c))
    {
        len1 = strlen(c);
        for (i = 0; i < 83681; i++)
        {
            len = strlen(s[i]);
            if (len1 == len && strcmp(c, s[i]) == 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
        if (i == 83681)
            cout << 0 << endl;
    }
    return 0;
}

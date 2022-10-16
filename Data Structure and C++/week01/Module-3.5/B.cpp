// Print the string obtained by concatenating all the characters in the odd-numbered positions.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100020];
    cin >> str;
    int len = strlen(str);
    int i = 0;
    while (i < len)
    {
        if (i % 2 == 0)
        {
            cout << str[i];
        }
        i++;
    }
    cout<<endl;
    return 0;
}
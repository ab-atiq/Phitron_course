// Print the string obtained by concatenating all the characters in the odd-numbered positions.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int len = str.length();
    for (int i = 0; i < len; i += 2)
    {

        cout << str[i];
    }
    cout << endl;
    return 0;
}
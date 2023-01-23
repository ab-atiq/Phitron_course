#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    string len_str = to_string(len - 2);
    cout << str[0] + len_str + str[len - 1];
    return 0;
}
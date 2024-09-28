#include <bits/stdc++.h>
using namespace std;

int is_subsequence(string s1, string s2, int length1, int length2)
{
    if (length1 == 0)
        return 1;
    if (length2 == 0)
        return 0;
    if (s1[length1 - 1] == s2[length2 - 1])
        return is_subsequence(s1, s2, length1 - 1, length2 - 1);
    else
        return is_subsequence(s1, s2, length1, length2 - 1);
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int len1, len2, is_sub = 0;
    len1 = str1.length();
    len2 = str2.length();
    is_sub = is_subsequence(str1, str2, len1, len2);

    if (is_sub == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
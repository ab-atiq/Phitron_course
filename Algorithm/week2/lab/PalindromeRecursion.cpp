#include <bits/stdc++.h>
using namespace std;

bool CheckPalindrome(string str)
{
    if (str == "" || str.size() == 1)
        return true;
    int n = str.size();
    string small_str = str.substr(1, n - 2);
    return CheckPalindrome(small_str) && (str[0] == str.back()); // check first and last character equal or not. Check Palindrome again without first and last char.
}

int main()
{
    string input_str;
    cout << "Enter your string: ";
    cin >> input_str;
    if (CheckPalindrome(input_str))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
    return 0;
}
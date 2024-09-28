#include <iostream>
using namespace std;

void printSubsequence(string str, int idx, string newStr)
{
    if (str.length() == idx)
    {
        cout << newStr << endl;
        return;
    }

    char ch = str[idx];
    // to be
    printSubsequence(str, idx + 1, newStr + ch);
    // not to be
    printSubsequence(str, idx + 1, newStr);
}

int main()
{
    string str = "abc";
    printSubsequence(str, 0, "");
    return 0;
}
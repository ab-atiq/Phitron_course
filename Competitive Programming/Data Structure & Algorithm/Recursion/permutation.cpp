#include <iostream>
using namespace std;

void printPermutation(string str, string permutation)
{
    if (str.length() == 0)
    {
        cout << permutation << endl;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        char currChar = str[i];
        string newStr = str.substr(0, i) + str.substr(i + 1);
        printPermutation(newStr, permutation + currChar);
    }
}

int main()
{
    string str = "abc";
    printPermutation(str, "");

    return 0;
}
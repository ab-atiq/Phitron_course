#include <iostream>
using namespace std;
void permutation(string str, string perm, int idx)
{
    if (str.length() == 0)
    {
        cout << perm << endl;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        char currChar = str[i];
        string newStr = str.substr(0, i) + str.substr(i + 1);
        permutation(newStr, perm + currChar, idx + 1);
    }
}

int main()
{
    string str = "ABC";
    permutation(str, "", 0);
    return 0;
}
#include <iostream>
using namespace std;
void removeDuplicate(string str, int idx, string newString)
{
    static bool arr[26] = {false};
    if (str.length() == idx)
    {
        cout << newString << endl;
        return;
    }
    char ch = str.at(idx);
    if (arr[ch - 'a'] == true)
    {
        removeDuplicate(str, idx + 1, newString);
    }
    else
    {
        newString += ch;
        arr[ch - 'a'] = true;
        removeDuplicate(str, idx + 1, newString);
    }
}
int main()
{
    string str;
    cin >> str;
    removeDuplicate(str, 0, "");
    return 0;
}

/*
input: abbccda
output: abcd
 */
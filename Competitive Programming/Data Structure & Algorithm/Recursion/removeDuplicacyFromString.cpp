#include <iostream>
using namespace std;
void removeDuplicacy(string str, int idx, string newString)
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
        removeDuplicacy(str, idx + 1, newString);
    }
    else
    {
        newString += ch;
        arr[ch - 'a'] = true;
        removeDuplicacy(str, idx + 1, newString);
    }
}
int main()
{
    string str;
    cin >> str;
    removeDuplicacy(str, 0, "");
    return 0;
}

/* 
input: abbccda
output: abcd
 */
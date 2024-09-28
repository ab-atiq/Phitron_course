#include <iostream>
using namespace std;
void moveCharaterLast(string str, int idx, int count, string newString)
{
    if (str.length() == idx)
    {
        for (int i = 0; i < count; i++)
            newString += 'x';
        cout << "Output string is: " << newString << endl;
    }
    char ch = str[idx];
    if (ch == 'x')
    {
        count++;
        moveCharaterLast(str, idx + 1, count, newString);
    }
    else
    {
        newString += ch;
        moveCharaterLast(str, idx + 1, count, newString);
    }
}
int main()
{
    string str;
    cin >> str;
    moveCharaterLast(str, 0, 0, "");
    return 0;
}
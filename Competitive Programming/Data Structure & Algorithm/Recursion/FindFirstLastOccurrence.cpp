#include <iostream>
using namespace std;

void findOccurance(string str, int idx, char ch)
{
    static int first = -1, last = -1;
    if (str.length() == idx)
    {
        cout << "First occurrence index: " << first << endl;
        cout << "Last occurrence index: " << last << endl;
        return;
    }
    if (str[idx] == ch)
    {
        if (first == -1)
        {
            first = idx;
            last = idx;
        }
        else
        {
            last = idx;
        }
    }
    findOccurance(str, idx + 1, ch);
}

int main()
{
    string S;
    cout<<"Enter String: ";
    cin >> S;
    char c;
    cout<<"Enter char which want to find: ";
    cin >> c;
    findOccurance(S, 0, c);
    return 0;
}
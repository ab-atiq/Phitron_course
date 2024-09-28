#include <iostream>
using namespace std;
void reverseString(string str, int len)
{
    if (len == 0)
    {
        cout << str[0] << endl;
        return;
    }
    cout << str[len];
    reverseString(str, len - 1);
}
int main()
{
    string S;
    cin >> S; 
    int len = S.length();
    // if we pass only len that will be correct but one redundant call.
    reverseString(S, len - 1);
    return 0;
}
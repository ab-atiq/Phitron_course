#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "aaaabbbbccccddddeeeeffffgggghhhh";
    cout << str.find('b') << endl;
    cout << str.find_first_of('b') << endl;
    cout << str.find_last_of('b') << endl;
    cout << str.find_first_not_of('b') << endl; // where from first 'b' not found.
    cout << str.find_last_not_of('b') << endl; // where from last 'b' not found.
    // substring
    string sub = str.substr(3, 8);
    cout << sub << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << n << endl;

    char c;
    cin >> c;
    cout << c << endl;

    char str1[10];
    // input without space
    cin >> str1;
    cout << str1 << endl;

    char str2[50];
    // input with space
    cin.getline(str2, 50);
    cout << str2 << endl;
    return 0;
}
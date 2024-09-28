#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "abcdefghij";
    str.assign("uvwxyz");
    cout << str << endl;

    string str1 = "abc";
    string str2 = "xyz";
    // str1 += str2;
    str1.append(str2); // string concatenation
    cout << str1 << endl;

    // push and pop use
    string str3 = "abcd";
    str3.push_back('x');
    cout << str3 << endl;
    str3.pop_back();
    cout << str3 << endl;

    // insert and delete
    string str4 = "abcdefghij";
    str4.insert(1, "wxyz");
    cout << str4 << endl;
    str4.erase(3, 5); // first value where start erase, second value how much value erase.
    cout << str4 << endl;

    // swap two string
    string str5 = "abcdefghij";
    string str6 = "xyz";
    swap(str5, str6);
    cout << str5 << " " << str6 << endl;

    return 0;
}
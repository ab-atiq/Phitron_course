#include <bits/stdc++.h>
using namespace std;
int main()
{
    // sting object
    string st; // dynamic array so, we don't need assign size. like char st[100].
    cout << "Present capacity: " << st.capacity() << " Max capacity: " << st.max_size() << endl;
    // cin >> st;
    // cout << st << endl;
    // cout << st.capacity() << endl;

    string st2(10, 'x'); // constructor
    cout << st2 << endl;

    string str1 = "abcd";
    string str2 = "wxyz";

    // string copy in str1 from str2
    str1 = str2;
    cout << str1 << endl;

    // string concatenation
    string conCat = str1 + str2;
    cout << conCat << endl;

    // string concatenation in str1
    str1 += str2;
    cout << str1 << endl;

    // string equal or not
    if (str1 == str2) // check using operation overloading
    {
        cout << "Two string are equal." << endl;
    }
    else
    {
        cout << "Two string are not equal." << endl;
    }

    return 0;
}
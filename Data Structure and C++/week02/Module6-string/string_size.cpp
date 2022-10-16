#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "atiqur";
    // cout<<str.size()<<endl;
    cout << str << " " << str.length() << endl;
    // resize string or cut last part
    str.resize(4);
    cout << str << " " << str.size() << endl;
    // clear string or delete string
    str.clear();
    cout << str << " " << str.length() << endl;
    // check string empty or not
    if (str.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }
    return 0;
}
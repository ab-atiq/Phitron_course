#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st = "abcdefghij";
    string::iterator it; // iterator get from string scope
    cout << "String element: " << endl;
    for (it = st.begin(); it != st.end(); it++)
    {
        cout << *it << " "; // here print it address value using *it.
    }

    // reverse print
    cout << endl
         << "Reverse element: " << endl;
    // string::reverse_iterator it2; // iterator get from string scope
    // for (string::reverse_iterator it2 = st.rbegin(); it2 != st.rend(); it2++)
    for (auto it2 = st.rbegin(); it2 != st.rend(); it2++) // using auto iterator. auto will identify which scope we use.
    {
        cout << *it2 << " "; // here print it address value using *it.
    }
    return 0;
}
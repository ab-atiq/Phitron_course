#include <bits/stdc++.h>
#include "MYSTACK.h"

using namespace std;

/*
    stack of int, float, double, char, string, pair, stucture, objects of class
*/

int main()
{
    Stack st;
    st.push(12);
    st.push(5);
    st.push(10);
    st.push(15);
    cout << "Empty or not : " << st.empty() << endl;
    cout << "Size of list: " << st.size() << endl;
    if (!st.empty()) // st.Top()!=-1
        cout << "Top element: " << st.Top() << endl;
    else
        cout << "Top element not present." << endl;
    // !st.empty() -> not work in while loop because of head file wrong in empty file
    // while (st.size() != 0)
    while (!st.empty())
    {
        cout << st.pop() << endl;
    }
    cout << "Size of list: " << st.size() << endl;
    cout << "Empty or not : " << st.empty() << endl;
    if (!st.empty()) // st.Top()!=-1
        cout << "Top element: " << st.Top() << endl;
    else
        cout << "Top element not present." << endl;

        return 0;
}
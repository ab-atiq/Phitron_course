#include <bits/stdc++.h>
#include "MYSTACK2.h"

using namespace std;

/*
    stack of int, float, double, char, string, pair, stucture, objects of class
*/

int main()
{
    Stack<int> st;
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
        cout << "Top element: " << st.Top() << endl
             << endl
             << endl;
    else
        cout << "Top element not present." << endl
             << endl
             << endl;

    Stack<float> st2;
    st2.push(12.5);
    st2.push(5.9);
    st2.push(10.4);
    st2.push(15.6);
    cout << "Empty or not : " << st2.empty() << endl;
    cout << "Size of list: " << st2.size() << endl;
    if (!st2.empty()) // st.Top()!=-1
        cout << "Top element: " << st2.Top() << endl;
    else
        cout << "Top element not present." << endl;
    // !st.empty() -> not work in while loop because of head file wrong in empty file
    // while (st.size() != 0)
    while (!st.empty())
    {
        cout << st2.pop() << endl;
    }
    cout << "Size of list: " << st2.size() << endl;
    cout << "Empty or not : " << st2.empty() << endl;
    if (!st.empty()) // st.Top()!=-1
        cout << "Top element: " << st2.Top() << endl
             << endl
             << endl;
    else
        cout << "Top element not present." << endl
             << endl
             << endl;

    Stack<char> st3;
    st3.push('a');
    st3.push('f');
    st3.push('h');
    st3.push('w');
    cout << "Empty or not : " << st3.empty() << endl;
    cout << "Size of list: " << st3.size() << endl;
    if (!st3.empty()) // st.Top()!=-1
        cout << "Top element: " << st3.Top() << endl;
    else
        cout << "Top element not present." << endl;
    // !st.empty() -> not work in while loop because of head file wrong in empty file
    // while (st.size() != 0)
    while (!st3.empty())
    {
        cout << st3.pop() << endl;
    }
    cout << "Size of list: " << st3.size() << endl;
    cout << "Empty or not : " << st3.empty() << endl;
    if (!st3.empty()) // st.Top()!=-1
        cout << "Top element: " << st3.Top() << endl
             << endl
             << endl;
    else
        cout << "Top element not present." << endl
             << endl
             << endl;

    Stack<string> st4;
    st4.push("Abul Bashar");
    st4.push("Atiqur Rahman");
    st4.push("Habibur Miah");
    st4.push("Rakibul islam");
    cout << "Empty or not : " << st4.empty() << endl;
    cout << "Size of list: " << st4.size() << endl;
    if (!st4.empty()) // st.Top()!=-1
        cout << "Top element: " << st4.Top() << endl;
    else
        cout << "Top element not present." << endl;
    // !st.empty() -> not work in while loop because of head file wrong in empty file
    // while (st.size() != 0)
    while (!st4.empty())
    {
        cout << st4.pop() << endl;
    }
    cout << "Size of list: " << st4.size() << endl;
    cout << "Empty or not : " << st4.empty() << endl;
    if (!st.empty()) // st.Top()!=-1
        cout << "Top element: " << st4.Top() << endl
             << endl
             << endl;
    else
        cout << "Top element not present." << endl
             << endl
             << endl;

    Stack<pair<int, char>> st5;
    st5.push(make_pair(12, 'a'));
    st5.push(make_pair(52, 'f'));
    st5.push(make_pair(62, 'j'));
    st5.push(make_pair(79, 't'));
    cout << "Empty or not : " << st5.empty() << endl;
    cout << "Size of list: " << st5.size() << endl;
    if (!st5.empty()) // st.Top()!=-1
    {
        pair<int, char> check;
        check = st5.pop();
        cout << "Top Element: " << check.first << " " << check.second << endl;
    }
    else
        cout << "Top element not present." << endl;
    // !st.empty() -> not work in while loop because of head file wrong in empty file
    // while (st.size() != 0)
    while (!st5.empty())
    {
        pair<int, char> check;
        check = st5.pop();
        cout << check.first << " " << check.second << endl;
    }
    cout << "Size of list: " << st5.size() << endl;
    cout << "Empty or not : " << st5.empty() << endl;
    if (!st5.empty()) // st.Top()!=-1
    {
        pair<int, char> check;
        check = st5.pop();
        cout << "Top Element: " << check.first << " " << check.second << endl
             << endl
             << endl;
    }
    else
        cout << "Top element not present." << endl
             << endl
             << endl;

    return 0;
}
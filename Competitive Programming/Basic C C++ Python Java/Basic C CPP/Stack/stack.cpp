#include <iostream>
#include <stack>
using namespace std;
// empty() – Returns whether the stack is empty – Time Complexity : O(1)
// size() – Returns the size of the stack – Time Complexity : O(1)
// top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
// push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
// pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1)
void showStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main()
{
    stack<int> s({1, 2, 3});
    showStack(s);

    s.push(34);
    s.push(25);
    s.push(38);
    s.push(44);
    showStack(s);

    // multiple time pop element from stack will not remove item from stack
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
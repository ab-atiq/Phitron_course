#include <bits/stdc++.h>
using namespace std;
// stack using doubly linked list
template <typename N>
class Node
{
public:
    N value;
    Node *next;
    Node *prev;
    Node(N val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};
// Stack <int> st;
template <typename S>
class Stack
{
    Node<S> *head;
    Node<S> *top;

public:
    int count = 0;
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // push
    void push(S v)
    {
        Node<S> *newNode = new Node<S>(v);
        if (head == NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        top->next = newNode;
        newNode->prev = top;
        top = top->next;
        count++;
    }
    // pop
    S pop()
    {
        Node<S> *delNode;
        delNode = top;
        S chk;

        if (head == NULL) // there is no element in stack
        {
            cout << "Empty list" << endl;
            return chk;
        }
        else if (head == top) // there is only 1 element
        {
            head == NULL;
            top = NULL;
        }
        else // there is more than 2 element
        {
            top = delNode->prev;
            top->next = NULL;
        }
        chk = delNode->value;
        delete delNode;
        count--;
        return chk;
    }
    // Empty
    bool empty()
    {
        // wrong in tutorial -> head == NULL
        if (top == NULL)
            return true;
        else
            return false;
    }
    // Size
    int size()
    {
        return count;
    }
    // Top
    S Top()
    {
        S chk;
        if (top == NULL)
        {
            cout << "Stack underflow | There is no element in top." << endl;
        }
        else
        {
            chk = top->value;
        }
        return chk;
    }
};
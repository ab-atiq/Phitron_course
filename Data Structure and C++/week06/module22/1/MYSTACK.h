#include <bits/stdc++.h>
using namespace std;
// stack using doubly linked list
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};
class Stack
{
    Node *head;
    Node *top;

public:
    int count = 0;
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    // push
    void push(int v)
    {
        Node *newNode = new Node(v);
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
    int pop()
    {
        Node *delNode;
        delNode = top;
        int chk = -1;

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
    int Top()
    {
        int chk;
        if (top == NULL)
        {
            cout << "Stack underflow | There is no element in top." << endl;
            chk = -1;
        }
        else
        {
            chk = top->value;
        }
        return chk;
    }
};
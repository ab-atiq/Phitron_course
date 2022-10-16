#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int val)
    {
        value = val;
        next = NULL;
    }
};

void insertNodeInTail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tempNextAddress = head;
    while (tempNextAddress->next != NULL)
    {
        tempNextAddress = tempNextAddress->next;
    }
    tempNextAddress->next = newNode;
}

void insertNodeInHead(Node *&head, int value)
{
    // s1: Create node
    Node *newNode = new Node(value);
    // s2: insert head address in newNode->next
    newNode->next = head;
    // s3: insert newNode address in head
    head = newNode;
}

void displayLinkedList(Node *h)
{
    while (h != NULL)
    {
        cout << h->value;
        if (h->next != NULL)
        {
            cout << " -> ";
        }
        h = h->next;
    }
};

int main()
{
    Node *head = NULL;
    int n, c = 2;
    while (c == 1 || c == 2)
    {
        cout << "Enter element in Linked List: ";
        cin >> n;
        if (c == 2)
        {
            insertNodeInTail(head, n);
        }
        else if (c == 1)
        {
            insertNodeInHead(head, n);
        }
        cout << "Linked list: ";
        displayLinkedList(head);
        cout << endl
             << "1. Insert element in head" << endl
             << "2. Insert element in tail" << endl
             << "3. Exit" << endl;
        cin >> c;
    }

    displayLinkedList(head);
    return 0;
}
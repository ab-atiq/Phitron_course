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

void insertLinkedListNode(Node *&head, int value)
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
    // Node *head = new Node(1);
    // Node *second = new Node(3);
    // Node *third = new Node(5);
    // Node *fourth = new Node(8);
    // head->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = NULL;

    Node *head = NULL;
    int n;
    char c = 'y';
    while (c == 'y' || c == 'Y')
    {
        cout << "Enter element in Linked List: ";
        cin >> n;
        insertLinkedListNode(head, n);
        cout << "Do you want to continue (Y/N): ";
        cin >> c;
    }

    displayLinkedList(head);
    return 0;
}
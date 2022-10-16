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

int linkedListLength(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
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

void deleteAtHead(Node *&head)
{
    Node *temp = head;
    if (temp != NULL)
    {

        head = temp->next;
        delete temp;
    }
    else
    {
        cout << "There is no value in linked list" << endl;
    }
}

void deleteAtTail(Node *&head)
{
    Node *temp = head;
    if (temp != NULL && temp->next != NULL)
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        Node *delNode = temp->next;
        temp->next = NULL;
        delete delNode;
    }
    else
    {
        // Head is NULL
        if (head == NULL)
        {
            cout << "There is no value in linked list.";
        }
        // head is tail
        else
        {
            deleteAtHead(head);
        }
    }
}

void deleteAtSpecificPosition(Node *&head, int p)
{
    Node *temp = head;
    int l = linkedListLength(head);
    if (temp != NULL && p <= l)
    {
        if (p == 1)
        {
            deleteAtHead(head);
        }
        else if (p == l)
        {
            deleteAtTail(head);
        }
        else
        {
            int i = 1;
            while (i < p - 1)
            {
                temp = temp->next;
                i++;
            }
            Node *delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
        }
    }
    else
    {
        if (p > linkedListLength(head))
        {
            cout << "Your position is over bound." << endl;
        }
        if (head == NULL)
        {
            cout << "Linked list is empty!!" << endl;
        }
    }
}

int main()
{
    Node *head = NULL;
    int k, m, n;
    cin >> k >> m >> n;
    while (k--)
    {
        int val;
        cin >> val;
        insertAtTail(head, val);
    }
    while (n--)
    {
        deleteAtSpecificPosition(head, m + 1);
        deleteAtTail(head);
    }
    displayLinkedList(head);
    return 0;
}
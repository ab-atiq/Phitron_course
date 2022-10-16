#include <bits/stdc++.h>
using namespace std;
class doublyNode
{
public:
    int value;
    doublyNode *next;
    doublyNode *pre;
    doublyNode(int val)
    {
        value = val;
        next = NULL;
        pre = NULL;
    }
};

void insertAtTail(doublyNode *&head, int val)
{
    doublyNode *newNode = new doublyNode(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    doublyNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->pre = temp;
}

void insertAtHead(doublyNode *&head, int val)
{
    // s1: newNode creation
    doublyNode *newNode = new doublyNode(val);
    // s2: update of head previous
    head->pre = newNode;
    // s3: update of newNode next
    newNode->next = head;
    // s4: update of head
    head = newNode;
}

void displayLinkedList(doublyNode *h)
{
    while (h != NULL)
    {
        cout << h->value;
        if (h->next != NULL)
        {
            cout << " ->- ";
        }
        h = h->next;
    }
};

int linkedListLength(doublyNode *head)
{
    int count = 0;
    doublyNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void reverseLinkedList(doublyNode *&head)
{
    doublyNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->value;
        if (temp->pre != NULL)
        {
            cout << "--->";
        }
        temp = temp->pre;
    }
    cout << endl;
}

int main()
{
    doublyNode *head = NULL;
    int c = 2, p, val;
    while (c != 0)
    {
        switch (c)
        {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            insertAtHead(head, val);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> val;
            insertAtTail(head, val);
            break;
        case 3:
            reverseLinkedList(head);
            break;

        default:
            break;
        }
        cout << "1. Insert at head" << endl
             << "2. Insert at tail" << endl
             << "3. Reverse linked list" << endl
             << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> c;
    }
    cout << "Linked list: ";
    displayLinkedList(head);
    cout << endl
         << "Length of list: " << linkedListLength(head);
    ;

    return 0;
}
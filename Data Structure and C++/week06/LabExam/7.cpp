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

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->value;
        if (node->next != NULL)
            cout << " -> ";
        node = node->next;
    }
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
Node *reverse(Node *head, int k)
{
    // base case
    if (!head)
        return NULL;
    Node *current = head;
    Node *next = NULL;
    Node *prev = NULL;
    int count = 0;

    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }

    if (next != NULL)
        head->next = reverse(next, k);
    return prev;
}

int main()
{
    Node *head = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        insertAtTail(head, val);
    }
    // cout << "reverse how many node";
    int k;
    cin >> k;
    head = reverse(head, k);

    // cout << "\nReversed Linked list \n";
    printList(head);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    // constructor
    // Node(int val)
    // {
    //     value = val;
    // }
};

void display(Node *h)
{
    while (h != NULL)
    {
        cout << h->value;
        if (h->next != NULL)
            cout << " -> ";
        h = h->next;
    }
    cout << endl
         << endl;
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    // Node *head = new Node(1);
    // Node *second = new Node(3);
    // Node *third = new Node(5);
    // Node *fourth = new Node(8);

    head->value = 1;
    second->value = 3;
    third->value = 5;
    fourth->value = 8;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    display(head);

    return 0;
}
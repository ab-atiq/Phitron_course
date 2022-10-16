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

int linkedListLength(Node *head) // &head is not need. because we will not work in head address for insert or delete. if we will give &head it will work perfectly.
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

void insertNodeAtSpecificPosition(Node *&head, int p, int v)
{
    Node *temp = head;
    int i = 0;
    // desired position in linked list using index.
    while (i < p - 2)
    {
        temp = temp->next;
        i++;
    }
    Node *newNode = new Node(v);
    // set address in newNode next from pre next / temp next
    newNode->next = temp->next;
    // set newNode address in temp next
    temp->next = newNode;
}

int searchValueUniqueList(Node *&head, int key)
{
    Node *temp = head;
    int count = 1;
    // there is only head. Not present any linked list item.
    if (temp == NULL)
    {
        return -1;
    }
    // check value == key or not.
    while (temp->value != key)
    {
        if (temp->next == NULL)
        {
            return -1;
        }
        temp = temp->next;
        count++;
    }
    return count;
}

void searchValueDuplicateList(Node *&head, int key)
{
    Node *temp = head;
    int size = linkedListLength(head);
    // iteration start from 1 index. because we will take 0 index size of total positions length.
    // postion will start from 1. if index we will start from 0.
    int iteration = 1, position = 1, flag = 0, arrPosition[size + 1];
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            arrPosition[iteration] = position;
            iteration++;
            flag = 1;
        }
        temp = temp->next;
        position++;
    }
    if (flag == 0)
        cout << "Search item is not present in the Linked list." << endl;
    else
    {
        arrPosition[0] = iteration;
        cout << "The value is found in position: ";
        for (int i = 1; i < iteration; i++)
        {
            cout << arrPosition[i];
            if (i < iteration - 1)
            {
                cout << " , ";
            }
        }
        cout << endl
             << endl;
    }
}

int main()
{
    Node *head = NULL;
    int n, c = 2, position;
    while (c != 0)
    {
        switch (c)
        {
        case 1:
            cout << "Enter value to add head in Linked List: ";
            cin >> n;
            insertNodeInHead(head, n);
            break;
        case 2:
            cout << "Enter value to add tail in Linked List: ";
            cin >> n;
            insertNodeInTail(head, n);
            break;
        case 3:
            cout << "Enter specific desired position: ";
            cin >> position;
            cout << "Enter value in position: ";
            cin >> n;
            insertNodeAtSpecificPosition(head, position, n);
            break;
        case 4:
            cout << "Search a value in linked list (Unique list): ";
            cin >> n;
            position = searchValueUniqueList(head, n);
            if (position != -1)
            {
                cout << "Search key position: " << position << endl;
            }
            else
            {
                cout << "Key is not fount in Linked list." << endl;
            }
            break;
        case 5:
            cout << "Search a value in linked list (Duplicate list): ";
            cin >> n;
            searchValueDuplicateList(head, n);
            break;
        default:
            break;
        }

        cout << "Linked list: ";
        displayLinkedList(head);
        cout << endl
             << "1. Insert element in head" << endl
             << "2. Insert element in tail" << endl
             << "3. Insert element at specific position" << endl
             << "4. Search value in linked list (Unique List)" << endl
             << "5. Search value in linked list (Duplicate List)" << endl
             << "0. Exit" << endl;
        cout << "Choose option: ";
        cin >> c;
    }

    cout << endl
         << "Linked List: ";
    displayLinkedList(head);
    cout << endl
         << "Lined list length: " << linkedListLength(head)
         << endl;

    return 0;
}
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

struct Test
{
    int position[1000];
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
    int l = linkedListLength(head);
    if (p <= l)
    {
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
    else
    {
        cout << "Your desired position is not present in linked list" << endl;
    }
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

Test searchValueDuplicateListReturn(Node *&head, int key)
{
    Node *temp = head;
    Test T;
    int i = 1, p = 1;
    while (temp != NULL)
    {
        if (temp->value == key)
        {
            T.position[i] = p;
            i++;
        }
        temp = temp->next;
        p++;
    }
    T.position[0] = i;
    return T;
}

void insetValueAfterFindPosition(Node *&head, int key, int value)
{
    // step-1: find position
    int p = searchValueUniqueList(head, key);
    // step-2: insert after position
    insertNodeAtSpecificPosition(head, p + 1, value);
}

void insetValueBeforeFindPosition(Node *&head, int key, int value)
{
    // step-1: find position
    int p = searchValueUniqueList(head, key);
    // step-2: insert before position
    insertNodeAtSpecificPosition(head, p, value);
}

void insetValueAfterFindPositionDuplicateList(Node *&head, int key, int value)
{
    // step-1: find position
    Test T;
    T = searchValueDuplicateListReturn(head, key);
    if (T.position[0] == 1)
        cout << "Search item is not present in linked list.";
    else
    {
        int size = T.position[0];
        for (int i = 1, j = 0; i < size; i++, j++)
        {
            // cout << T.position[i];
            // if (i < size - 1)
            //     cout << " , ";

            // step-2: insert after position
            insertNodeAtSpecificPosition(head, T.position[i] + j + 1, value);
            cout << "All single step: ";
            displayLinkedList(head);
            cout << endl;
        }
        cout << endl
             << endl;
    }
}

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

void deleteASpecificValue(Node *&head, int key)
{
    // find postion of value
    int p = searchValueUniqueList(head, key);
    // delete that postion
    if (p != -1)
    {
        deleteAtSpecificPosition(head, p);
    }
    else
    {
        cout << "Search item is not found at linked list." << endl;
    }
}

void deleteASpecificValueDuplicateList(Node *&head, int key)
{
    Test T;
    // find position
    T = searchValueDuplicateListReturn(head, key);
    if (T.position[0] == 1)
        cout << "Search item is not present in linked list.";
    else
    {
        int size = T.position[0];
        for (int i = 1, j = 0; i < size; i++, j++)
        {
            // step-2: insert after position
            deleteAtSpecificPosition(head, T.position[i] - j);
            cout << "All single step: ";
            displayLinkedList(head);
            cout << endl;
        }
        cout << endl
             << endl;
    }
}

int main()
{
    Node *head = NULL;
    int n, c = 2, position, find;
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
            cout << "Search a value in linked list (Duplicate list in function): ";
            cin >> n;
            searchValueDuplicateList(head, n);
            break;
        case 6:
            cout << "Search a value in linked list (Duplicate list return in main function): ";
            cin >> n;
            Test T;
            T = searchValueDuplicateListReturn(head, n);
            if (T.position[0] == 1)
                cout << "Search item is not present in linked list." << endl;
            else
            {
                int size = T.position[0];
                cout << "The value is found at position: ";
                for (int i = 1; i < size; i++)
                {
                    cout << T.position[i];
                    if (i < size - 1)
                        cout << " , ";
                }
                cout << endl
                     << endl;
            }
            break;
        case 7:
            cout << "Enter find value: ";
            cin >> find;
            cout << "Enter value add after find position in linked list: ";
            cin >> n;
            insetValueAfterFindPosition(head, find, n);
            break;
        case 8:
            cout << "Enter find value: ";
            cin >> find;
            cout << "Enter value add before find position in linked list: ";
            cin >> n;
            insetValueBeforeFindPosition(head, find, n);
            break;
        case 9:
            cout << "Enter find value: ";
            cin >> find;
            cout << "Enter value add after duplicate find position in linked list: ";
            cin >> n;
            insetValueAfterFindPositionDuplicateList(head, find, n);
            break;
        case 10:
            deleteAtHead(head);
            break;
        case 11:
            deleteAtTail(head);
            break;
        case 12:
            cout << "Enter delete position: ";
            cin >> position;
            deleteAtSpecificPosition(head, position);
            break;
        case 13:
            cout << "Enter a value which you want to delete: ";
            cin >> n;
            deleteASpecificValue(head, n);
            break;
        case 14:
            cout << "Enter a value which you want to delete: ";
            cin >> n;
            // not correct
            deleteASpecificValueDuplicateList(head, n);
            break;
        default:
            break;
        }

        cout << "Linked list: ";
        displayLinkedList(head);
        cout << endl
             << endl
             << "1. Insert element in head" << endl
             << "2. Insert element in tail" << endl
             << "3. Insert element at specific position" << endl
             << "4. Search value in linked list (Unique List)" << endl
             << "5. Search value in linked list (Duplicate List in function)" << endl
             << "6. Search value in linked list (Duplicate List Return)" << endl
             << "7. Insertion after a specific value (Unique List)" << endl
             << "8. Insertion before a specific value (Unique List)" << endl
             << "9. Insertion after a specific value (Duplicate List)" << endl
             << "10. Deletion at head" << endl
             << "11. Deletion at tail" << endl
             << "12. Deletion at specific position (Unique List)" << endl
             << "13. Deletion a value position (Unique List)" << endl
             << "14. Deletion a value position (Duplicate List)" << endl
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
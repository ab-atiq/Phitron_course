// Linked list operations in C

#include <stdio.h>
#include <stdlib.h>

// Create a node
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};

// Insert at the beginning
void insertAtBeginning(Node **head_ref, int new_data)
{
    // Allocate memory to a node
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    new_node->next = *head_ref;

    // Move head to new node
    *head_ref = new_node;
}

// Insert a node after a node
void insertAfter(Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("the given previous node cannot be NULL");
        return;
    }

    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Insert the the end
void insertAtEnd(Node **head_ref, int new_data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    Node *last = *head_ref; /* used in step 5*/

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

// Delete a node
void deleteNode(Node **head_ref, int key)
{
    Node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    // Find the key to be deleted
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If the key is not present
    if (temp == NULL)
        return;

    // Remove the node
    prev->next = temp->next;

    free(temp);
}

// Search a node
int searchNode(Node **head_ref, int key)
{
    Node *current = *head_ref;

    while (current != NULL)
    {
        if (current->data == key)
            return 1;
        current = current->next;
    }
    return 0;
}

// Sort the linked list
void sortLinkedList(Node **head_ref)
{
    Node *current = *head_ref, *index = NULL;
    int temp;

    if (head_ref == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            // index points to the node next to current
            index = current->next;

            while (index != NULL)
            {
                if (current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

// Print the linked list
void printList(Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
}

// Driver program
int main()
{
    Node *head = NULL;

    insertAtBeginning(&head, 2);
    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 3);
    insertAtEnd(&head, 4);
    insertAfter(head->next, 5);

    printf("Linked list: ");
    printList(head);

    printf("\nAfter deleting an element: ");
    deleteNode(&head, 3);
    printList(head);

    int item_to_find = 3;
    if (searchNode(&head, item_to_find))
    {
        printf("\n%d is found", item_to_find);
    }
    else
    {
        printf("\n%d is not found", item_to_find);
    }

    sortLinkedList(&head);
    printf("\nSorted List: ");
    printList(head);
}
// queue using doubly linked list 
#include <stdio.h>
#include <stdlib.h>

typedef struct dNode
{
    int data;
    struct dNode *next;
    struct dNode *prev;
} dNode;

dNode *head, *tail;

void enqueue(int data)
{
    dNode *new_node = (dNode *)malloc(sizeof(dNode));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}

int dequeue()
{
    if (head == NULL)
        return -1;
    dNode *temp = head;
    head = head->next;
    if (head != NULL)
        head->prev = NULL;
    if (temp == tail)
        tail = NULL;
    int data = temp->data;
    free(temp);
    return data;
}

int main()
{
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(3);
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
}
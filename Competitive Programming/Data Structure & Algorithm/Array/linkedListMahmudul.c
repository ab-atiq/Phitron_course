#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node *head = NULL;

node *create_node(int data) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void insert_at_start(int data) {
    node *new_node = create_node(data);
    new_node->next = head;
    head = new_node;
}

void insert_at_end(int data) {
    node *new_node = create_node(data);
    if (head == NULL) {
        head = new_node;
    } else {
        node *current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

void traverse() {
    if (head == NULL) {
        printf("The linked list is empty\n");
    } else {
        node *current = head;
        while (current->next != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
    }
}

void search(int item) {
    if (head == NULL) {
        printf("The linked list is empty\n");
    } else {
        node *current = head;
        while (current->next != NULL) {
            if (current->data == item) {
                printf("Element is found\n");
                return;
            }
            current = current->next;
        }
    }
    printf("Not found\n");
}

void delete_from_start() {
    if (head == NULL) {
        printf("The linked list is empty\n");
    } else {
        head = head->next;
    }
}

void delete_from_end() {
    if (head == NULL) {
        printf("The linked list is empty\n");
    } else if (head->next == NULL) {
        head = NULL;
    } else {
        node *current = head;
        while (current->next->next != NULL) {
            current = current->next;
        }
        current->next = NULL;
    }
}

void delete_value(int item) {
    if (head == NULL) {
        printf("The linked list is empty\n");
    } else if (head->data == item) {
        head = head->next;
    } else {
        node *current = head;
        while (current->next->data != item) {
            current = current->next;
        }
        current->next = current->next->next;
    }
}

int main() {
    return 0;
}

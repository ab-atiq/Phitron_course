#include <stdio.h>

typedef struct dNode {
    int data;
    struct dNode *next;
    struct dNode *prev;
} dNode;

int match(char c, char arr[], int len) {
    for (int i = 0; i < len; i++) {
        if (c == arr[i]) return 1;
    }
    return 0;
}

int evaluate_operator(int num1, char op, int num2) {
    if (op == '+') return num1 + num2;
    if (op == '-') return num1 - num2;
    if (op == '*') return num1 * num2;
    if (op == '/') return num1 / num2;
}

void push(char *stack, int *top, char item) {
    *top = *top + 1;
    stack[*top] = item;
}

int pop(char *stack, int *top) {
    *top = *top - 1;
    return stack[*top + 1];
}

int top_element(char *stack, int *top) {
    return stack[*top];
}

void enqueue(dNode **head, dNode **tail, int data) {
    dNode *new_node = (dNode *)malloc(sizeof(dNode));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    if (*head == NULL) {
        *head = new_node;
        *tail = new_node;
    } else {
        (*tail)->next = new_node;
        new_node->prev = *tail;
        *tail = new_node;
    }
}

int delete_begin(dNode **head, dNode **tail) {
    if (*head == NULL) return -1;
    dNode *temp = *head;
    *head = (*head)->next;
    if (*head != NULL) (*head)->prev = NULL;
    if (temp == *tail) *tail = NULL;
    int data = temp->data;
    free(temp);
    return data;
}
// stack using array
#include <stdio.h>

int stack[50];
int maxStack = 50;
int top = 0;

void push(int item)
{
    if (top == maxStack)
    {
        printf("OVERFLOW\n");
    }
    top = top + 1;
    stack[top] = item;
    printf("Push element: %d\n", item);
}

int pop()
{
    if (top == 0)
    {
        printf("UNDERFLOW\n");
        return -1;
    }
    printf("Pop element: %d\n", stack[top]);
    top = top - 1;
    return stack[top];
}

int main()
{
    push(10);
    push(4);
    push(3);
    printf("Top element is %d\n", pop());
    printf("Top element is %d\n", pop());
    return 0;
}
#include <stdio.h>
int top = -1;
int stack[1000];
void push(int val)
{
    if (stack[top] >= sizeof(stack))
        printf("Overflow!");
    else
        top++;
    stack[top] = val;
}
int pop()
{
    if (stack[top] <= -1)
        printf("Underflow !");
    else
    {
        int result = stack[top];
        top--;
        return result;
    }
}

int main()
{
    push(10);
    push(12);
    push(15);
    push(20);
    push(30);
    printf("delete top element is = %d\n", pop());
    printf("\nafter delete top element\n");

    for (int i = 0; i <= stack[top]; i++)
    {
        printf("| %d |\n", pop());
    }
}
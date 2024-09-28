#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define maxSize 1000
int top = -1;
int stack[maxSize];

void push(int value)
{
    if (top < maxSize)
    {
        top = top + 1;
        stack[top] = value;
    }
    else
    {
        printf("push korte parchi na\n");
    }
}

int pop()
{
    if (top <= -1)
    {
        return -1;
    }
    else
    {
        int tem = stack[top];
        top = top - 1;
        return tem;
    }
}

int main()
{
    char postfix[] = "78+5-";
    for (int i = 0; i < strlen(postfix); i++)
    {
        if (isdigit(postfix[i]))
        {
            push(postfix[i] - '0');
        }
        else
        {
            int secondNumber = pop();
            int firstNumber = pop();
            int result;
            if (postfix[i] == '+')
                result = firstNumber + secondNumber;
            if (postfix[i] == '-')
                result = firstNumber - secondNumber;
            if (postfix[i] == '*')
                result = firstNumber * secondNumber;
            if (postfix[i] == '/')
                result = firstNumber / secondNumber;
            push(result);
        }
    }
    printf("Answer is %d\n", stack[top]);
    return 0;
}
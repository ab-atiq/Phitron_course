#include <stdio.h>

int match(char c, char arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (c == arr[i])
            return 1;
    }
    return 0;
}

int evaluate_operator(int num1, char op, int num2)
{
    if (op == '+')
        return num1 + num2;
    if (op == '-')
        return num1 - num2;
    if (op == '*')
        return num1 * num2;
    if (op == '/')
        return num1 / num2;
}

void push(char *stack, int *top, char item)
{
    *top = *top + 1;
    stack[*top] = item;
}

int pop(char *stack, int *top)
{
    *top = *top - 1;
    return stack[*top + 1];
}

int top_element(char *stack, int *top)
{
    return stack[*top];
}

char ops[] = {'+', '-', '*', '/'};

int evaluation_of_postfix(char str[], int len)
{
    char stack[1000];
    int top = 0;
    for (int i = 0; i < len; i++)
    {
        if (!match(str[i], ops, 4))
        {
            push(stack, &top, str[i]);
        }
        else
        {
            int second = pop(stack, &top) - '0';
            int first = pop(stack, &top) - '0';
            int new_num = evaluate_operator(first, str[i], second);
            push(stack, &top, new_num + '0');
        }
    }
    return pop(stack, &top) - '0';
}

int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '^')
        return 3;
    return 0;
}

void infix_to_postfix(char str[], int len, char *ans)
{
    char stack[1000];
    int top = 0;
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '(')
        {
            push(stack, &top, str[i]);
        }
        else if (str[i] == ')')
        {
            char upper = pop(stack, &top);
            while (upper != '(')
            {
                ans[index++] = upper;
                upper = pop(stack, &top);
            }
        }
        else if (!match(str[i], ops, 4))
        {
            ans[index++] = str[i];
        }
        else
        {
            int precedance = priority(str[i]);
            char curPre = top == 0 ? -1 : priority(top_element(stack, &top));
            while (curPre >= precedance)
            {
                ans[index++] = pop(stack, &top);
                curPre = priority(top_element(stack, &top));
            }
            push(stack, &top, str[i]);
        }
    }
    while (top > 0)
    {
        ans[index++] = pop(stack, &top);
    }
    ans[index] = '\0';
}

int main()
{
    char p[] = {'4', '5', '1', '+', '*', '8', '4', '/', '-'};
    char q[] = {'4', '*', '(', '5', '+', '1', ')', '-', '8', '/', '4'};
    char ans[1000];
    infix_to_postfix(q, 11, ans);
    printf("Answer is: %d\n", evaluation_of_postfix(p, 9));
    printf("Postfix is: %s\n", ans);
}
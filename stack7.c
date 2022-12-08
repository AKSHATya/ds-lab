
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{

    int size;
    int top;
    char *arr;
};

int isfull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        return 1;
    }
    else
        return 0;
}

int isempty(struct stack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    else
        return 0;
}

void push(struct stack *s, char value)
{
    if (isfull(s))
    {
        printf("stack is full");
    }
    else
    {
        s->top++;
        s->arr[s->top] = value;
    }
}

char pop(struct stack *s)
{
    if (isempty(s))
    {
        printf("stack is empty");
        return -1;
    }
    else
    {

        int value = s->arr[s->top];
        s->top--;
        return value;
    }
}

int peek(struct stack *s, int pos)
{
    int k = s->top - pos + 1;
    if (k < 1)
    {
        printf("invalid");
        return -1;
    }
    else
        return s->arr[k];
}

int stacktop(struct stack *s)
{
    return s->arr[s->top];
}
/**********************************************************************************************/

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '*' || ch == '-')
        return 2;
    else
        return 0;
}

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else
        return 0;
}

char *infixToPostfix(char *infix)
{

    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 10;
    s->top = -1;
    s->arr == (char *)malloc(s->size * sizeof(char));
    char *postfix = (char *)malloc(((strlen(infix) + 1)) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stacktop(s)))
            {
                push(s, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(s);
                j++;
            }
        }
    }

    while (!isempty(s))
    {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
/**
int main()
{
    char *infix = "a-b";
    printf("postfix is %c", infixToPostfix(infix));

    return 0;
}*/

int paranthesis(char *exp)
{
    struct stack *s;
    s->size = 100;
    s->top = -1;
    s->arr == (char *)malloc(s->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    {

        if (exp[i] == '(')
        {
            push(s,'(');
        }
        else if (exp[i] == ')')
        {
            if (isempty(s))
            {
                return 0;
            }
            pop(s);
        }
    }
    if (isempty(s))
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    char *exp = "(8*(9)";
    if (paranthesis(exp))
        printf("The paranthesis matching ");
    else
        printf("paranthesis not matching");
    return 0;
}

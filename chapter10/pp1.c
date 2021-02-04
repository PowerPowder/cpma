#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    if (is_full())
        printf("Stack full");
    else
        contents[top++] = i;
}

char pop()
{
    if (is_empty())
    {
        printf("Stack Empty");
        return NULL;
    }
    else
        return contents[--top];
}

void stack_overflow()
{
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
}

int main(void)
{
    int ch;
    while ((ch = getchar()) != '\n')
    {
        if (ch == '{' || ch == '(')
            push(ch);
        else
        {
            char matching = '0';
            switch (ch)
            {
                case '}':
                    matching = '{';
                    break;
                case ')':
                    matching = '(';
                    break;
            }

            if (pop() != matching)
            {
                push(matching);
                break;
            }
        }
    }

    if (is_empty())
        printf("Parentheses/braces are nested properly\n");
    else
        printf("Parentheses/braces are not nested properly\n");

    return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stackADT2.h"

#define STACK_SIZE 100

int main(void)
{
    Stack s = create(STACK_SIZE);

    int ch;
    while ((ch = getchar()) != '\n')
    {
        if (ch == '{' || ch == '(')
            push(s, ch);
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

            if (pop(s) != matching)
            {
                push(s, matching);
                break;
            }
        }
    }

    if (is_empty(s))
        printf("Parentheses/braces are nested properly\n");
    else
        printf("Parentheses/braces are not nested properly\n");

    return 0;
}
#include <stdio.h>
#include "stackADT.h"
#include <stdlib.h>

#define STACK_SIZE 100

int main(void)
{
    Stack s = create();
    char ch;
    int op1, op2;

    printf("Enter an RPN expression: ");
    for (;;)
    {
        scanf(" %c", &ch);

        switch (ch)
        {
            case '1': case '2': case '3': case '4': case '5':
            case '6': case '7': case '8': case '9': case '0':
                push(s, ch - '0');
                break;

            case '+': case '-': case '*': case '/':
                op1 = pop(s);
                op2 = pop(s);

                if (ch == '+')
                    push(s, op1 + op2);
                else if (ch == '-')
                    push(s, op2 - op1);
                else if (ch == '*')
                    push(s, op1 * op2);
                else if (ch == '/')
                    push (s, op2 / op1);
                break;

            case '=':
                printf("Value of expression: %d\n", peek(s));
                printf("Enter an RPN expression: ");
                make_empty(s);
                break;

            case 'q':
                exit(EXIT_SUCCESS);
                break;
        }
    }

    return 0;
}
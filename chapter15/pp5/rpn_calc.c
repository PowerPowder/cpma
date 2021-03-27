#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
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
                push(ch - '0');
                break;

            case '+': case '-': case '*': case '/':
                op1 = pop();
                op2 = pop();

                if (ch == '+')
                    push(op1 + op2);
                else if (ch == '-')
                    push(op2 - op1);
                else if (ch == '*')
                    push(op1 * op2);
                else if (ch == '/')
                    push (op2 / op1);
                break;

            case '=':
                printf("Value of expression: %d\n", evaluate());
                printf("Enter an RPN expression: ");
                make_empty();
                break;

            case 'q':
                exit(EXIT_SUCCESS);
                break;
        }
    }

    return 0;
}
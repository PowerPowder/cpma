#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

void stack_overflow(void);
void stack_underflow(void);

void make_empty(void);

bool is_empty(void);
bool is_full(void);

void push(int i);
int pop(void);

int contents[STACK_SIZE];
int top = 0;

int main(void)
{
    char ch;
    int op1, op2;

    printf("Enter an RPN expression: ");
    for (;;)
    {
        scanf(" %c", &ch);

        // operand (1, 2, etc) -> push to stack
        // operator (+, -, *, etc) -> pop operands
        //                            perform operation
        //                            push result

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
                printf("Value of expression: %d\n", contents[top - 1]);
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

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow()
{
    printf("Expression is too complex");
    exit(EXIT_FAILURE);
}

void stack_underflow()
{
    printf("Not enough operands in expression");
    exit(EXIT_FAILURE);
}

/*
    1 2 3 * + =

    Stack:
        3
        2
        1

    3 * 2 = 6
    
    Stack:
        6
        1

    6 + 1 = 7
    
    Stack:
        7
    
    print 7
*/

/*
    5 8 * 4 9 - / =

    Stack:
        8
        5
        
    5 * 8 = 40

    Stack:
        9
        4
        40

    4 - 9 = -5
    
    Stack:
        -5
        40

    40 / -5 = -8

    print -8
*/
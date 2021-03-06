#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int evaluate_RPN_expression(const char *expression);

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
    char ch, expression[20];
    int i = 0;

    for (;;)
    {
        printf("Enter an RPN expression: ");

        while ((ch = getchar()) != '\n')
            expression[i++] = ch;
        expression[i] = '\0';

        printf("Value of expresson: %d\n", evaluate_RPN_expression(expression));
    }

    return 0;
}

int evaluate_RPN_expression(const char *expression)
{
    const char *p = expression;
    int op1, op2, value;

    while (*p)
    {
        switch (*p)
        {
            case '1': case '2': case '3': case '4': case '5':
            case '6': case '7': case '8': case '9': case '0':
                push(*p - '0');
                break;

            case '+': case '-': case '*': case '/':
                op1 = pop();
                op2 = pop();

                if (*p == '+')
                    push(op1 + op2);
                else if (*p == '-')
                    push(op2 - op1);
                else if (*p == '*')
                    push(op1 * op2);
                else if (*p == '/')
                    push (op2 / op1);
                break;

            case '=':
                value = contents[top - 1];
                make_empty();
                break;

            case 'q':
                exit(EXIT_SUCCESS);
                break;
        }

        p++;
    }

    return value;
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
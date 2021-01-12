#include <stdio.h>
#include <stdbool.h>

int main()
{
    float value = 0, num;
    char op, prevOp;
    bool firstOp = true;

    printf("Enter an expression: ");

    while (scanf("%f%c", &num, &op))
    {
        //printf("%f:%c", num, op);

        if (firstOp)
        {
            prevOp = op;
            firstOp = false;
        }

        switch (prevOp)
        {
            case '+':
                value += num;
                break;
            case '-':
                value -= num;
                break;
            case '*':
                value *= num;
                break;
            case '/':
                value /= num;
                break;
        }

        if (!firstOp)
            prevOp = op;

        if (op == '\n')
            break;
    }

    printf("Value of expression: %f", value);

    return 0;
}
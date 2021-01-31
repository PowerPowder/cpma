#include <stdio.h>

int polynomial(int x);

int main(void)
{
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("answer: %d", polynomial(x));

    return 0;
}

int polynomial(int x)
{
    int num = 3 * (x * x * x * x * x)   +
              2 * (x * x * x * x)       -
              5 * (x * x * x)           -
                  (x * x)               +
              7 * (x)                   - 6;

    return num;
}
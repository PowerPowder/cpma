#include <stdio.h>

// recursively computes x^n and returns the result
int power(int x, int n);
int square(int x);

int main(void)
{
    int x, n;

    printf("Value for x: ");
    scanf("%d", &x);

    printf("Value for n: ");
    scanf("%d", &n);

    printf("%d", power(x, n));

    return 0;
}

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n == 2)
        return x * x;
    else if (n % 2 == 1)
        return x * power(x, n-1);
    else
        return square(power(x, n / 2));
}

int square(int x)
{
    return x * x;
}
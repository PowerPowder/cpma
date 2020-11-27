#include <stdio.h>

int main(void)
{
    int fact = 1, n;
    float res = 1, ep;

    printf("Enter a number to approximate e: ");
    scanf("%d", &n);

    printf("Enter a number for epsilon: ");
    scanf("%f", &ep);

    for (int i = 1; ; i++)
    {
        // factorial
        for (int j = 1; j <= i; j++)
            fact *= j;

        res += 1.0f / fact;
        fact = 1;
    }

    printf("%f", res);

    return 0;
}
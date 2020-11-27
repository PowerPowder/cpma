#include <stdio.h>

int main(void)
{
    int fact = 1;
    float res = 1, ep;

    // printf("Enter a number to approximate e: ");
    // scanf("%d", &n);

    printf("Enter a number for epsilon: ");
    scanf("%f", &ep);

    for (int i = 1; ; i++)
    {
        // factorial
        for (int j = 1; j <= i; j++)
            fact *= j;

        if (1.0f / fact < ep)
            break;

        res += 1.0f / fact;
        fact = 1;
    }

    printf("%f", res);

    return 0;
}
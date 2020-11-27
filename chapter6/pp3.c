#include <stdio.h>

int main(void)
{
    int num, denom, rem;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    int n, m, r;
    n = num;
    m = denom;

    // pp2 - GCD
    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    printf("In lowest terms: %d/%d", num / m, denom / m);

    return 0;
}
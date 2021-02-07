#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int num, denom, reduced_num, reduced_denom;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);

    reduce(num, denom, &reduced_num, &reduced_denom);

    printf("In lowest terms: %d/%d", reduced_num, reduced_denom);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int n, m, r;
    n = numerator;
    m = denominator;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}
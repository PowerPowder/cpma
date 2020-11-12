#include <stdio.h>

int main(void)
{
    int a, b, c, d, smallest, largest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if      (a < b && a < c && a < d)   smallest = a;
    else if (b < a && b < c && b < d)   smallest = b;
    else if (c < a && c < b && c < d)   smallest = c;
    else if (d < a && d < b && d < c)   smallest = d;

    if      (a > b && a > c && a > d)   largest = a;
    else if (b > a && b > c && b > d)   largest = b;
    else if (c > a && c > b && c > d)   largest = c;
    else if (d > a && d > b && d > c)   largest = d;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
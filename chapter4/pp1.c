#include <stdio.h>

int main(void)
{
    /* pp1 & pp2
    int num;

    printf("Enter a two-digit number: ");
    scanf("%3d", &num);

    // pp2
    printf("The reversal is: %d%d%d", num % 10, (num / 10) % 10, (num / 100) % 10);
    */

    // pp3
    int n1, n2, n3;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d%1d", &n1, &n2, &n3);

    printf("The reversal is: %d%d%d", n3, n2, n1);

    return 0;
}
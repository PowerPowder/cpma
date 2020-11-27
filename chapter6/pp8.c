#include <stdio.h>

int main(void)
{
    int days, start, last, i;

    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    last = 7 - start + 1;

    i = 0;
    while (i++ < 7 - last)
        printf("   ");


    for (i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        if (i % 7 == last || (start == 1 && i % 7 == 0))
            printf("\n");
    }

    printf("\n");

    return 0;
}
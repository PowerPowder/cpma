// prints a table of sqaures using a for statement

#include <stdio.h>

int main(void)
{
    int i, n, odd, square;

    printf("This program prints a table of sqaures.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    odd = 3;
    for (square = 1; i <= n; odd += 2)
    {
        printf("%10d%10d\n", i, i * i);
        ++i;
        square += odd;
    }

    return 0;
}
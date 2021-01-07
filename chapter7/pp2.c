// prints a table of sqaures using a for statement

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of sqaures.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    // get rid of the remaining newline char from the scanf call
    getchar();

    for (i = 1; i <= n; i++)
    {
        if (i % 25 == 0)
        {
            printf("Press Enter to continue...");
            while (getchar() != '\n')
                ;
        }

        printf("%10d%10d\n", i, i * i);
    }

    return 0;
}
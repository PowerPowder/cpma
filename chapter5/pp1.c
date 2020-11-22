#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number (max 4 digits): ");
    scanf("%d", &num);

    if (num < 10)
        printf("The number %d has 1 digit\n", num);
    else if (num < 100)
        printf("The number %d has 2 digits\n", num);
    else if (num < 1000)
        printf("The number %d has 3 digits\n", num);
    else
        printf("The number %d has 4 digits\n", num);

    return 0;
}
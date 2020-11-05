#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a two-digit number: ");
    scanf("%3d", &num);

    printf("The reversal is: %d%d%d", num % 10, (num / 10) % 10, (num / 100) % 10);
    return 0;
}
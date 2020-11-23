#include <stdio.h>

int main(void)
{
    float i = 0, max = 0;

    printf("Enter a number: ");
    scanf("%f", &i);
    while (i != 0)
    {
        if (i > max)
            max = i;

        printf("Enter a number: ");
        scanf("%f", &i);
    }

    printf("The largest number entered was %f", max);

    return 0;
}
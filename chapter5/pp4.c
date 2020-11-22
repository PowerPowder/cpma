#include <stdio.h>

int main(void)
{
    int speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%d", &speed);

    if (speed < 1)
        printf("Description: Calm");
    else if (speed <= 3)
        printf("Description: Light Air");
    else if (speed <= 27)
        printf("Description: Breeze");
    else if (speed <= 47)
        printf("Description: Gale");
    else if (speed <= 63)
        printf("Description: Storm");
    else
        printf("Description: Hurricane");

    return 0;
}
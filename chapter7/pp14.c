#include <stdio.h>
#include <math.h>

int main(void)
{
    double average, diff, x, y, oldY;
    diff = 1, y = 1, oldY = 0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    printf("\n");
    while (diff > 0.00001)
    {
        diff = fabs(y - oldY);
        average = (y + (x / y)) / 2;
        oldY = y;
        y = average;
    }

    printf("Square root: %lf", average);

    return 0;
}
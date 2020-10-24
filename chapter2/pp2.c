#include <stdio.h>

int main(void)
{
    float pi = 22.0f / 7.0f;
    float r;

    printf("Enter a radius: ");
    scanf("%f", &r);

    printf("Volume of sphere with a 10 meter radius: %f", (4.0f / 3.0f) * pi * (r * r * r));

    return 0;
}
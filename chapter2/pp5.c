#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    /* pp5
    int result = (3 * x * x * x * x * x)
               + (2 * x * x * x * x) 
               - (5 * x * x * x) 
               - (1 * x * x) 
               + (7 * x)
               - 6;
    */

    int result = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    printf("the value of the polynomial is: %d", result);
}
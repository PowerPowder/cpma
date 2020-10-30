#include <stdio.h>

int main(void)
{
    printf("%d,%d", 8, 1040);           // prints '8,1040'
    printf("\n");
    printf("%12.5e", 30.253);           // prints '       30.253'
    printf("\n");
    printf("%.4f", 83.162);             // prints '83.1620'
    printf("\n");
    printf("%-6.2g", 0.0000009979);     // prints '0.99 '
    printf("\n");

    return 0;
}
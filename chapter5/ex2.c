#include <stdio.h>

int main(void)
{
    int i, j, k;

    // output: 1
    // i = 10; j = 5;
    // printf("%d", !i < j);

    // output: 1
    // i = 2; j = 1;
    // printf("%d", !!i + !j);

    // output: 1
    // i = 5; j = 0; k = -5;
    // printf("%d", i && j || k);

    // output: 
    i = 1; j = 2; k = 3;
    printf("%d", i < j || k);

    return 0;
}
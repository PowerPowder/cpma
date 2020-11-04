#include <stdio.h>

int main(void)
{
    int i, j, k;

    // a) output: 12 12
    i = 6;
    j = i += i;
    printf("%d %d", i, j);

    // b) output: 3 4 
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d", i, j);

    // c) output: 2 8
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d", i, j);

    // d) output: 6 9
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d", i, j);

    return 0;
}
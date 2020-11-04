#include <stdio.h>

int main(void)
{
    int i, j, k;

    // a) output: 0 2
    i = 1;
    printf("%d ", i++ - 1);
    printf("%d", i);

    // b) output: 4 11 6
    i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d", i, j);

    // c) output: 
    i = 7; j = 8;
    printf("%d ", i++ - --j);
    // printf("%d %d", i, j);

    // d) output: 3 4 5 4
    i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d", i, j, k);

    return 0;
}
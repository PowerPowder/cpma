#include <stdio.h>

int main(void)
{
    int i, j;

    // a) output: 6 16
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d", i, j);

    // b) output: 6 -7
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d", i, j);

    // c) output: 6 23
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d", i, j);

    // d) output: 6 15
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d", i, j);
    return 0;
}
#include <stdio.h>

int main(void)
{
    int i, j;
    i = 1; j = 2;

    i += j;
    // i=3 j=2

    i--;
    // i=2 j=2

    i * j / i;
    // i=2 j=2

    i % ++j;
    // i=2 j=3

    return 0;
}
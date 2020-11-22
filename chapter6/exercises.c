#include <stdio.h>

int main(void)
{
    int i, j;

    // Exercise 1
    // 1 2 4 8 16 32 64 128

    /*
    int i = 1;
    while (i <= 128)
    {
        printf("%d ", i);
        i *= 2;
    }
    */

    // Exercise 2
    // 9384 938 93 9

    /*
    int i = 9384;
    do {
        printf("%d ", i);
        i /= 10;
    } while (i > 0);
    */

    // Exercise 3
    // 5 4 3 2
    /*
        i=5 j=4
        5
        i=4 j=3
        4
        i=3 j=2
        3
        i=2 j=1
        2
        i=1 j=0
    */

    /*
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);
    */

    // Exercise 4
    // for (i = 0; i++ < 10; ) ...
    // is not equivalent

    // Exercise 5
    // do {...} while (i < 10);
    // is not equivalent

    return 0;
}
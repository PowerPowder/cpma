#include <stdio.h>

int main(void)
{
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

    // Exercise 6
    // for (i = 1; i <= 128; i *= 2)
        // printf("%d ", i);

    // Exercise 7
    // for (i = 9384; i > 0; i /= 10)
        // printf("%d ", i);

    // Exercise 8
    // 10 5 3 2 1 1 1 ... (infinite loop)
    // for (i = 10; i >= 1; i /= 2)
        // printf("%d ", i++);

    // Exercise 9
    // i = 10;
    // while (i >= 1)
    // {
        // printf("%d ", i++);
        // i /= 2;
    // }

    // Exercise 10
    // By putting a label above the while loop or for loop and where the continue
    // statement would go, add 'goto X' to emulate a continue statement.

    // Exercise 11
    // 2+4+6+8 = 20
    // int sum = 0;
    // for (i = 0; i < 10; i++)
    // {
        // if (i % 2)
            // continue;
        // sum += i;
    // }
    // printf("%d\n", sum);

    // Exercise 12
    // int d, n;
    // for (d = 2; d < n; d++)
        // if (d * d > n || n % d == 0)
            // break;

    // Exercise 13
    // int n, m;
    // for (n = 0; m > 0; n++, m /= 2)
        // ;
    
    // Exercise 14
    // there is a ';' after the if statement, making it a null statement,
    // removing the ';' fixes the problem.
    // int n = 4;
    // if (n % 2 == 0);
        // printf("n is even\n");

    // Exercise 15
    // typedef char Int8;
    // typedef short Int16;
    // typedef int Int32;

    // printf("%ld %ld %ld", sizeof (Int8), sizeof(Int16), sizeof(Int32));

    return 0;
}
#include <stdio.h>

int main(void)
{
    int i, j, k;

    // output: 1
    i = 2; j = 3;
    k = i * j == 6;
    printf("%d", k);

    // output: 1
    i = 5; j = 10; k = 1;
    printf("%d", k > i < j);

    //output: 1
    i = 3; j = 2; k = 1;
    printf("%d", (i < j) == (j < k));

    //output: 0
    i = 3; j = 4; k = 5;
    printf("%d", i % j + i < k);

    return 0;
}
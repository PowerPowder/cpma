#include <stdio.h>
int f1(int (*f)(int));
int f2(int i);

int main(void)
{
    /*
        f2(0) = 0 * 0 + 0 - 12 = -12
        f2(1) = 1 * 1 + 1 - 12 = -10
        f2(2) = 2 * 2 + 2 - 12 = -6
        f2(3) = 3 * 3 + 3 - 12 = 0
        f1 returns 3 because f2(3) results in 0
    */
    printf("Answer: %d\n", f1(f2));
    return 0;
}

int f1(int (*f)(int))
{
    int n = 0;
    while ((*f)(n)) n++;
    return n;
}

int f2(int i)
{
    return i * i + i - 12;
}
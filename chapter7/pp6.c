#include <stdio.h>

int main()
{
    printf("size of int: \t\t%ld  bytes\n", sizeof(int));
    printf("size of short: \t\t%ld  bytes\n", sizeof(short));
    printf("size of long: \t\t%ld  bytes\n", sizeof(long));
    printf("size of float: \t\t%ld  bytes\n", sizeof(float));
    printf("size of double: \t%ld  bytes\n", sizeof(double));
    printf("size of long double: \t%ld bytes\n", sizeof(long double));

    return 0;
}
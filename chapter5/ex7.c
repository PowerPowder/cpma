#include <stdio.h>

int main(void)
{
    // this makes a number positive regardless of it being positive or negative

    int i = -17;

    printf("%d\n", i >= 0 ? i : -i);

    return 0;
}
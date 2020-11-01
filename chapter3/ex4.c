#include <stdio.h>

int main(void)
{
    int i, j;
    float x;

    scanf("%d%f%d", &i, &x, &j);
    printf("%d %f %d", i, x, j);

    // input:   10.3 5 6
    // output:  10 0.300000 5

    // the reason why the output is '10 0.300000 5' is because the 10.3 is
    // recognised first as an int, therefore only getting the 10 so i=10, .3 is
    // then left over which satisfies the float so x=0.3, then there is one last
    // int to get, which would be 5 so j=5, since all the variables have been
    // 'scanned' it disregards the 6.

    return 0;
}
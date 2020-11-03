#include <stdio.h>

int main(void)
{
    int i, j;
    i = 4; j = 2;

    printf("%d %d", (-i)/j, -(i/j));

    // Yes:
    //      no negative numbers  -  i is made negative so the fraction is negative,
    //                              the fraction is positive, then negated so it's negative
    //      one negative number  -  if i is negative, it is positive, leading to a positive fraction
    //                              if j is negative, then a negative divided by a negative is positive
    //                              if i or j is negative, the fraction is negative and is then negated, making the fraction positive
    //      two negative numbers -  i is positive, j is negative, fraction is negative
    //                              i is negative, j is negative, fraction is positive, it's then negated, so it's negative

    // -i / j           -(-4) / 2       4 / 2       2
    // (i / j) * -1     (-4 / 2) * -1   -2 * -1     2
    return 0;
}
#include <stdio.h>

int main(void)
{
    float x, y;
    int i;

    scanf("%f%d%f", &x, &i, &y);
    printf("%f %d %f", x, i, y);

    // scanf gets 12.3 because it's looking for a float.
    // scanf gets 45 because it's looking for an int.
    // scanf gets .6 because it's looking for a float and the .6 is left over
    // from the previous variable which only got an int.

    return 0;
}
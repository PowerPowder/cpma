#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age = 10;
    bool teenager;

    /*
    if (age >= 13)
        if (age <= 19)
            teenager = true;
        else
            teenager = false;
    else
        teenager = false;
    */

    // can be reduced to:
    teenager = (age > 19) ? true : false;

    printf("%d", teenager);

    return 0;
}
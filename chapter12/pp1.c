#include <stdio.h>

int main(void)
{
    int ch;
    char message[50];

    // a)
    /*
    int i, l;
    printf("Enter a message: ");
    i = 0;
    while ((ch = getchar()) != '\n' && i < 50)
        message[i++] = ch;

    printf("Reversal is: ");
    for (l = i - 1; l >= 0; l--)
        printf("%c", message[l]);
    */

    // b)
    char *p = message;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') //&& i < 50)
        *p++ = ch;

    printf("Reversal is: ");
    while (p-- != message)
        printf("%c", *p);

    return 0;
}
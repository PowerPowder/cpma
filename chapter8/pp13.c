#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    char fLetter, ch, lName[20];
    bool whiteSpace = false;
    int i = 0, j = 0;

    printf("Enter a first and last name: ");

    scanf(" %c", &fLetter);

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
            whiteSpace = true;

        if (whiteSpace && isalnum(ch))
            lName[i++] = ch;
    }

    printf("You entered the name: ");
    for (j = 0; j < i; j++)
        putchar(lName[j]);
    printf(", %c.", fLetter);

    return 0;
}
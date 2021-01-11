#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    char fLetter, ch;
    bool whiteSpace = false;

    printf("Enter a first and last name: ");

    scanf(" %c", &fLetter);

    while ((ch = getchar()) != '\n')
    {
        if (ch == ' ')
            whiteSpace = true;

        if (whiteSpace && isalnum(ch))
            putchar(ch);
    }

    printf(", %c", fLetter);

    return 0;
}
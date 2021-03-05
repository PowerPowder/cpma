#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

void reverse_name(char *name);

int main()
{
    char ch, name[30];
    int i = 0;

    printf("Enter a first and last name: ");

    while ((ch = getchar()) != '\n')
        name[i++] = ch;
    name[i] = '\0';

    reverse_name(name);

    printf("%s", name);

    return 0;
}

void reverse_name(char *name)
{
    bool whiteSpace = false;
    char fLetter, *p = name;
    int count = 0;

    while (*p == ' ')
        p++;

    fLetter = *p;

    while (*p)
    {
        if (*p == ' ')
            whiteSpace = true;

        if (whiteSpace && isalnum(*p))
            count++;

        p++;
    }

    sprintf(name, "%s, %c.", p-count, fLetter);
}
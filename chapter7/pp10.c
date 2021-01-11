#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch, count = 0;

    printf("Enter a sentence: ");

    ch = getchar();
    while (ch != '\n')
    {
        ch = toupper(ch);

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            count++;

        ch = getchar();
    }

    printf("Your sentence contains %d vowels", count);

    return 0;
}
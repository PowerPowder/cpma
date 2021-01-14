#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    bool firstChar = true, firstLen = true;

    float average = 0.0f;

    int prevChar, ch;

    int words, length, characters;
    words = length = characters = 0;

    printf("Enter a sentence: ");

    while (ch = getchar())
    {
        if (firstChar)
        {
            prevChar = ch;
            firstChar = false;
        }

        if (firstLen)
        {
            average = firstLen;
            firstLen = false;
        }

        if (isalnum(ch))
        {
            characters++;
            length++;
        }

        // check if the previous character is not a repeated space
        if (prevChar != ' ' && ch == ' ')
        {
            words++;
            average = (average + length) / 2;
        }

        if (ch == ' ')
            length = 0;


        if (ch == '\n')
        {
            words++;
            average = (average + length) / 2;
            break;
        }
    }

    printf("Average word length: %0.1f", average);

    return 0;
}

// note: the original program had 3.4 as the avg, but it's actually 4.2 when accounting for the 5 letter word 'again' in:
// 'It was deja vu all over again.'
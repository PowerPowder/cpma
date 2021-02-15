#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main()
{
    int n, i;
    char word[15];

    printf("Enter a word: ");

    i = 0;
    while ((n = getchar()) != '\n')
        word[i++] = n;
    word[i] = '\0';

    printf("Scrabble value: %d", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word)
{
    int value = 0;
    while (*word)
    {
        switch (toupper(*word))
        {
            case 'A': case 'E': case 'I': case 'L':
            case 'N': case 'O': case 'R': case 'S':
            case 'T': case 'U':
                value += 1;
                break;
            case 'D': case 'G':
                value += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                value += 3;
                break;
            case 'F': case 'H': case 'V': case 'W':
            case 'Y':
                value += 4;
                break;
            case 'K':
                value += 5;
                break;
            case 'J': case 'X':
                value += 8;
                break;
            case 'Q': case 'Z':
                value += 10;
                break;
        }
        word++;
    }
    return value;
}
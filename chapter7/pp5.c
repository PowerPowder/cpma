#include <stdio.h>

int main()
{
    int value = 0, n;

    printf("Enter a word: ");

    n = getchar();
    while (n != '\n')
    {
        switch (toupper(n))
        {
            //AEILNORSTU
            case 'A': case 'E': case 'I': case 'L':
            case 'N': case 'O': case 'R': case 'S':
            case 'T': case 'U':
                value += 1;
                break;
            //DG
            case 'D': case 'G':
                value += 2;
                break;
            //BCMP
            case 'B': case 'C': case 'M': case 'P':
                value += 3;
                break;
            //FHVWY
            case 'F': case 'H': case 'V': case 'W':
            case 'Y':
                value += 4;
                break;
            //K
            case 'K':
                value += 5;
                break;
            //JX
            case 'J': case 'X':
                value += 8;
                break;
            //QZ
            case 'Q': case 'Z':
                value += 10;
                break;
        }

        n = getchar();
    }

    printf("Scrabble value: %d", value);

    return 0;
}
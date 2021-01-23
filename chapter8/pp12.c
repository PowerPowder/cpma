#include <stdio.h>
#include <ctype.h>

int main()
{
    int value = 0, n;

    int values[] = { 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10 };
            //AEILNORSTU     1
            //DG             2
            //BCMP           3
            //FHVWY          4
            //K              5
            //JX             8
            //QZ            10

    printf("Enter a word: ");

    while ((n = getchar()) != '\n')
        value += values[toupper(n) - 'A'];

    printf("Scrabble value: %d", value);

    return 0;
}
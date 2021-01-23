#include <stdio.h>

int main(void)
{
    char end_punc = '.', sentence[100];
    int n, i = 0, j = 0, k = 0;

    sentence[i++] = ' ';

    printf("Enter a sentence: ");

    while ((n = getchar()) != 0)
    {
        if (n == '.' || n == '!' || n == '?')
        {
            end_punc = n;
            break;
        }
        else
            sentence[i++] = n;
    }

    printf("Reversal of sentence: ");

    for (j = i-1; j >= 0; j--)
    {
        if (sentence[j] == ' ' || j == 0)
        {
            for (k = j+1; k < i; k++)
            {
                if (sentence[k] == ' ')
                    break;
                else
                    putchar(sentence[k]);
            }

            if (j != 0)
                putchar(' ');
        }
    }
    putchar(end_punc);

    return 0;
}
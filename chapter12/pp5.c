#include <stdio.h>

int main(void)
{
    char end_punc = '.', sentence[100], *p, *q;
    int n, i = 0;

    p = sentence;
    *p++ = ' ';

    printf("Enter a sentence: ");

    while ((n = getchar()) != 0)
    {
        if (n == '.' || n == '!' || n == '?')
        {
            end_punc = n;
            break;
        }
        else
            *p++ = n;
    }


    printf("Reversal of sentence: ");

    i = p-sentence;
    for (p = sentence + i-1; p-sentence >= 0; p--)
    {
        if (*p == ' ' || p-sentence == 0)
        {
            for (q = p+1; q-sentence < i; q++)
            {
                if (*q == ' ')
                    break;
                else
                    putchar(*q);
            }

            if (p-sentence != 0)
                putchar(' ');
        }
    }
    putchar(end_punc);

    return 0;
}
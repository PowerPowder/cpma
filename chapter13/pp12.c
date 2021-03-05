#include <stdio.h>
#include <string.h>

int main(void)
{
    char end_punc = '.', sentence[20];
    int n, j, i = 0;

    char words[30][20];
    int word = 0;

    printf("Enter a sentence: ");

    while ((n = getchar()) != 0)
    {
        if (n == '.' || n == '!' || n == '?')
        {
            sentence[i] = '\0';
            strcpy(words[word++], sentence);
            end_punc = n;
            break;
        }
        else if (n == ' ')
        {
            sentence[i] = '\0';
            strcpy(words[word++], sentence);
            i = 0;
        }
        else
            sentence[i++] = n;
    }

    printf("Reversal of sentence: ");

    for (int i = word-1; i >= 0; i--)
    {
        printf("%s", words[i]);
        if (i != 0)
            putchar(' ');
    }
        
    putchar(end_punc);

    return 0;
}
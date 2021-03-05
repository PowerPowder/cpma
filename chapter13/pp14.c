#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool are_anagrams(const char *word1, const char *word2);

int main(void)
{
    int max = 0, n;
    char word1[25], word2[25];

    printf("Enter first word: ");
    while ((n = getchar()) != '\n')
        word1[max++] = n;
    word1[max] = '\0';

    printf("Enter second word: ");
    max = 0;
    while ((n = getchar()) != '\n')
        word2[max++] = n;
    word2[max] = '\0';

    if (are_anagrams(word1, word2))
        printf("The words are anagrams.");
    else
        printf("The words not are anagrams.");

    return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
    int alphabet[26] = {0}, letters;
    const char *p;

    p = word1;
    while (*p)
    {
        int letter = tolower(*p) - 'a';
        alphabet[letter]++;
        p++;
    }

    p = word2;
    while (*p)
    {
        if (isalpha(*p))
        {
            int letter = tolower(*p) - 'a';
            alphabet[letter]--;
        }
        p++;
    }

    for (letters = 0; letters < 26; letters++)
        if (alphabet[letters] > 0)
            break;

    return letters == 26 ? true : false;
}
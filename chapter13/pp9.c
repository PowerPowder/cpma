#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);

int main()
{
    int ch, i = 0;
    char sentence[100];

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
        sentence[i++] = ch;

    printf("Your sentence contains %d vowels", compute_vowel_count(sentence));

    return 0;
}

int compute_vowel_count(const char *sentence)
{
    int count = 0;
    const char *p = sentence;
    char c;

    while (*p)
    {
        c = toupper(*p);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            count++;
        p++;
    }

    return count;
}
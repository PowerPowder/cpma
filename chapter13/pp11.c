#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int word_length(const char *word);

double compute_average_word_length(const char *sentence);

int main(void)
{
    char sentence[100], ch;
    int i = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
        sentence[i++] = ch;
    sentence[i] = '\0';

    printf("Average word length: %0.1f", compute_average_word_length(sentence));

    return 0;
}

double compute_average_word_length(const char *sentence)
{
    const char *p = sentence;

    int count = 0, words = 0, characters = 0;

    while (*p)
    {
        count = 0;
        while (*(p+count) != ' ' && *(p+count) != 0)
            count++;

        characters += count;
        words++;

        p += count+1;
    }

    return (double) characters / words;
}
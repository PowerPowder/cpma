#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts[26], int counts2[26]);

int main(void)
{
    int counts1[26] = {0} , counts2[26] = {0};

    printf("Enter first word: ");
    read_word(counts1);

    printf("Enter second word: ");
    read_word(counts2);

    if (equal_array(counts1, counts2))
        printf("The words are anagrams.");
    else
        printf("The words not are anagrams.");

    return 0;
}

void read_word(int counts[26])
{
    int n;
    while ((n = getchar()) != '\n')
    {
        int letter = tolower(n) - 'a';
        counts[letter]++;
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    int letters;
    for (letters = 0; letters < 26; letters++)
    {
        if (counts1[letters] != counts2[letters])
            break;
    }

    if (letters == 26)
        return true;
    else
        return false;
}
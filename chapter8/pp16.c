#include <stdio.h>
#include <ctype.h>

int main(void)
{

    // char array is all lowercase

    // get word into array
    // put word into alphabet array
    // get second word into array
    // loop through second word
        // decrement each letter from alphabet array
    // loop through alphabet array
        // check if each element is 0
    // if all elements are 0 then say it is an anagram
        // otherwise say it isn't.

    int alphabet[26] = {0}, max = 0, i, j, k, n, letters;
    char word[25];

    printf("Enter first word: ");
    while ((n = getchar()) != '\n')
        word[max++] = n;

    for (i = 0; i < max; i++)
    {
        int letter = tolower(word[i]) - 'a';
        alphabet[letter]++;
    }

    printf("Enter second word: ");
    max = 0;
    while ((n = getchar()) != '\n')
        word[max++] = n;

    for (i = 0; i < max; i++)
    {
        if (isalpha(word[i]))
        {
            int letter = tolower(word[i]) - 'a';
            alphabet[letter]--;
        }
    }

    for (letters = 0; letters < 26; letters++)
        if (alphabet[letters] > 0)
            break;

    if (letters == 26)
        printf("The words are anagrams.");
    else
        printf("The words not are anagrams.");

    return 0;
}
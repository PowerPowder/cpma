#include <stdio.h>
#include <string.h>

int main(void)
{
    char largest[20], smallest[20], word[20];

    printf("Enter word: ");
    scanf("%s", word);
    strcpy(smallest, word);
    strcpy(largest, word);

    for (;;)
    {
        printf("Enter word: ");
        scanf("%s", word);

        if (strlen(word) == 4)
            break;
        else if (strcmp(word, smallest) < 0)
            strcpy(smallest, word);
        else if (strcmp(word, largest) > 0)
            strcpy(largest, word);
    }

    printf("Smallest word: %s\nLargest word: %s", smallest, largest);

    return 0;
}
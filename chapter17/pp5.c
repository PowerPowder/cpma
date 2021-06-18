#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void bubbleSort(char (*s)[], int);
int read_line(char [], int);

int main(void)
{
    int n = 5;
    char (*s)[20];

    s = malloc(n * sizeof(char) * 20);

    int i = 0;
    while (true)
    {
        printf("Enter word: ");

        if (i == n)
        {
            n += 5;
            s = realloc(s, n * sizeof(char) * 20);
        }

        int size = read_line(s[i], 20);
        if (size == 0)
            break;

        i++;
    }

    for (int j = 0; j < i-1; j++)
    {
        for (int k = 0; k < i-j-1; k++)
        if (strcmp(s[k], s[k+1]) > 0)
        {
            char *temp = malloc(20 * sizeof(char));
            strcpy(temp, s[k]);
            strcpy(s[k], s[k+1]);
            strcpy(s[k+1], temp);
            free(temp);
        }
    }

    printf("In sorted order: ");
    for (int j = 0; j < i; j++)
        printf("%s ", s[j]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int compare(const void *, const void *);
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

    qsort(s, i, sizeof(char) * 20, compare);

    printf("In sorted order: ");
    for (int j = 0; j < i; j++)
        printf("%s ", s[j]);

    return 0;
}

int compare(const void *p, const void *q)
{
    return strcmp((char *)p, (char *)q);
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
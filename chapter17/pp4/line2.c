#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

struct node {
    char *word;
    struct node *next;
} *line, *first;

int line_len = 0;
int num_words = 0;

void clear_line(void)
{
    free(first);
    line = first = NULL;
    line_len = 0;
    num_words = 0;
}

void add_word(const char *word)
{
    struct node *new = malloc(sizeof(struct node));
    new->word = malloc(sizeof(word));
    strcpy(new->word, word);

    if (num_words > 0)
        line_len++;

    line_len += strlen(word);
    num_words++;

    if (line == NULL)
    {
        line = new;
        first = line;
        return;
    }

    line->next = new;
    line = line->next;
}

int space_remaining(void)
{
    return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
    int extra_spaces, spaces_to_insert, i, j;

    extra_spaces = MAX_LINE_LEN - line_len;

    struct node *current = first;
    while (current != NULL)
    {
        printf("%s", current->word);

        if (current->next != NULL)
        {
            spaces_to_insert = extra_spaces / (num_words - 1);

            for (j = 1; j <= spaces_to_insert + 1; j++)
                putchar(' ');

            extra_spaces -= spaces_to_insert;
            num_words--;
        }

        current = current->next;
    }

    putchar('\n');
}

void flush_line(void)
{
    if (line_len > 0)
    {
        struct node *current = first;
        while (current != NULL)
        {
            printf("%s", current->word);

            if (current->next != NULL)
                printf(" ");

            current = current->next;
        }
    }
}
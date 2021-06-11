#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *current = NULL;

void make_empty(void)
{
    free(current);
    current = malloc(sizeof(struct node));
    current = NULL;
}

bool is_empty(void)
{
    return current == NULL;
}

bool push(int i)
{
    struct node *list = current;
    struct node *new = malloc(sizeof(struct node));

    if (new == NULL)
        return false;

    new->value = i;

    if (list != NULL)
        new->next = current;

    current = new;

    return true;
}

int pop(void)
{
    if (current != NULL)
    {
        int value = current->value;
        current = current->next;
        return value;
    }

    exit(EXIT_FAILURE);
}
#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

struct node {
    int data;
    struct node *next;
};

static struct node *last = NULL;
static struct node *first = NULL;

void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void insert(int i)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("Error in insert: stack is full.");

    new_node->data = i;
    new_node->next = last;
    last = new_node;

    if (first == NULL)
        first = last;
}

int remove_item(void)
{
    if (is_empty())
        terminate("Error in remove_item: stack is empty.");

    if (last == NULL || last->next == NULL)
    {
        first = last = NULL;
        return 0;
    }

    struct node *second = last->next;
    struct node *prev = last;
    while (second != NULL)
    {
        // printf("\nc=%d s=%d", prev->data, second->data);
        if (second->data == first->data && second->next == NULL)
            break;
        second = second->next;
        prev = prev->next;
    }

    int i = first->data;
    free(first);
    prev->next = NULL;
    first = prev;

    return i;
}

int get_first(void)
{
    return first != NULL ? first->data : 0;
}

int get_last(void)
{
    return last != NULL ? last->data : 0;
}

bool is_empty(void)
{
    return first == NULL && last == NULL;
}

void display(void)
{
    struct node *current = last;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\tfirst=%d, last=%d\n", get_first(), get_last());
    printf("\n");
}
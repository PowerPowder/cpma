#include <stdlib.h>
#include <stdio.h>
#include "queueADT.h"

struct node {
    int data;
    struct node *next;
};

struct queue_type {
    struct node *first;
    struct node *last;
};

void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(void)
{
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL)
        terminate("Error in create: Queue could not be created.");

    q->first = NULL;
    q->last = NULL;

    return q;
}

void destroy(Queue q)
{
    free(q);
}

void insert(Queue q, int i)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("Error in insert: stack is full.");

    new_node->data = i;
    new_node->next = q->last;
    q->last = new_node;

    if (q->first == NULL)
        q->first = q->last;
}

int remove_item(Queue q)
{
    if (is_empty(q))
        terminate("Error in remove_item: stack is empty.");

    if (q->last == NULL || q->last->next == NULL)
    {
        q->first = q->last = NULL;
        return 0;
    }

    struct node *second = q->last->next;
    struct node *prev = q->last;
    while (second != NULL)
    {
        if (second->data == q->first->data && second->next == NULL)
            break;
        second = second->next;
        prev = prev->next;
    }

    int i = q->first->data;
    free(q->first);
    prev->next = NULL;
    q->first = prev;

    return i;
}

int get_first(Queue q)
{
    return q->first != NULL ? q->first->data : 0;
}

int get_last(Queue q)
{
    return q->last != NULL ? q->last->data : 0;
}

bool is_empty(Queue q)
{
    return q->first == NULL && q->last == NULL;
}

void display(Queue q)
{
    struct node *current = q->last;
    while (current != NULL)
    {
        printf("%d, ", current->data);
        current = current->next;
    }
    printf("first=%d, last=%d\n", get_first(q), get_last(q));
}
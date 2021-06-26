#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

static void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void make_empty(Stack *s)
{
    while(!is_empty(s))
        pop(s);
}

bool is_empty(const Stack *s)
{
    return s->top == NULL;
}

bool is_full(const Stack *s)
{
    return false;
}

void push(Stack *s, int i)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("Error in push: stack is full.");

    new_node->data = i;
    new_node->next = s->top;
    s->top = new_node;
}

int pop(Stack *s)
{
    if (is_empty(s))
        terminate("Error in pop: stack is empty.");

    int i = s->top->data;
    s->top = s->top->next;
    return i;
}

void display(Stack *s)
{
    struct node *current = s->top;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
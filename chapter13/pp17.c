#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define N 50

bool is_palindrome(const char *message);

int main(void)
{
    int ch;
    char message[N];

    printf("Enter a message: ");

    int i = 0;
    while ((ch = getchar()) != '\n' && i < N)
        message[i++] = ch;
    message[i] = '\0';

    printf("%d", is_palindrome(message));

    return 0;
}

bool is_palindrome(const char *message)
{
    const char *p, *q;

    int i = strlen(message);
    for (p = message, q = message + i-1; p-message < i/2; p++, q--)
    {
        while (!isalpha(*p))
            p++;
        while (!isalpha(*q))
            q--;
        if (*p != *q)
            return false;
    }

    return true;
}
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define N 50

int main(void)
{
    int ch;
    bool is_palindrome = true;
    char message[N];

    printf("Enter a message: ");
    // a)
    /*
    int i = 0;
    while ((ch = getchar()) != '\n' && i < N)
        message[i++] = ch;

    int j, k;
    for (j = 0, k = i-1; j < i / 2 && k > 0; j++, k--)
    {
        if (!(isalpha(message[j]) || isalpha(message[k])))
            continue;

        if (message[j] != message[k])
            is_palindrome = false;
    }
    */

    // b)
    char *q, *p = message;
    while ((ch = getchar()) != '\n' && p - message < N)
        *p++ = tolower(ch);

    int i = p - message;
    for (p = message, q = message + i-1; p-message < i/2 && q-message >= 0; p++, q--)
    {
        while (!isalpha(*p))
            p++;
        while (!isalpha(*q))
            q--;
        if (*p != *q)
            is_palindrome = false;
    }

    if (is_palindrome)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}
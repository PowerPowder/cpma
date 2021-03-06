#include <stdio.h>
#include <string.h>

void reverse(char *message);

int main(void)
{
    int ch, i = 0;
    char message[50];

    printf("Enter a message: ");

    while ((ch = getchar()) != '\n')
        message[i++] = ch;
    message[i] = '\0';

    reverse(message);
    printf("Reversal is: %s", message);

    return 0;
}

void reverse(char *message)
{
    char *p, *q;
    int count;
    
    count = strlen(message);
    p = message;
    q = message + count - 1;

    for (int i = 0; i < count / 2; i++, p++, q--)
    {
        char temp = *p;
        *p = *q;
        *q = temp;
    }
}
#include <stdio.h>

void encrypt(char *message, int shift);

int main(void)
{
    char message[80];
    int n, ch, i = 0;

    printf("Enter message to be encrypted: ");

    while ((ch = getchar()) != '\n')
        message[i++] = ch;
    message[i] = '\0';

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    encrypt(message, n);

    printf("Encrypted message: %s", message);

    return 0;
}

void encrypt(char *message, int shift)
{
    int ch;
    char *p = message;
    while (*p)
    {
        ch = *p;

        if (*p >= 'A' && *p <= 'Z')
            ch = ((*p - 'A') + shift) % 26 + 'A';
        else if (*p >= 'a' && *p <= 'z')
            ch = ((*p - 'a') + shift) % 26 + 'a';

        *p++ = ch;
    }
}
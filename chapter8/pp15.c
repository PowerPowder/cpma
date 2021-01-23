#include <stdio.h>

int main(void)
{
    char message[80];
    int i = 0, j = 0, n, ch;

    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n')
    {
        message[i++] = ch;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    printf("Encrypted message: ");
    for (j = 0; j < i; j++)
    {
        if (message[j] >= 'A' && message[j] <= 'Z')
            ch = ((message[j] - 'A') + n) % 26 + 'A';
        else if (message[j] >= 'a' && message[j] <= 'z')
            ch = ((message[j] - 'a') + n) % 26 + 'a';
        else
        {
            putchar(message[j]);
            continue;
        }

        putchar(ch);
    }

    return 0;
}
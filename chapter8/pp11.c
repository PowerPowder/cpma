#include <stdio.h>

#define SIZE (int)(sizeof(phone_num) / sizeof(char))

int main()
{
    char n, phone_num[15];
    int i = 0;

    printf("Enter phone number: ");

    while ((n = getchar()) != '\n')
    {
        switch (n)
        {
            case 'A': case 'B': case 'C':
                phone_num[i++] = '2';
                break;
            case 'D': case 'E': case 'F':
                phone_num[i++] = '3';
                break;
            case 'G': case 'H': case 'I':
                phone_num[i++] = '4';
                break;
            case 'J': case 'K': case 'L':
                phone_num[i++] = '5';
                break;
            case 'M': case 'N': case 'O':
                phone_num[i++] = '6';
                break;
            case 'P': case 'R': case 'S':
                phone_num[i++] = '7';
                break;
            case 'T': case 'U': case 'V':
                phone_num[i++] = '8';
                break;
            case 'W': case 'X': case 'Y':
                phone_num[i++] = '9';
                break;
            default:
                phone_num[i++] = n;
        }
    }

    for (i = 0; i < SIZE; i++)
        putchar(phone_num[i]);

    return 0;
}
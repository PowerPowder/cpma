// convert text to B1FF speech
// A -> 4, B -> 8, E -> 3, I -> 1, O -> 0, S -> 5
#include <stdio.h>
#include <ctype.h>

#define LEN 100

int main(void)
{
    char text[LEN], ch;
    int i = 0;

    printf("Enter message: ");

    // get characters and put into array
    while ((ch = getchar()) != '\n')
    {
        text[i] = toupper(ch);
        i++;
    }

    printf("In B1FF-speak: ");

    // print array
    for (int j = 0; j < i; j++)
    {
        switch (text[j])
        {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(text[j]);
                break;
        }
    }
    printf("!!!!!!!!!!!!!!!!!!");

    return 0;
}
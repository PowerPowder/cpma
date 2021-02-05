#include <stdio.h>

#define MAX_DIGITS 10

// Stores blank characters into all elements of the 'digits' array.
void clear_digits_array(void);

// Stores the seven-digit representation of 'digit' into a specified position in the 'digits' array.
void process_digit(int digit, int position);

// Displays the rows of the 'digits' array, each on a single line.
void print_digits_array(void);

// Stores data representing the correspondence between digits and segments
int segments[MAX_DIGITS][7] = {{0}};

// The character data for all digits
char digits[3][MAX_DIGITS * 4];

int main(void)
{
    int n, pos = 0;

    clear_digits_array();

    printf("Enter a number: ");

    while ((n = getchar()) != '\n')
    {
        if (n >= '0' && n <= '9')
            process_digit(n - '0', pos++);
    }

    print_digits_array();

    /*
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 7; j++)
            printf("%d ", segments[i][j]);
        printf("\n");
    }
    */

    return 0;
}

void clear_digits_array(void)
{
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4 * MAX_DIGITS; j++)
            digits[i][j] = ' ';
}

void process_digit(int digit, int position)
{
    switch (digit)
    {
        case 0:
            segments[position][0] = 1;
            segments[position][1] = 1;
            segments[position][2] = 1;
            segments[position][3] = 1;
            segments[position][4] = 1;
            segments[position][5] = 1;
            break;
        case 1:
            segments[position][1] = 1;
            segments[position][2] = 1;
            break;
        case 2:
            segments[position][0] = 1;
            segments[position][1] = 1;
            segments[position][3] = 1;
            segments[position][4] = 1;
            segments[position][6] = 1;
            break;
        case 3:
            segments[position][0] = 1;
            segments[position][1] = 1;
            segments[position][2] = 1;
            segments[position][3] = 1;
            segments[position][6] = 1;
            break;
        case 4:
            segments[position][1] = 1;
            segments[position][2] = 1;
            segments[position][5] = 1;
            segments[position][6] = 1;
            break;
        case 5:
            segments[position][0] = 1;
            segments[position][2] = 1;
            segments[position][3] = 1;
            segments[position][5] = 1;
            segments[position][6] = 1;
            break;
        case 6:
            segments[position][0] = 1;
            segments[position][2] = 1;
            segments[position][3] = 1;
            segments[position][4] = 1;
            segments[position][5] = 1;
            segments[position][6] = 1;
            break;
        case 7:
            segments[position][0] = 1;
            segments[position][1] = 1;
            segments[position][2] = 1;
            break;
        case 8:
            segments[position][0] = 1;
            segments[position][1] = 1;
            segments[position][2] = 1;
            segments[position][3] = 1;
            segments[position][4] = 1;
            segments[position][5] = 1;
            segments[position][6] = 1;
            break;
        case 9:
            segments[position][0] = 1;
            segments[position][1] = 1;
            segments[position][2] = 1;
            segments[position][3] = 1;
            segments[position][5] = 1;
            segments[position][6] = 1;
            break;
    }

    for (int i = 0; i < 7; i++)
    {
        if (segments[position][i])
        {
            switch (i)
            {
                case 0:
                    digits[0][(position * 4)+1] = '_';
                    break;
                case 1:
                    digits[1][(position * 4)+2] = '|';
                    break;
                case 2:
                    digits[2][(position * 4)+2] = '|';
                    break;
                case 3:
                    digits[2][(position * 4)+1] = '_';
                    break;
                case 4:
                    digits[2][(position * 4)+0] = '|';
                    break;
                case 5:
                    digits[1][(position * 4)+0] = '|';
                    break;
                case 6:
                    digits[1][(position * 4)+1] = '_';
                    break;
            }
        }
    }
}

void print_digits_array(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4 * MAX_DIGITS; j++)
            printf("%c", digits[i][j]);
        printf("\n");
    }
}
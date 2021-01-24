#include <stdio.h>

#define SIZE (int)(sizeof(a) / sizeof(a[0]))

int main(void)
{
    int n, i, j, row, col;

    printf("This program creates a magic sqaure of a specified size.\n");
    printf("The size must be an odd number.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int a[n][n];

    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
            a[i][j] = 0;

    // set middle element
    row = 0, col = SIZE / 2;
    a[row][col] = 1;

    // up one row, over one column
    for (i = 2; i <= SIZE * SIZE; i++)
    {
        int current_row = row;
        int current_col = col;

        row -= 1;
        col += 1;
        
        // check bounds
        if (row < 0)
            row = SIZE - 1;
        if (col < 0)
            col = SIZE - 1;

        if (row > SIZE - 1)
            row = 0;
        if (col > SIZE - 1)
            col = 0;

        while (a[row][col] > 0)
        {
            row = current_row + 1;
            col = current_col;
        }

        a[row][col] = i;
    }

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
            printf("%5d  ", a[i][j]);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void)
{
    int n;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int a[n][n];

    create_magic_square(n, a);

    print_magic_square(n, a);

    return 0;
}

void create_magic_square(int n, int magic_square[n][n])
{
    int row, col;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            magic_square[i][j] = 0;

    // set middle element
    row = 0, col = n / 2;
    magic_square[row][col] = 1;

    // up one row, over one column
    for (int i = 2; i <= n * n; i++)
    {
        int current_row = row;
        int current_col = col;

        row -= 1;
        col += 1;
        
        // check bounds
        if (row < 0)
            row = n - 1;
        if (col < 0)
            col = n - 1;

        if (row > n - 1)
            row = 0;
        if (col > n - 1)
            col = 0;

        while (magic_square[row][col] > 0)
        {
            row = current_row + 1;
            col = current_col;
        }

        magic_square[row][col] = i;
    }

}

void print_magic_square(int n, int magic_square[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%5d  ", magic_square[i][j]);
        printf("\n");
    }
}
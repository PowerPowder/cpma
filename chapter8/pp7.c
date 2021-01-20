#include <stdio.h>

int main(void)
{
    int a[5][5], i, j, row_sum = 0, col_sum = 0;

    // input 5x5 array of ints
    // row
    for (i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i+1);

        // columns
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }

    printf("Row totals: ");

    // sum rows
    for (i = 0; i < 5; i++)
    {
        // columns
        for (j = 0; j < 5; j++)
            row_sum += a[i][j];

        printf("%d ", row_sum);
        row_sum = 0;
    }

    printf("\n");
    printf("Column totals: ");

    // sum columns
    for (i = 0; i < 5; i++)
    {
        // columns
        for (j = 0; j < 5; j++)
            col_sum += a[j][i];

        printf("%d ", col_sum);
        col_sum = 0;
    }

    return 0;
}
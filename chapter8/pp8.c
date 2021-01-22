#include <stdio.h>

int main(void)
{
    int a[5][5], i, j, student_total, high_score, low_score, quiz_total;

    student_total = high_score = 0;
    low_score = 100;    // make it high so any score is lower

    // input 5x5 array of ints
    // row
    for (i = 0; i < 5; i++)
    {
        printf("Enter student %d results: ", i+1);

        // columns
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }

    printf("\nAverage for each student: ");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            student_total += a[i][j];

        printf("%0.1f ", student_total / 5.0);
        student_total = 0;
    }
    printf("\n");

    printf("Total score for each student: ");

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            student_total += a[i][j];

        printf("%d ", student_total);
        student_total = 0;
    }
    printf("\n");

    printf("Average for each quiz: ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            quiz_total += a[j][i];

        printf("%0.1f ", quiz_total / 5.0);
        quiz_total = 0;
    }
    printf("\n");

    printf("Highest score for each quiz: ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            if (a[j][i] > high_score)
                high_score = a[j][i];

        printf("%d ", high_score);
        high_score = 0;
    }
    printf("\n");

    printf("Lowest score for each quiz: ");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            if (a[j][i] < low_score)
                low_score = a[j][i];

        printf("%d ", low_score);
        low_score = 100;
    }

    return 0;
}
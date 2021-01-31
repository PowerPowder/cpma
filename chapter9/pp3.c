#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10

void generate_random_walk(char walk[N][N]);
void print_array(char walk[N][N]);

int main(void)
{
    char a[N][N];

    generate_random_walk(a);

    print_array(a);

    return 0;
}

void generate_random_walk(char walk[N][N])
{
    char letter = 'A';
    int i, j, row = 0, col = 0, pos[] = {0, 0};
    bool directions[4] = {false};

    srand((unsigned) time(NULL));

    // make 2 dimensional arracol all '.'s
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            walk[i][j] = '.';

    // set the first position at the top left
    walk[0][0] = 'A';
    letter++;

    while (letter <= 'Z')
    {
        row = col = 0;
        switch (rand() % 4)
        {
            case 0:
                col = -1;
                directions[0] = true;
                break;
            case 1:
                row = 1;
                directions[1] = true;
                break;
            case 2:
                col = 1;
                directions[2] = true;
                break;
            case 3:
                row = -1;
                directions[3] = true;
                break;
        }

        row += pos[1];
        col += pos[0];

        // check if it is not going out of bounds
        if ((row < 0 || row > 9) || (col < 0 || col > 9))
            continue;

        // check if the new position is empty
        if (walk[row][col] == '.')
        {
            walk[row][col] = letter;
            pos[1] = row;
            pos[0] = col;

            // reset the tried directions and the moveable directions for the next iteration
            for (i = 0; i < 4; i++)
                directions[i] = false;
        }
        else
        {
            int checks = 0;
            for (i = 0; i < 4; i++)
            {
                if (directions[i])
                    checks++;
            }

            if (checks != 4)
                continue;
            else
                break;
        }

        letter++;
    }
}

void print_array(char walk[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%c ", walk[i][j]);

        printf("\n");
    }
}
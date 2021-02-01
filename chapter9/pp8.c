#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// generates two random numbers between 1-6, adds them then returns the result
int roll_dice(void);

// play one game of craps, prints what the player rolled. Returns true for win, false for loss.
bool play_game(void);

int main(void)
{
    int wins = 0, losses = 0;
    bool play_again = true;
    char ch;

    srand((unsigned)time(NULL));

    while (play_again)
    {
        bool result = play_game();

        if (result)
        {
            printf("You win!\n");
            wins++;
        }
        else
        {
            printf("You lose!\n");
            losses++;
        }

        printf("\nPlay again? ");
        scanf(" %c", &ch);

        if (ch != 'y' && ch != 'Y')
            play_again = false;

        printf("\n");
    }

    printf("Wins: %d Losses: %d\n", wins, losses);

    return 0;
}

bool play_game(void)
{
    bool has_point = false;
    int point = 0, dice;

    while (1)
    {
        dice = roll_dice();
        printf("You rolled: %d\n", dice);

        switch (dice)
        {
            case 7: case 11:
                return true;
                break;
            
            case 2: case 3: case 12:
                return false;
                break;

            default:
                if (dice == point)
                    return true;
                else if (!has_point)
                {
                    point = dice;
                    has_point = true;
                    printf("Your point is %d\n", point);
                }
                break;
        }
    }
}

int roll_dice(void)
{
    int d1, d2;

    d1 = rand() % 6 + 1;
    d2 = rand() % 6 + 1;

    return d1 + d2;
}
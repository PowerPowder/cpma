#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

// hand[n][0] is the rank
// hand[n][1] is the suit
int hand[NUM_CARDS][2];

bool straight, flush, four, three;
int pairs;   // 0, 1 or 2

// Reads the cards into the external varialbes num_in_rank and num_in_suit; checks for bad cards and depulicate cards.
void read_cards(void);

/*
    Determines whether the hand contains a straight, a flush, four-of-a-kind, and/or three-of-a-kind;
    determines the number of pairs; stores the results into the external variables straight, flush,
    four, three and pairs.
*/
void analyse_hand(void);

/*
    Prints the classification of the hand, based on the values of the external variables straight,
    flush, four, three and pairs.
*/
void print_result(void);

// checks the external variable 'hand' if there is a card with the given rank and suit.
bool duplicate_card(int rank, int suit);

// Calls read_cards, analyse_hand and print_result repeatedly.
int main(void)
{
    for (;;)
    {
        read_cards();
        analyse_hand();
        print_result();
    }
}

void read_cards(void)
{
    //bool card_exists[NUM_RANKS][NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 2; j++)
            hand[i][j] = -1;

    while (cards_read < NUM_CARDS)
    {
        bad_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch)
        {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch)
        {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ')
                bad_card = true;

        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (duplicate_card(rank, suit))
            printf("Duplicate card; ignored.\n");
        else
        {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;

            cards_read++;
        }
    }
}

bool duplicate_card(int rank, int suit)
{
    for (int i = 0; i < NUM_CARDS; i++)
        if ((hand[i][0] == rank) && (hand[i][1] == suit))
            return true;

    return false;
}

void analyse_hand(void)
{
    int num_consec = 0, rank, suit, num_suits = 0, card;

    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;

    int ranks[NUM_RANKS] = {0};
    for (int i = 0; i < NUM_CARDS; i++)
        ranks[hand[i][0]]++;

    // check for flush
    suit = hand[0][1];
    for (int i = 0; i < NUM_CARDS; i++)
    {
        if (hand[i][1] == suit)
            num_suits++;
    }

    if (num_suits == NUM_CARDS)
        flush = true;

    // check for straight
    card = 0;
    while (ranks[card] == 0)
        card++;

    for (int i = card; i < NUM_RANKS; i++)
    {
        if (ranks[i] > 0)
            num_consec++;
        else
            break;
    }

    if (num_consec == NUM_CARDS)
    {
        straight = true;
        return;
    }

    // check for 4-of-a-kind, 3-of-a-kind and pairs
    for (rank = 0; rank < NUM_RANKS; rank++)
    {
        if (ranks[rank] == 4) four = true;
        if (ranks[rank] == 3) three = true;
        if (ranks[rank] == 2) pairs++;
    }
}

void print_result(void)
{
    if (straight && flush)          printf("Straight flush");
    else if (four)                  printf("Four of a kind");
    else if (three && pairs == 1)   printf("Full house");
    else if (flush)                 printf("Flush");
    else if (straight)              printf("Straight");
    else if (three)                 printf("Three of a kind");
    else if (pairs == 2)            printf("Two pairs");
    else if (pairs == 1)            printf("Pair");
    else                            printf("High card");

    printf("\n\n");
}
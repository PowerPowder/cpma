#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 100
#define MSG_LEN 60

int read_line (char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+3];
    char day_str[6], time_str[10], msg_str[MSG_LEN+1];
    int day, month, hours, minutes, i, j, num_remind = 0;

    for (;;)
    {
        if (num_remind == MAX_REMIND)
        {
            printf("-- No space left --\n");
            break;
        }

        printf("Enter day and reminder: ");
        scanf("%d/%d", &month, &day);

        if (day == 0 || month == 0)
            break;
        else if (day < 0 || day > 31)
            continue;

        sprintf(day_str, "%2d/%02d", month, day);

        scanf("%2d:%2d", &hours, &minutes);
        sprintf(time_str, " %02d:%02d", hours, minutes);

        read_line(msg_str, MSG_LEN);

        // finds the day to put reminder in
        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;

        // move up all reminders from index i to 20
        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j-1]);

        strcpy(reminders[i], day_str);
        strcat(reminders[i], time_str);
        strcat(reminders[i], msg_str);

        num_remind++;
    }

    printf("\nDay Reminder\n");
    for (i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]);

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';

    return i;
}
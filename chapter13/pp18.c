#include <stdio.h>
#include <string.h>

int main(void)
{
    int month, day, year;

    char *months[] = {
        "Janurary",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2d/%2d/%4d", &month, &day, &year);

    printf("You entered the date %s %d, %d", months[month-1], day, year);

    return 0;
}
#include <stdio.h>

int main()
{
    int hours, minutes;
    char indicator;

    printf("Enter 12-hour time: ");
    scanf("%d:%d %c", &hours, &minutes, &indicator);

    printf("Equivalent 24-hour time: %d:%d", toupper(indicator) == 'P' ? hours+12 : hours, minutes);

    return 0;
}
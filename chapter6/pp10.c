#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int m, d, y, em, ed, ey;
    bool earlier = true;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m, &d, &y);

    ed = d, em = m, ey = y;

    while (m != 0 && d != 0 && y != 0)
    {
        if (y < ey)
            earlier = true;
        else
            if (m < em)
                earlier = true;
            else if (m == em)
                if (d < ed)
                    earlier = true;

        if (earlier)
        {
            ed = d, em = m, ey = y;
            earlier = false;
        }

        printf("Enter a date (mm/dd/yy): ");
        scanf("%2d/%2d/%2d", &m, &d, &y);
    }

    printf("%d/%d/%02d is the earliest date\n", em, ed, ey);

    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int m1, m2, d1, d2, y1, y2;
    bool d1_earlier;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m1, &d1, &y1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m2, &d2, &y2);

    // compare years
        // compare months
            // compare days

    if (y1 < y2)
        d1_earlier = true;
    else if (y1 == y2)
    {
        if (m1 < m2)
            d1_earlier = true;
        else if (m1 == m2)
        {
            if (d1 < d2)
                d1_earlier = true;
            else
                d1_earlier = false;
        }
        else
            d1_earlier = false;
    }
    else
        d1_earlier = false;

    if (d1_earlier)
        printf("%d/%d/%02d is earlier than %d/%d/%02d", m1, d1, y1, m2, d2, y2);
    else
        printf("%d/%d/%02d is earlier than %d/%d/%02d", m2, d2, y2, m1, d1, y1);

    return 0;
}
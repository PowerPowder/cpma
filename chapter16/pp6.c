#include <stdio.h>
#include <stdbool.h>

struct date {
    int month, day, year;
};

struct dates {
    struct date d1;
    struct date d2;
};

int compare_dates(struct date d1, struct date d2);
int day_of_year(struct date d);
void print_date(struct date d);

int main(void)
{
    int m1, m2, d1, d2, y1, y2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m2, &d2, &y2);

    struct date date1 = {m1, d1, y1};
    struct date date2 = {m2, d2, y2};
    struct dates all_dates = {date1, date2};

    if (compare_dates(all_dates.d1, all_dates.d2) > 0)
    {
        print_date(all_dates.d1);
        printf(" is earlier than ");
        print_date(all_dates.d2);
    }
    else
    {
        print_date(all_dates.d2);
        printf(" is earlier than ");
        print_date(all_dates.d1);
    }

    return 0;
}

int compare_dates(struct date d1, struct date d2)
{
    if (day_of_year(d1) < day_of_year(d2))
        return -1;
    else if (day_of_year(d1) > day_of_year(d2))
        return 1;
    else
        return 0;
}

int day_of_year(struct date d)
{
    int days_in_months = 0, i;
    for (i = 1; i < d.month; i++)
    {
        switch (i)
        {
            case 2:
                days_in_months += 28;
                break;
            case 4: case 6: case 9: case 11:
                days_in_months += 30;
                break;
            default:
                days_in_months += 31;
                break;
        }
    }

    if (d.year % 4 == 0)
        days_in_months++;

    return days_in_months + d.day;
}

void print_date(struct date d)
{
    printf("%d/%d/%02d", d.month, d.day, d.year);
}
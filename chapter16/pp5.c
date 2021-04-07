#include <stdio.h>

#define N (int) (sizeof(a) / sizeof(a[0]))

struct times {
    int dtime, atime;
};

int main(void)
{
    int hours, min, time, dtime, atime, dhours, ahours;
    dtime = atime = 0;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &min);

    struct times a[] = {
        { 480,  616},  // 08:00 am   10:16 am
        { 583,  712},  // 09:43 am   11:52 am
        { 679,  811},  // 11:19 am   01:31 pm
        { 767,  900},  // 12:47 pm   03:00 pm
        { 840,  968},  // 02:00 pm   04:08 pm
        { 945, 1075},  // 03:45 pm   05:55 pm
        {1140, 1280},  // 07:00 pm   09:20 pm
        {1305, 1438},  // 09:45 pm   11:58 pm
    };

    time = hours * 60 + min;

    int i = 0;
    while (time >= a[i].dtime)
        i++;

    dtime = a[i].dtime;
    atime = a[i].atime;

    dhours = (dtime - (dtime % 60)) / 60;
    ahours = (atime - (atime % 60)) / 60;

    printf("Closest departure time is %02d:%02d %s, arriving at %02d:%02d %s",
    dhours > 12 ? dhours - 12 : dhours, dtime % 60, dhours >= 12 ? "p.m." : "a.m.",
    ahours > 12 ? ahours - 12 : ahours, atime % 60, ahours >= 12 ? "p.m." : "a.m.");

    return 0;
}
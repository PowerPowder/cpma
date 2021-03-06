#include <stdio.h>

#define SIZE (int)(sizeof(departures) / sizeof(int))

int main(void)
{
    int hours, min, time, dtime, atime, dhours, ahours, i;

    /*
        departures          arrivals
        08:00 am    480     10:16 am    616
        09:43 am    583     11:52 am    712
        11:19 am    679     01:31 pm    811
        12:47 pm    767     03:00 pm    900
        02:00 pm    840     04:08 pm    968
        03:45 pm    945     05:55 pm    1075
        07:00 pm    1140    09:20 pm    1280
        09:45 pm    1305    11:58 pm    1438
    */

    int departures[] = { 480, 583, 679, 767, 840, 945, 1140, 1305 };
    int arrivals[] = { 616, 712, 811, 900, 968, 1075, 1280, 1438 };

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &min);

    time = hours * 60 + min;

    for (i = 0; i < SIZE; i++)
    {
        printf("\ntime=%d dep=%d", time, departures[i]);
        if (time <= departures[i])
        {
            dtime = departures[i];
            atime = arrivals[i];
            break;
        }
    }

    dhours = (dtime - (dtime % 60)) / 60;
    ahours = (atime - (atime % 60)) / 60;

    // (767 - (767 % 60)) / 60  <-  hours
    // 767 % 60  <-  minutes
    printf("Closest departure time is %02d:%02d %s, arriving at %02d:%02d %s",
    dhours > 12 ? dhours - 12 : dhours, dtime % 60, dhours >= 12 ? "p.m." : "a.m.",
    ahours > 12 ? ahours - 12 : ahours, atime % 60, ahours >= 12 ? "p.m." : "a.m.");

    return 0;
}
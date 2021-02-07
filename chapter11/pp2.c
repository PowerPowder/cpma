#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int hours, min, time, dtime, atime, dhours, ahours;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &min);

    time = hours * 60 + min;

    find_closest_flight(time, &dtime, &atime);

    dhours = (dtime - (dtime % 60)) / 60;
    ahours = (atime - (atime % 60)) / 60;

    // (767 - (767 % 60)) / 60  <-  hours
    // 767 % 60  <-  minutes
    printf("Closest departure time is %02d:%02d %s, arriving at %02d:%02d %s",
    dhours > 12 ? dhours - 12 : dhours, dtime % 60, dhours >= 12 ? "p.m." : "a.m.",
    ahours > 12 ? ahours - 12 : ahours, atime % 60, ahours >= 12 ? "p.m." : "a.m.");

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{

    if      (desired_time <=  480 + ( 583 -  480) / 2) *departure_time =  480, *arrival_time  =  616;
    else if (desired_time <=  583 + ( 679 -  583) / 2) *departure_time =  583, *arrival_time  =  712;
    else if (desired_time <=  679 + ( 767 -  679) / 2) *departure_time =  679, *arrival_time  =  811;
    else if (desired_time <=  767 + ( 840 -  767) / 2) *departure_time =  767, *arrival_time  =  900;
    else if (desired_time <=  840 + ( 945 -  840) / 2) *departure_time =  840, *arrival_time  =  968;
    else if (desired_time <=  945 + (1140 -  945) / 2) *departure_time =  945, *arrival_time  = 1075;
    else if (desired_time <= 1140 + (1305 - 1140) / 2) *departure_time = 1140, *arrival_time  = 1280;
    else                                               *departure_time = 1305, *arrival_time  = 1438;
}
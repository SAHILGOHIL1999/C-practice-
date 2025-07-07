#include <stdio.h>
int main()
{
    float mil, yr, day, hr, min, sec;
    printf("Enter a Millenniums = ");
    scanf("%f", &mil);
    yr = mil * 1000;
    day = yr * 365;
    hr = day * 24;
    min = hr * 60;
    sec = min * 60;

    printf(" Seconds is %f", sec);

    return 0;
}
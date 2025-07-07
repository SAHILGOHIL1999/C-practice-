#include <stdio.h>
int main()
{
    float months, days, hours, minutes, seconds;
    printf("Enter months: ");
    scanf("%f", &months);
    days = months * 30.44;
    hours = days * 24;
    minutes = hours * 60;
    seconds = minutes * 60;
    printf("Seconds: %f", seconds);
    return 0;
}
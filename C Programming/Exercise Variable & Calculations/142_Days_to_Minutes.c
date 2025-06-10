#include <stdio.h>
int main()
{
    float days, hours, minutes;
    printf("Enter days: ");
    scanf("%f", &days);
    hours = days * 24;
    minutes = hours * 60;
    printf("Minutes: %f", minutes);
    return 0;
}
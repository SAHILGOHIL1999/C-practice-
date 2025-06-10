#include <stdio.h>
int main()
{
    float months, yr, dy, hours;
    printf("Enter months: ");
    scanf("%f", &months);
    yr = months / 12;
    dy = yr * 365;
    hours = dy * 24;

    printf("Hours: %f", hours);
    return 0;
}
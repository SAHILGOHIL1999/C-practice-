#include <stdio.h>
int main()
{
    float minutes, hours, days, weeks;
    printf("Enter minutes: ");
    scanf("%f", &minutes);
    hours = minutes / 60;
    days = hours / 24;
    weeks = days / 7;
    printf("Weeks: %f", weeks);
    return 0;
}
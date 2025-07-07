#include <stdio.h>
int main()
{
    float hours, days, weeks;
    printf("Enter hours: ");
    scanf("%f", &hours);
    days = hours / 24;
    weeks = days / 7;
    printf("Weeks: %f", weeks);
    return 0;
}
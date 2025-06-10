#include <stdio.h>
int main()
{
    float minutes, hours, days, months;
    printf("Enter minutes: ");
    scanf("%f", &minutes);
    hours = minutes / 60;
    days = hours / 24;
    months = days / 30.44;
    printf("Months: %f", months);
    return 0;
}

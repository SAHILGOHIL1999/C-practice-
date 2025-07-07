#include <stdio.h>
int main()
{
    float weeks, days, months;
    printf("Enter weeks: ");
    scanf("%f", &weeks);
    days = weeks * 7;
    months = days / 30.44;
    printf("Months: %f", months);
    return 0;
}
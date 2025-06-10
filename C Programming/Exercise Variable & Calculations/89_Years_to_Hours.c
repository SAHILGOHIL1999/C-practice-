#include <stdio.h>
int main()
{
    float years, days, hours;
    printf("Enter years: ");
    scanf("%f", &years);
    days = years * 365;
    hours = days * 24;
    printf("Hours: %f", hours);
    return 0;
}
#include <stdio.h>
int main()
{
    float sec, min, hr, days, years, centuries;
    printf("Enter seconds: ");
    scanf("%f", &sec);
    min = sec / 60;
    hr = min / 60;
    days = hr / 24;
    years = days / 365;
    centuries = years / 100;
    printf("Centuries: %f", centuries);
    return 0;
}
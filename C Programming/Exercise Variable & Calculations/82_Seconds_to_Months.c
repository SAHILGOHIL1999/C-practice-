#include <stdio.h>
int main()
{
    float sec, min, hr, days, months;
    printf("Enter seconds: ");
    scanf("%f", &sec);
    min = sec / 60;
    hr = min / 60;
    days = hr / 24;
    months = days / 30.44;
    printf("Months: %f", months);
    return 0;
}
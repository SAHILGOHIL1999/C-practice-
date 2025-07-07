#include <stdio.h>
int main()
{
    float mil, cen, yr, dy, hr, min;

    printf("Enter a Millenniums = ");
    scanf("%f", &mil);

    cen = mil * 10;
    yr = cen * 100;
    dy = yr * 365;
    hr = dy * 24;
    min = hr * 60;

    printf("Minutes id %f", min);

    return 0;
}
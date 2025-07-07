#include <stdio.h>
int main()
{
    float mil, cen, yr, dy;

    printf("Enter a Millenniums = ");
    scanf("%f", &mil);

    cen = mil * 10;
    yr = cen * 100;
    dy = yr * 365;

    printf("Days id %f", dy);

    return 0;
}
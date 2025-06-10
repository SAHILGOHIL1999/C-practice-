#include <stdio.h>
int main()
{
    float mil, cen, yr, mon;

    printf("Enter a Millenniums = ");
    scanf("%f", &mil);

    cen = mil * 10;
    yr = cen * 100;
    mon = yr * 12;

    printf("Weeks id %f", mon);

    return 0;
}
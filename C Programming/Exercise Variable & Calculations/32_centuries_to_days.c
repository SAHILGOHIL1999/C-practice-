#include <stdio.h>
int main()
{
    float cen, yr, wk, dy;

    printf("Enter a Centuries = ");
    scanf("%f", &cen);

    yr = cen * 100;
    wk = yr * 52;
    dy = wk * 7;

    printf("Day id %f", dy);

    return 0;
}
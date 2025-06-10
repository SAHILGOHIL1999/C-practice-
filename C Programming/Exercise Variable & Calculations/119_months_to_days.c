#include <stdio.h>
int main()
{
    float mon, yr, dy;
    printf("Enter months: ");
    scanf("%f", &mon);
    yr = mon / 12;
    dy = yr * 365;
    printf("Days : %f", dy);
    return 0;
}

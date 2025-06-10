#include <stdio.h>
int main()
{
    float wk, yr, cen;

    printf("Enter Weeks : ");
    scanf("%f", &wk);

    yr = wk / 52;
    cen = yr / 100;

    printf("Centuries : %f", cen);
    return 0;
}